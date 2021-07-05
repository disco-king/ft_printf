#include <stdio.h>
#include "ft_printf.h"

int ft_printf(const char *format, ...);
int main ()
{
	unsigned int u = -150;

	printf("mine %d\n", ft_printf("%u\n", u));
	printf("orig %d\n", printf("%u\n", u));
	return (0);
}
