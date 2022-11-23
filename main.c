/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarakel <omerlutfu.k34@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:34:30 by okarakel          #+#    #+#             */
/*   Updated: 2022/11/23 18:13:53 by okarakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/minishell.h"
#include <string.h>

int	main(int argc, char **argv, char **env)
{
	char	*line;

	line = readline("");
	printf("%s", line);
	return (0);
}