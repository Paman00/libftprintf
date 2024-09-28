#include "ft_printf.h"
#include <stdio.h>
#include <assert.h>

int	main(void)
{
	assert(ft_printf("Hello, world!\n") == printf("Hello, world!\n"));
	assert(ft_printf("Hello, %s!\n", "world") == printf("Hello, %s!\n", "world"));
	assert(ft_printf("Hello, %d!\n", 42) == printf("Hello, %d!\n", 42));
	assert(ft_printf("Inferior limit: %d!\n", -2147483648) == printf("Inferior limit: %d!\n", (int)-2147483648));
	assert(ft_printf("Superior limit: %d!\n", 2147483647) == printf("Superior limit: %d!\n", 2147483647));
	assert(ft_printf("Hello, %u!\n", 42) == printf("Hello, %u!\n", 42));
	assert(ft_printf("Hello, %x!\n", 42) == printf("Hello, %x!\n", 42));
	assert(ft_printf("Hello, %X!\n", 42) == printf("Hello, %X!\n", 42));
	assert(ft_printf("16 in hexadecimal: %x!\n", 16) == printf("16 in hexadecimal: %x!\n", 16));
	return (0);
}
