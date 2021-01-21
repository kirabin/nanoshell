/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:48:52 by dmilan            #+#    #+#             */
/*   Updated: 2020/11/23 11:49:37 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strfill(char fill, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putc_fd(fill, 1);
		i++;
	}
}