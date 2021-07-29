#ifndef PHILO_H
# define PHILO_H

# include <limits.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <sys/time.h>
# include <pthread.h>

#define MIL 1000;


/*
** Data Structures 
*/
typedef struct timeval t_timeval;

enum	e_philo_state
{
	EATING,
	SLEEPING,
	THINKING,
	DEAD,
	TAKEN_FORK
};

static char g_state_msg[][50] =
{
	" is eating.",
	" is sleeping",
	" is thinking.",
	" is dead."
	" has taken a fork.",
}


typedef	struct			s_philo {
		int				num;
		e_philo_state	state;
}						t_philo;

int						*g_fork;

typedef struct			s_control{
		t_timeval		simulation_start_time;
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




#endif
