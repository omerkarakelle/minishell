/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okarakel <omerlutfu.k34@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:20:46 by okarakel          #+#    #+#             */
/*   Updated: 2022/11/23 18:16:37 by okarakel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
// # include ""
# include <readline/readline.h>
# include <stdlib.h>

enum type
{
	NOTDEF,
	WORD,
	PIPE,
	REDIR_IN,
	REDIR_OUT,
	REDIR_IN_DBL,
	REDIR_OUT_DBL,
	OPEN_DILE,
	LIMITOR,
	OUTPUT_FILE,
	SINGLE_QUOTE,
	DOUBLE_QUOTE,
	OUTPUT_DBL,
};

typedef struct s_token
{
	char *word;
	enum type type;
	struct tokenize *next;
} token;

typedef struct command
{
	char	*cmd;
	struct s_token	*token;
	struct command *next;
} cmd;

#endif