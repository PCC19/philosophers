/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smart_sleep.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 00:51:23 by pcunha            #+#    #+#             */
/*   Updated: 2021/08/05 00:55:32 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	smart_sleep(long long int time_to_sleep)
{
	long long int	start;

	start = now();
	while (elapsed_time(start) < time_to_sleep)
		msleep(1);
}
