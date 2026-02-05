/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcde-c <marcde-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 18:52:05 by marcde-c          #+#    #+#             */
/*   Updated: 2026/02/05 12:34:01 by marcde-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		write(1, &c[i++], 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (argv[i] != argv[0])
	{
		ft_putchar(argv[i]);
		ft_putchar("\n");
		i--;
	}
	return (0);
}
