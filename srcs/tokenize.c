/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarakel <omerlutfu.k34@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:22:06 by okarakel          #+#    #+#             */
/*   Updated: 2022/11/23 18:34:55 by okarakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

token	*tokenize(char *word)
{
	int		i;
	int		inquote;
	int		indoublequote;
	token	*token;

	inquote = 0;
	indoublequote = 0;
	token = malloc(sizeof(token));
	i = -1;
	while(word[++i])
	{
		if (word[i] == ' ')
			continue;
		else if (word[i] == '|' && inquote == 0 && indoublequote == 0)
		{	
			token->word = strdup("|");
			token->type = PIPE;
		}
	}
}