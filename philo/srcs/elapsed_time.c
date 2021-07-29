/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elapsed_time.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 21:11:22 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/29 21:13:56 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

long int	elapse_time(long int start_time)
{
	t_timeval	now;

	gettimeofday(&now, NULL);
	return ((start_time - now.tv_sec) * 1000);
}
