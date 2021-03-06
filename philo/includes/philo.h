#ifndef PHILO_H
# define PHILO_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/time.h>
# include <pthread.h>

# define MIL 1000

# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define YEL "\e[0;33m"
# define BLU "\e[0;34m"
# define MAG "\e[0;35m"
# define CYN "\e[0;36m"
# define RESET "\e[0m"

/*
** Data Structures 
*/
typedef struct timeval		t_timeval;

static char					g_color[5][10] =
{
	GRN,
	CYN,
	MAG,
	RED,
	YEL
};

enum				e_philo_state
{
	EATING,
	SLEEPING,
	THINKING,
	DEAD,
	TAKEN_FORK,
	INI,
	FULL
};

typedef enum e_philo_state	t_philo_state;

const static char			g_state_msg[][50] =
{
	" is eating.",
	" is sleeping.",
	" is thinking.",
	" died.",
	" has taken a fork."
};

typedef struct s_control	t_control;
typedef struct s_philo		t_philo;

struct						s_control{
	long int			simulation_start_time;
	long int			num_philo;
	long int			time_to_die;
	long int			time_to_eat;
	long int			time_to_sleep;
	long int			number_of_meals;
	long int			count_meals;
	pthread_mutex_t		print_mutex;
	pthread_mutex_t		dead_mutex;
	pthread_mutex_t		*forks;
};

struct						s_philo {
	int					num;
	t_philo_state		state;
	long int			last_meal_start_time;
	int					meals_eaten;
	int					idx_fork_left;
	int					idx_fork_right;
	pthread_t			thread_philo;
	t_control			*control;
	t_philo				*ptr_all_philos;
};

/*
** Functions
*/
void			print_status(int philo_num, t_philo_state state,
					t_control *control);
int				ft_isdigit(int c);
int				is_integer(char *s);
double			ft_atoi(const char *str);
void			validate_inputs(int argc, char *argv[]);
int				init_control(int argc, char *argv[], t_control *control);
long long int	elapsed_time(long long int start_time);
long long int	now(void);
void			print_control(t_control control);
int				msleep(long long int time_in_ms);
void			smart_sleep(long long int time_to_sleep);
void			finish(t_philo *philo);
t_philo			*init_philo(t_control *control);
void			init_forks(t_control *control);
void			*philosopher(void *param);
int				eating(t_philo *philo);
int				sleeping(t_philo *philo);
int				thinking(t_philo *philo);
void			drop_forks(t_philo *philo);
void			get_forks(t_philo *philo);
int				check_death(t_philo *philo);
int				check_stop(t_philo *philo);

#endif
