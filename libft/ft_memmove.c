/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiniz-m <ddiniz-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:23:25 by ddiniz-m          #+#    #+#             */
/*   Updated: 2022/11/03 17:28:55 by ddiniz-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*dstr;
	const char		*sstr;

	dstr = (char *)dest;
	sstr = (const char *)src;
	if (dstr == 0 && sstr == 0 && n == 0)
		return (0);
	if (sstr < dstr)
	{
		while (n--)
			dstr[n] = sstr[n];
	}
	else
		ft_memcpy(dstr, sstr, n);
	return (dstr);
}

/* #include <stdio.h>
int main()
{
	printf("WITH OVERLAP\n");
    char str[] = "Hello! How are you today?";
    printf("	Original = %s\n", str);
    printf("	Source = %s\n", str + 7);
    printf("	Destination = %s\n", str + 11);
    ft_memmove(str + 11, str + 7, 25);
    printf("	Result = %s\n", str);
    
    char str2[] = "Hello! How are you today?";
    memmove(str2 + 11, str2 + 7, 25);
    printf("	What it should be = %s\n\n", str2);

	printf("	(sstr < dstr) test: %ld\n", (str2 + 7) - (str2 + 11));
	printf("	(dstr < sstr + n) test: %ld\n\n", (str2 + 11) - (str2 + 7 + 25));
	
	printf("WITHOUT OVERLAP\n");
	char str3[] = "From the GrandLine";
	char str4[] = "To the NewWorld";
    printf("	Source = %s\n", str3);
    printf("	Destination = %s\n", str4);
	ft_memmove(str4, str3, 15);
	printf("	Result = %s\n", str4);

	char str5[] = "From the GrandLine";
	char str6[] = "To the NewWorld";
	memmove(str6, str5, 15);
	printf("	What it should be = %s\n\n", str6);
	
	printf("	(sstr < dstr) test: %ld\n", str5 - str6);
	printf("	(dstr < sstr + n) test: %ld\n", str6 - (str5 + 15));
} */