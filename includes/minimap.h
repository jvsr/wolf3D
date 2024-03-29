/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   minimap.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: jvisser <jvisser@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/05/23 12:59:25 by jvisser        #+#    #+#                */
/*   Updated: 2019/05/23 19:59:43 by jvisser       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIMAP_H
# define MINIMAP_H

# include "xlm.h"

# define MINIMAP_PTR mlx->minimap
# define MINIMAP_ADD mlx->mm_data_addr

void	create_minimap(t_mlx *mlx);

#endif
