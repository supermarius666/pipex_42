/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 21:28:57 by mdumitru          #+#    #+#             */
/*   Updated: 2024/12/23 21:28:57 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

t_pipex	*init_pipex()
{
	t_pipex	*pipex;

	pipex = (t_pipex *)malloc(sizeof(t_pipex));
	pipex->cmds = NULL;
	pipex->args = NULL;
	pipex->in_fd = 0;
	pipex->out_fd = 0;
	return (pipex);
}

int		get_fd(char *filename)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR);
	if (fd < 0)
		return (-1);
	return (fd);
}

int		check_input(int argc)
{
	/*	mandatory part 
	*	if argc < 5 || argc != (cmd * args)
	*/
	if (argc != 5)
	{
		error("Invalid number of args!");
		return (-1);
	}
	return (0);
}

void	parse_input(int argc ,char **argv, t_pipex *pipex)
{
	
	if (!argv)
		return ;
	if (check_input(argc) == -1)
		exit(EXIT_FAILURE);
	
}