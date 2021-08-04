/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:49:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/04 17:14:18 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"



int	main(int argc, char *argv[])
{
	t_philo		*philo;
	t_control	control;

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
	philosopher(philo);
	printf("saiu philosopher\n");

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
