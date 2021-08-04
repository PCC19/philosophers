#ifndef PHILO_H
# define PHILO_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/time.h>
# include <pthread.h>

#define MIL 1000


/*
** Data Structures 
*/
typedef struct timeval t_timeval;

typedef	enum	e_philo_state
{
	EATING,
	SLEEPING,
	THINKING,
	DEAD,
	TAKEN_FORK,
	INI
}				t_philo_state;

static char g_state_msg[][50] =
{
	" is eating.",
	" is sleeping",
	" is thinking.",
	" is dead.",
	" has taken a fork."
};

typedef struct			s_control{
		long int		simulation_start_time;
		long int		num_philo;
		long int		time_to_die;
		long int		time_to_eat;
		long int		time_to_sleep;
		long int		number_eatings;
		pthread_mutex_t	*forks;
}						t_control;

typedef	struct			s_philo {
		int				num;
		t_philo_state	state;
		long int		last_meal_start_time;
		int				number_of_meals;
		int				idx_fork_left;
		int				idx_fork_right;
		pthread_t		thread_philo;
		t_control		*control;
}						t_philo;

/*
** Functions
*/
void			print_status(int philo_num, t_philo_state state, t_control *control);
int				ft_isdigit(int c);
int				is_integer(char *s);
double			ft_atoi(const char *str);
void			validate_inputs(int argc, char *argv[]);
int				init_control(int argc, char *argv[], t_control *control);
long long int	elapsed_time(long long int start_time);
long long int	now(void);
void			print_control(t_control control);
int				msleep(long long int time_in_ms);
void			finish(t_philo *philo);
t_philo*		init_philo(t_control *control);
void			init_forks(t_control *control);
int				philosopher(t_philo *philo);
void			eating(t_philo *philo);
void			sleeping(t_philo *philo);
int				thinking(t_philo *philo);





#endif
