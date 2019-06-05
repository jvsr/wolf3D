/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvisser <jvisser@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 18:25:44 by jvisser           #+#    #+#             */
/*   Updated: 2019/01/17 13:22:51 by jvisser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(const int nb)
{
	int a;

	a = 0;
	if (nb < 0)
		return (0);
	while (a != 46341 && a * a != nb)
		a++;
	if (a * a == nb)
		return (a);
	else
		return (0);
}