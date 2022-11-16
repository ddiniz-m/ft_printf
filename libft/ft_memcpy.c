/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:28:09 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/03 16:17:49 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	const char		*sstr;
	char			*dstr;

	i = 0;
	sstr = (const char *)src;
	dstr = (char *)dest;
	if (sstr == 0 && dstr == 0)
		return (0);
	while (i < n)
	{
		dstr[i] = sstr[i];
		i++;
	}
	return (dest);
}

/* int main()
{
	char str[] = "Hello! How are you today?";
	printf("Original = %s\n", str);
	printf("Source = %s\n", str + 7);
	printf("Destination = %s\n", str + 11);
	ft_memcpy(str + 11, str + 5, 25);
	printf("Result = %s\n", str);
	
} */
