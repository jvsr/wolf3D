/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   error.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nvreeke <nvreeke@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/04/15 17:28:23 by nvreeke        #+#    #+#                */
/*   Updated: 2019/08/26 14:03:30 by jvisser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "../libft/libft.h"

void	no_param(void)
{
	ft_putendl("Usage: ./wolf3d <map parameter>");
	exit(EXIT_FAILURE);
}

void	exit_msg(char *msg)
{
	ft_putstr("Error: ");
	ft_putstr(msg);
	ft_putchar('\n');
	exit(EXIT_FAILURE);
}

void	exit_failure_errno(void)
{
	perror("Error");
	exit(EXIT_FAILURE);
}
