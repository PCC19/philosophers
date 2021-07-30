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
	TAKEN_FORK
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
}						t_philo;

int						*g_fork;

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
void	print_status(int philo_num, t_philo_state state, t_control *control);
int		ft_isdigit(int c);
int		is_integer(char *s);
double	ft_atoi(const char *str);
int		parse_inputs(int argc, char *argv[], t_control *control);
long int	elapsed_time(long int start_time);
int	philosopher(t_control *control, t_philo **philo, int *g_fork, int num);
long int	now(void);
void	print_control(t_control control);





#endif
