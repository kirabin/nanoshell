/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:24:48 by dmilan            #+#    #+#             */
/*   Updated: 2021/02/07 15:57:09 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H
# include "libft/libft.h"
# include "built_in/built_in.h"
# include "support_functions/support_functions.h"
# include <unistd.h>
# include <sys/errno.h>
# include <stdlib.h>
# include <string.h>

typedef struct	s_vars
{
	char		*raw_string;
	char		**envp;
}				t_vars;

#endif