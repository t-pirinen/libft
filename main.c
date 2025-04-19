/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpirinen <tpirinen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:31:14 by tpirinen          #+#    #+#             */
/*   Updated: 2025/04/19 14:15:44 by tpirinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <assert.h>
#include <bsd/string.h>

#if MYASSERT
void	assert(bool condition)
{
	if (condition == false) {
		print_error();
		abort();
	}
}
#endif

int main(void) 
{
	//	ASCII TESTS										ASCII TESTS

// ft_isalnum
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n\n", isalnum('a'));

	assert(ft_isalnum('#') == 0);
	assert(ft_isalnum('a') == isalnum('a'));

// ft_isalpha
	printf("%d\n", isalpha('a'));
	printf("%d\n\n", ft_isalpha('a'));

	assert(ft_isalpha(9) == 0);
	assert(ft_isalpha('a') == isalpha('a'));

// ft_isascii
	printf("%d\n", ft_isascii(127));
	printf("%d\n\n", isascii(127));

	assert(ft_isascii(128) == 0);
	assert(ft_isascii('A') == isascii('A'));

// ft_isdigit
	printf("%d\n", isdigit('5'));
	printf("%d\n\n", ft_isdigit('5'));

	assert(ft_isdigit('a') == 0);
	assert(ft_isdigit('5') == isdigit('5'));

// ft_isprint
	printf("%d\n", isprint(' '));
	printf("%d\n\n", ft_isprint(' '));

	assert(ft_isprint(31) == 0);
	assert(ft_isprint('A') == isprint('A'));

// ft_tolower
	printf("%c\n", tolower('A'));
	printf("%c\n\n", ft_tolower('A'));

	assert(ft_tolower('A') == tolower('A'));
	assert(ft_tolower('a') == tolower('a'));
	assert(ft_tolower('1') == tolower('1'));

// ft_toupper
	printf("%c\n", toupper('a'));
	printf("%c\n\n", ft_toupper('a'));

	assert(ft_toupper('a') == toupper('a'));
	assert(ft_toupper('A') == toupper('A'));
	assert(ft_toupper('1') == toupper('1'));

	// STRING TESTS										STRING TESTS

	printf("\n!!! STRING TESTS START HERE!!! \n\n");

// ft_strlcpy
	char strlcpy_src[100] = "This is a test string";
    char strlcpy_dst[100] = "";

    size_t len1 = strlcpy(strlcpy_dst, strlcpy_src, sizeof(strlcpy_dst));
    printf("strlcpy copied %zu bytes\n", len1);
    printf("Destination string: %s\n\n", strlcpy_dst);

	size_t len2 = ft_strlcpy(strlcpy_dst, strlcpy_src, sizeof(strlcpy_dst));
    printf("ft_strlcpy copied %zu bytes\n", len2);
    printf("Destination string: %s\n", strlcpy_dst);




	// MEMORY TESTS										MEMORY TESTS

	printf("\n!!! MEMORY TESTS START HERE!!! \n\n");

// ft_memset
	char	mem_x[12] = "memset test";
	char	mem_y[12] = "memset test";
	char	mem_z[12] = "memset test";
	char	mem_a[12] = "memset test";
	memset(mem_x, '*', 1);
	ft_memset(mem_y, '*', 1);
	memset(mem_z, '*', 11);
	ft_memset(mem_a, '*', 11);
	printf("%s\n", mem_x);
	printf("%s\n", mem_y);
	printf("%s\n", mem_z);
	printf("%s\n\n", mem_a);

	assert(ft_memset(mem_x, '*', 5) == memset(mem_x, '*', 5));
	assert(ft_memset(mem_x, '*', 12) == memset(mem_x, '*', 12));
	assert(ft_memset(mem_x, ' ', (0)) == memset(mem_x, ' ', (0)));

	char	mem_b[12] = "bzero test";
	char	mem_c[12] = "bzero test";
	char	mem_d[12] = "bzero test";
	char	mem_e[12] = "bzero test";
	bzero(mem_b, 1);
	ft_bzero(mem_c, 1);
	bzero(mem_d, 10);
	ft_bzero(mem_e, 10);
	printf("%s\n", mem_b);
	printf("%s\n", mem_c);
	printf("%s\n", mem_d);
	printf("%s\n\n", mem_e);

//	memcpy
	char memcpy_src[20] = "Hello, World!";
	char ft_src[20] = "Hello, World!";
    char dest[20] = "";
    char ft_dest[20] = "";

    printf("Original: %s\n", memcpy_src);
	
    memcpy(dest, memcpy_src, 10);
    ft_memcpy(ft_dest, ft_src, 10);

    printf("memcpy: %s\n", dest);
    printf("ft_memcpy: %s\n", ft_dest);

	






}
