/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:49:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/02 19:26:00 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"



int	main(int argc, char *argv[])
{
	int			*forks;
	t_philo		*philo;
	t_control	control;
	// forks declarada como global no .h

	// processa inputs
	parse_inputs(argc, argv, &control);

	// init
	control.simulation_start_time = now();
		print_control(control);
	forks = init_forks(&control);
	philo = init_philo(&control, forks);


	// calc
	philosopher(&control, &philo, &forks, 1);
	printf("saiu philosopher\n");


	//finish
	finish(philo, forks);

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
