#include "../includes/ft_printf.h"

int		main(void)
{
	int a;
	int *p;

	a = 1;
	p = &a;
	printf("--------------p---------------\n");
	ft_printf("my42 : %%p\t  : |%p$\n", p);
	printf("nati : %%p\t  : |%p$\n", p);
	usleep(500);
	ft_printf("my42 : %%0p\t  : |%*p$\n", 0, p);
	printf("nati : %%0p\t  : |%*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%12p\t  : |%*p$\n", 12, p);
	printf("nati : %%12p\t  : |%*p$\n", 12, p);
	usleep(500);
	ft_printf("my42 : %%20p\t  : |%*p$\n", 20, p);
	printf("nati : %%20p\t  : |%*p$\n", 20, p);
	usleep(500);
	ft_printf("my42 : %%-12p\t  : |%*p$\n", -12, p);
	printf("nati : %%-12p\t  : |%*p$\n", -12, p);
	usleep(500);
	ft_printf("my42 : %%-20p\t  : |%*p$\n", -20, p);
	printf("nati : %%-20p\t  : |%*p$\n", -20, p);
	usleep(500);

	return 0;
}
