/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 19:16:31 by dmilan            #+#    #+#             */
/*   Updated: 2021/04/07 14:25:44 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(int n)
{
	char	*res;

	res = malloc(sizeof(char) * (n + 1));
	if (!res)
		return (NULL);
	res[n] = '\0';
	return (res);
}
