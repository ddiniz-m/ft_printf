/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:44:10 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/03 16:38:40 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr != 0)
		ft_memset(ptr, 0, size * nmemb);
	return (ptr);
}

/* int	main()
{
	char *ptr1 = "Hello";
	char *ptr = "Yahoo";
	ptr1 = ft_calloc(5, sizeof(char));
	ptr = calloc(5, sizeof(char));
	free(ptr);
	free(ptr1);
	return(0);
} */