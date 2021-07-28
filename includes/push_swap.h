/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:42:01 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/23 22:19:55 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>
# include <limits.h>

/*
** Data Structures 
*/

/*
** Functions
*/
char	*remove_quotes(char *str);
void	bye(void);
void	u_print_array_bi(char **s);
int		parse_inputs(int argc, char *argv[], double **array, int *n_array);
int		is_integer(char *s);
double	*populate_array(int argc, char **array_bi);
void	q_sort(double *array, int left, int right);
void	check_repeated(double *array, int n_array);
t_dlist	*ft_dlst_push(double *value, t_dlist *list);
void	u_free_dlst(t_dlist *list);
int		len_dlst(t_dlist *list);
t_dlist	*last_dlst(t_dlist *list);
t_dlist	*first_dlst(t_dlist *list);
void	u_print_stack(t_dlist *list, char c);
t_dlist	*push_array_into_stack(double *array, int n_array, t_dlist *list);
void	push(t_dlist **to, t_dlist **from);
void	rotate(t_dlist **a);
void	reverse_rotate(t_dlist **a);
void	swap(t_dlist **a);
void	print_stacks(t_dlist *a, t_dlist *b);
void	pa(t_dlist **a, t_dlist **b);
void	pb(t_dlist **a, t_dlist **b);
void	ra(t_dlist **a, t_dlist **b);
void	rb(t_dlist **a, t_dlist **b);
void	sa(t_dlist **a, t_dlist **b);
void	sb(t_dlist **a, t_dlist **b);
void	rra(t_dlist **x);
void	rrb(t_dlist **x);
void	ss(t_dlist **a, t_dlist **b);
void	rr(t_dlist **a, t_dlist **b);
void	rrr(t_dlist **a, t_dlist **b);
double	dlst_min(t_dlist *list);
double	dlst_max(t_dlist *list);
int		is_stack_sorted(t_dlist *list);
void	normalize_array(double **array, int n_array);
int		most_significant_bit_position(double num);
void	radix_sort(t_dlist **a, t_dlist **b);
void	sort_3(t_dlist **a, t_dlist **b);
void	sort_5(t_dlist **a, t_dlist **b);
#endif
