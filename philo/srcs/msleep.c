/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   msleep.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:21:06 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/30 18:24:50 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	msleep(long long int time_in_ms)
{
	return (usleep(time_in_ms * 1000));
}
