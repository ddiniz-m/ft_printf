/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:44:11 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/03 16:07:19 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

/* int main()
{
	int i;
	
	i = 0;
	char str[] = "hello";
	
	while(str[i] != '\0')
	{
		printf("%c", ft_toupper(str[i]));
		i++;
	}
	return(0);
} */