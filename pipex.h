/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 21:29:03 by mdumitru          #+#    #+#             */
/*   Updated: 2024/12/23 21:29:03 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <errno.h>
# include "list.h"

typedef struct s_pipex
{	
	int		in_fd;
	int		out_fd;
	t_list	*cmds;
	t_list	*args;
}	t_pipex;


/* sub functions*/
t_pipex	*init_pipex();
void	parse_input(int argc ,char **argv, t_pipex *pipex);
int		check_input(int argc);
int		get_fd(char *filename);

/* main function */
void	init();

/* handle error */
void	handle_error(const char *msg);
int		error(char *msg);
#endif 