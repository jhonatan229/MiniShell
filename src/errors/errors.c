/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavinici <mavinici@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 22:24:49 by mavinici          #+#    #+#             */
/*   Updated: 2021/10/24 23:01:32 by mavinici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	not_found(char *command)
{
	printf("%s: command not found\n", command);
	return (127);
}

int	invalid_option(char *s)
{
	if (ft_strlen(s) > 1)
		printf("bash: export: `%c%c': not a valid option\n", s[0], s[1]);
	else
		printf("bash: export: `%c': not a valid option\n", s[0]);
	return (2);
}

void	invalid_identifier(char *str)
{
	printf("bash: export: `%s': not a valid identifier\n", str);
}

int	error_no_file(char *path)
{
	printf("minishell: cd: %s: %s\n", path, NO_FILE);
	return (1);
}

int	error_cd(char *message)
{
	printf("minishell: cd: %s\n", message);
	return (1);
}

int	no_file(char *file)
{
	ft_putstr_fd("minishell: ", 2);
	ft_putstr_fd(file, 2);
	ft_putstr_fd(" :", 2);
	ft_putendl_fd(strerror(errno), 2);
	return (127);
}
