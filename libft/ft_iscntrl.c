/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iscntrl.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: jvisser <jvisser@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/03/05 13:49:26 by jvisser        #+#    #+#                */
/*   Updated: 2019/03/05 13:53:24 by jvisser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_iscntrl(int c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (1);
	return (0);
}