/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 17:00:55 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 19:28:18 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	print_philo(t_philo *philo, int *forks, int i)
{
	printf(" ------------------- \n");
	printf("i: %d\n", i); 
	printf("num: %d\n", philo[i].num);
	printf("stat: %d\n", philo[i].state);
	printf("meal_time: %ld\n", philo[i].last_meal_start_time);
	printf("n meals: %d\n", philo[i].number_of_meals);
	printf("forks left: %d\n", philo[i].idx_fork_left);
	printf("value: %d \n", forks[philo[i].idx_fork_left]);
	printf("forks right: %d \n", philo[i].idx_fork_right);
	printf("value: %d \n", forks[philo[i].idx_fork_right]);
}

t_philo* 	init_philo(t_control *control, int *forks)
{
	int			i;
	t_philo		*philo;

	philo = (t_philo* )malloc(sizeof(t_philo) * control->num_philo);
	i = 0;
	while (i < control->num_philo)
	{
		philo[i].num = i + 1;
		philo[i].state = INI;
		philo[i].last_meal_start_time = control->simulation_start_time;
		philo[i].number_of_meals = 0;
		philo[i].idx_fork_left = (i);
		philo[i].idx_fork_right = (i + 1) % (control->num_philo);
			print_philo(philo, forks, i);
		i++;
	}
	return (philo);
}
