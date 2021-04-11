/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmilan <dmilan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 12:24:29 by dmilan            #+#    #+#             */
/*   Updated: 2021/04/11 17:44:12 by dmilan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

// TODO: should we keep it?

void	handle_signal(int signal_code)
{
	ft_putendl(NULL);
	ft_putstr_fd("sigal caught: ", 1);
	ft_puti_fd(signal_code, 1);
	ft_putendl(NULL);
	exit(0); // TODO: handle signals
}

int		main(int argc, char **argv, char **envp)
{
	t_vars	vars;

	if (argc && argv)
		;
	vars.env_list = ft_envp_to_env_list(envp);
	// signal(SIGINT, handle_signal);
	// ft_env_list_print(vars.env_list);
	init_history(&vars);
	vars.term_name = "xterm-256color";
	if (tcgetattr(0, &vars.term) || tcgetattr(0, &vars.term_orig_attr))
		puterror("Error: tcgetattr\n", 1);
	vars.term.c_lflag &= ~(ECHO);
	vars.term.c_lflag &= ~(ICANON);
	tcsetattr(0, TCSANOW, &vars.term);
	tgetent(0, vars.term_name);
	while (1)
	{
		ft_putstr(PROMPT);
		tputs(save_cursor, 1, ft_putint);
		read_input(&vars);
	}
	write_history(&vars);
	ft_env_list_clear(&vars.env_list);
	return (0);
}