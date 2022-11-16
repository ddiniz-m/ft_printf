/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:07:50 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/08 16:46:23 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write (fd, "-2147483648", 11);
			return ;
		}
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(nb * (-1), fd);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr_fd(nb / 10, fd);
		}
		ft_putchar_fd((nb % 10) + 48, fd);
	}
}

/* #include <stdio.h>
int main()
{
	int i;

	i = -2147483648L;
	ft_putnbr_fd(i, 2);
} */