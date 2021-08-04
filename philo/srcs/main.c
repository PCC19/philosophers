/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:49:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/04 17:38:09 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"



int	main(int argc, char *argv[])
{
	t_philo		*philo;
	t_control	control;
	int			i;

	// processa inputs
	validate_inputs(argc, argv);

	// init
	init_control(argc, argv, &control);
	init_forks(&control);
	philo = init_philo(&control);
	control.simulation_start_time = now();
		print_control(control);

	// calc
		// inicializar threads
	i = 0;
	while (i < control.num_philo)
	{
		pthread_create(&philo[i].thread_philo, NULL, philosopher, &philo[i]);
		i++;
	}
	i = 0;
	while (i < control.num_philo)
	{
		pthread_join(philo[i].thread_philo, NULL);
		i++;
	}

	//philosopher(philo);
	//printf("saiu philosopher\n");

	//finish
	finish(philo);
		// free control dentro do philo ?
		// free mutex fork
		// free threads


	printf("Hello World \n");
	exit (0);
}
/* criar struct para philos
	estado
		eating (ocupa forkss)
		sleeping (nao faz nada)
		thinking (procura forkss)
	id: num de 1 a N

	Variaveis
		forkss: array de ints
		array de filos
		controle
		array de mutexs ?
		array de threads ?

	funcao simples para transicao de estado e print time_stamp
	funcao para transicao de estado


*/
