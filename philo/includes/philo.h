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

typedef	struct			s_philo {
		int				num;
		t_philo_state	state;
		long int		last_meal_start_time;
		int				number_of_meals;
		int				idx_fork_left;
		int				idx_fork_right;
}						t_philo;

typedef struct			s_control{
		long int		simulation_start_time;
		long int		num_philo;
		long int		time_to_die;
		long int		time_to_eat;
		long int		time_to_sleep;
		long int		number_eatings;
}						t_control;

typedef struct			s_vars{
	t_philo				*philo;
	t_control			control;
}						t_vars;



/*
** Functions
*/
void			print_status(int philo_num, t_philo_state state, t_control *control);
int				ft_isdigit(int c);
int				is_integer(char *s);
double			ft_atoi(const char *str);
int				parse_inputs(int argc, char *argv[], t_control *control);
long long int	elapsed_time(long long int start_time);
int				philosopher(t_control *control, t_philo **philo, int **forks, int num);
long long int	now(void);
void			print_control(t_control control);
int				msleep(long long int time_in_ms);
void			finish(t_philo *philo, int *forks);
t_philo*		init_philo(t_control *control, int *forks);
int				*init_forks(t_control *control);


#endif
