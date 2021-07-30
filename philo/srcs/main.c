/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:49:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/30 18:09:32 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"



int	main(int argc, char *argv[])
{
	t_philo		*philo;
	t_control	control;
	// fork declarada como global no .h

	// processa inputs
	parse_inputs(argc, argv, &control);

	// init
	philo = (t_philo* )malloc(sizeof(t_philo*) * control.num_philo);
	control.simulation_start_time = now();
		print_control(control);

	// calc
	philosopher(&control, &philo, g_fork, 3);


	//finish
	free(philo);


	printf("Hello World \n");
	exit (0);
}
/* criar struct para philos
	estado
		eating (ocupa forks)
		sleeping (nao faz nada)
		thinking (procura forks)
	id: num de 1 a N

	Variaveis
		forks: array de ints
		array de filos
		controle
		array de mutexs ?
		array de threads ?

	funcao simples para transicao de estado e print time_stamp
	funcao para transicao de estado


*/
