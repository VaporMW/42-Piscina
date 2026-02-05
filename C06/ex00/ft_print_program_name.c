/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:49:05 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/05 12:39:25 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		write(1, &c[i++], 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_putstr(argv[0]);
	ft_putstr("\n");
	return (0);
}
