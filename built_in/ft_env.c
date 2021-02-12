/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/07 09:47:21 by dmilan            #+#    #+#             */
/*   Updated: 2021/02/12 08:49:45 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

/*
**   Print environment variables
*/

int		ft_env(char **envp)
{
	int i;

	if (!envp)
	{
		//error
	}
	i = 0;
	while (envp[i])
	{
		ft_putstr_fd(envp[i], 1);
		ft_putc_fd('\n', 1);
		i++;
	}
	return (1);
}

int		ft_env_declare(char **envp)
{
	int i;
	
	if (!envp)
	{
		//error
	}
	i = 0;
	while (envp[i])
	{
		ft_putstr_fd("declare -x ", 1);
		ft_putstr_fd(envp[i], 1);
		ft_putc_fd('\n', 1);
		i++;
	}
	return (1);
}