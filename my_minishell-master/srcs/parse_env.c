/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hgoncalv <hgoncalv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:19:58 by hgoncalv          #+#    #+#             */
/*   Updated: 2023/01/06 20:40:46 by hgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/minishell.h"

int	ft_env(char **argv)
{
	int	i;
	int	argc;

	argc = -1;
	while (argv[++argc])
		;
	if (argc == 1)
	{
		i = -1;
		while (_shell()->envp[++i])
		{
			if (_shell()->envp[i][0] == '?' && _shell()->envp[i][1] == '=')
				continue ;
			if (ft_strchr(_shell()->envp[i], '=') == NULL)
				continue ;
			printf("%s\n", _shell()->envp[i]);
		}
	}
	else
		printf("env: too many arguments\n");
	return (0);
}
