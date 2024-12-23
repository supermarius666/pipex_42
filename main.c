/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdumitru <mdumitru@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 21:28:45 by mdumitru          #+#    #+#             */
/*   Updated: 2024/12/23 21:28:45 by mdumitru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv)
{
	t_pipex *pipex;

	pipex = init_pipex();
	parse_input(argc, argv, pipex);
	
}