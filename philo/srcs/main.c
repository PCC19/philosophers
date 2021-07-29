/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 20:49:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/29 18:22:50 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char *argv[])
{
	(void) argc;
	(void) argv;
	t_philo		*philo;
	t_control	control;
	// fork declarada como global no .h
	

	// processa inputs


	// init
	control.num_philo = 2;
	philo = (t_philo* )malloc(sizeof(t_philo*) * control.num_philo);
	int	i = 0;
	while (++i <= control.num_philo)
	{
		philo[i].num = i;
		philo[i].state = SLEEPING;
	}

	gettimeofday(&control.simulation_start_time, NULL);
	

	// calc
	print_status(0, EATING, &control);
	print_status(0, SLEEPING, &control);
	print_status(0, THINKING, &control);
	print_status(0, DEAD, &control);
	print_status(0, TAKEN_FORK, &control);


	//finish
	free(philo);



	t_timeval ini;
	t_timeval fin;

	gettimeofday(&ini, NULL);
	printf("ini: %ld\n", ini.tv_sec);
	usleep(5000000);
	gettimeofday(&fin, NULL);
	printf("fin: %ld\n", fin.tv_sec);
	printf("dif: %ld\n", fin.tv_sec - ini.tv_sec);


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

	funcao para imprimir timestamp
		funcao simples para transicao de estado e print time_stamp
	funcao para transicao de estado


*/
