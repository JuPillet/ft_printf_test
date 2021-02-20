#include "../ft_printf.h"

int		main(void)
{
	int a;
	int *p;
	int	nbcmy42;
	int nbcnati;

	a = 1;
	p = &a;

	printf("----------p---positive--------\n");
	ft_printf("my42 : %%p\t : |%p$\n", p);
	printf("nati : %%p\t : |%p$\n", p);
	usleep(500);
	ft_printf("my42 : %%0p\t : |%*p$\n", 0, p);
	printf("nati : %%0p\t : |%*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%5p\t : |%*p$\n", 5, p);
	printf("nati : %%5p\t : |%*p$\n", 5, p);
	usleep(500);
	ft_printf("my42 : %%10p\t : |%*p$\n", 10, p);
	printf("nati : %%10p\t : |%*p$\n", 10, p);
	usleep(500);
	ft_printf("my42 : %%-5p\t : |%*p$\n", -5, p);
	printf("nati : %%-5p\t : |%*p$\n", -5, p);
	usleep(500);
	ft_printf("my42 : %%-10p\t : |%*p$\n", -10, p);
	printf("nati : %%-10p\t : |%*p$\n", -10, p);
	usleep(500);
	ft_printf("my42 : %%.0p\t : |%.*p$\n", 0, p);
	printf("nati : %%.0p\t : |%.*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%.3p\t : |%.*p$\n", 3, p);
	printf("nati : %%.3p\t : |%.*p$\n", 3, p);
	usleep(500);
	ft_printf("my42 : %%.5p\t : |%.*p$\n", 5, p);
	printf("nati : %%.5p\t : |%.*p$\n", 5, p);
	usleep(500);
	ft_printf("my42 : %%.7p\t : |%.*p$\n", 7, p);
	printf("nati : %%.7p\t : |%.*p$\n", 7, p);
	usleep(500);
	ft_printf("my42 : %%.-7p\t : |%.*p$\n", -7, p);
	printf("nati : %%.-7p\t : |%.*p$\n", -7, p);
	usleep(500);
	ft_printf("my42 : %%0.0p\t : |%*.*p$\n", 0, 0, p);
	printf("nati : %%0.0p\t : |%*.*p$\n", 0, 0, p);
	usleep(500);
	ft_printf("my42 : %%0.3p\t : |%*.*p$\n", 0, 3, p);
	printf("nati : %%0.3p\t : |%*.*p$\n", 0, 3, p);
	usleep(500);
	ft_printf("my42 : %%0.5p\t : |%*.*p$\n", 0, 5, p);
	printf("nati : %%0.5p\t : |%*.*p$\n", 0, 5, p);
	usleep(500);
	ft_printf("my42 : %%0.7p\t : |%*.*p$\n", 0, 7, p);
	printf("nati : %%0.7p\t : |%*.*p$\n", 0, 7, p);
	usleep(500);
	ft_printf("my42 : %%0.-7p\t : |%*.*p$\n", 0, -7, p);
	printf("nati : %%0.-7p\t : |%*.*p$\n", 0, -7, p);
	usleep(500);
	ft_printf("my42 : %%5.0p\t : |%*.*p$\n", 5, 0, p);
	printf("nati : %%5.0p\t : |%*.*p$\n", 5, 0, p);
	usleep(500);
	ft_printf("my42 : %%5.3p\t : |%*.*p$\n", 5, 3, p);
	printf("nati : %%5.3p\t : |%*.*p$\n", 5, 3, p);
	usleep(500);
	ft_printf("my42 : %%5.5p\t : |%*.*p$\n", 5, 5, p);
	printf("nati : %%5.5p\t : |%*.*p$\n", 5, 5, p);
	usleep(500);
	ft_printf("my42 : %%5.7p\t : |%*.*p$\n", 5, 7, p);
	printf("nati : %%5.7p\t : |%*.*p$\n", 5, 7, p);
	usleep(500);
	ft_printf("my42 : %%5.-7p\t : |%*.*p$\n", 5, -7, p);
	printf("nati : %%5.-7p\t : |%*.*p$\n", 5, -7, p);
	usleep(500);
	ft_printf("my42 : %%10.0p\t : |%*.*p$\n", 10, 0, p);
	printf("nati : %%10.0p\t : |%*.*p$\n", 10, 0, p);
	usleep(500);
	ft_printf("my42 : %%10.3p\t : |%*.*p$\n", 10, 3, p);
	printf("nati : %%10.3p\t : |%*.*p$\n", 10, 3, p);
	usleep(500);
	ft_printf("my42 : %%10.5p\t : |%*.*p$\n", 10, 5, p);
	printf("nati : %%10.5p\t : |%*.*p$\n", 10, 5, p);
	usleep(500);
	ft_printf("my42 : %%10.7p\t : |%*.*p$\n", 10, 7, p);
	printf("nati : %%10.7p\t : |%*.*p$\n", 10, 7, p);
	usleep(500);
	ft_printf("my42 : %%10.-7p\t : |%*.*p$\n", 10, -7, p);
	printf("nati : %%10.-7p\t : |%*.*p$\n", 10, -7, p);
	usleep(500);
	ft_printf("my42 : %%-5.0p\t : |%*.*p$\n", -5, 0, p);
	printf("nati : %%-5.0p\t : |%*.*p$\n", -5, 0, p);
	usleep(500);
	ft_printf("my42 : %%-5.3p\t : |%*.*p$\n", -5, 3, p);
	printf("nati : %%-5.3p\t : |%*.*p$\n", -5, 3, p);
	usleep(500);
	ft_printf("my42 : %%-5.5p\t : |%*.*p$\n", -5, 5, p);
	printf("nati : %%-5.5p\t : |%*.*p$\n", -5, 5, p);
	usleep(500);
	ft_printf("my42 : %%-5.7p\t : |%*.*p$\n", -5, 7, p);
	printf("nati : %%-5.7p\t : |%*.*p$\n", -5, 7, p);
	usleep(500);
	ft_printf("my42 : %%-5.-7p\t : |%*.*p$\n", -5, -7, p);
	printf("nati : %%-5.-7p\t : |%*.*p$\n", -5, -7, p);
	usleep(500);
	ft_printf("my42 : %%-10.0p\t : |%*.*p$\n", -10, 0, p);
	printf("nati : %%-10.0p\t : |%*.*p$\n", -10, 0, p);
	usleep(500);
	ft_printf("my42 : %%-10.3p\t : |%*.*p$\n", -10, 3, p);
	printf("nati : %%-10.3p\t : |%*.*p$\n", -10, 3, p);
	usleep(500);
	ft_printf("my42 : %%-10.5p\t : |%*.*p$\n", -10, 5, p);
	printf("nati : %%-10.5p\t : |%*.*p$\n", -10, 5, p);
	usleep(500);
	ft_printf("my42 : %%-10.7p\t : |%*.*p$\n", -10, 7, p);
	printf("nati : %%-10.7p\t : |%*.*p$\n", -10, 7, p);
	usleep(500);
	ft_printf("my42 : %%-10.-7p\t : |%*.*p$\n", -10, -7, p);
	printf("nati : %%-10.-7p\t : |%*.*p$\n", -10, -7, p);
	printf("----------p---negative--------\n");
	usleep(500);
	ft_printf("my42 : %%p\t : |%p$\n", p);
	printf("nati : %%p\t : |%p$\n", p);
	usleep(500);
	ft_printf("my42 : %%0p\t : |%*p$\n", 0, p);
	printf("nati : %%0p\t : |%*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%5p\t : |%*p$\n", 5, p);
	printf("nati : %%5p\t : |%*p$\n", 5, p);
	usleep(500);
	ft_printf("my42 : %%10p\t : |%*p$\n", 10, p);
	printf("nati : %%10p\t : |%*p$\n", 10, p);
	usleep(500);
	ft_printf("my42 : %%-5p\t : |%*p$\n", -5, p);
	printf("nati : %%-5p\t : |%*p$\n", -5, p);
	usleep(500);
	ft_printf("my42 : %%-10p\t : |%*p$\n", -10, p);
	printf("nati : %%-10p\t : |%*p$\n", -10, p);
	usleep(500);
	ft_printf("my42 : %%.0p\t : |%.*p$\n", 0, p);
	printf("nati : %%.0p\t : |%.*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%.3p\t : |%.*p$\n", 3, p);
	printf("nati : %%.3p\t : |%.*p$\n", 3, p);
	usleep(500);
	ft_printf("my42 : %%.5p\t : |%.*p$\n", 5, p);
	printf("nati : %%.5p\t : |%.*p$\n", 5, p);
	usleep(500);
	ft_printf("my42 : %%.7p\t : |%.*p$\n", 7, p);
	printf("nati : %%.7p\t : |%.*p$\n", 7, p);
	usleep(500);
	ft_printf("my42 : %%.-7p\t : |%.*p$\n", -7, p);
	printf("nati : %%.-7p\t : |%.*p$\n", -7, p);
	usleep(500);
	ft_printf("my42 : %%0.0p\t : |%*.*p$\n", 0, 0, p);
	printf("nati : %%0.0p\t : |%*.*p$\n", 0, 0, p);
	usleep(500);
	ft_printf("my42 : %%0.3p\t : |%*.*p$\n", 0, 3, p);
	printf("nati : %%0.3p\t : |%*.*p$\n", 0, 3, p);
	usleep(500);
	ft_printf("my42 : %%0.5p\t : |%*.*p$\n", 0, 5, p);
	printf("nati : %%0.5p\t : |%*.*p$\n", 0, 5, p);
	usleep(500);
	ft_printf("my42 : %%0.7p\t : |%*.*p$\n", 0, 7, p);
	printf("nati : %%0.7p\t : |%*.*p$\n", 0, 7, p);
	usleep(500);
	ft_printf("my42 : %%0.-7p\t : |%*.*p$\n", 0, -7, p);
	printf("nati : %%0.-7p\t : |%*.*p$\n", 0, -7, p);
	usleep(500);
	ft_printf("my42 : %%5.0p\t : |%*.*p$\n", 5, 0, p);
	printf("nati : %%5.0p\t : |%*.*p$\n", 5, 0, p);
	usleep(500);
	ft_printf("my42 : %%5.3p\t : |%*.*p$\n", 5, 3, p);
	printf("nati : %%5.3p\t : |%*.*p$\n", 5, 3, p);
	usleep(500);
	ft_printf("my42 : %%5.5p\t : |%*.*p$\n", 5, 5, p);
	printf("nati : %%5.5p\t : |%*.*p$\n", 5, 5, p);
	usleep(500);
	ft_printf("my42 : %%5.7p\t : |%*.*p$\n", 5, 7, p);
	printf("nati : %%5.7p\t : |%*.*p$\n", 5, 7, p);
	usleep(500);
	ft_printf("my42 : %%5.-7p\t : |%*.*p$\n", 5, -7, p);
	printf("nati : %%5.-7p\t : |%*.*p$\n", 5, -7, p);
	usleep(500);
	ft_printf("my42 : %%10.0p\t : |%*.*p$\n", 10, 0, p);
	printf("nati : %%10.0p\t : |%*.*p$\n", 10, 0, p);
	usleep(500);
	ft_printf("my42 : %%10.3p\t : |%*.*p$\n", 10, 3, p);
	printf("nati : %%10.3p\t : |%*.*p$\n", 10, 3, p);
	usleep(500);
	ft_printf("my42 : %%10.5p\t : |%*.*p$\n", 10, 5, p);
	printf("nati : %%10.5p\t : |%*.*p$\n", 10, 5, p);
	usleep(500);
	ft_printf("my42 : %%10.7p\t : |%*.*p$\n", 10, 7, p);
	printf("nati : %%10.7p\t : |%*.*p$\n", 10, 7, p);
	usleep(500);
	ft_printf("my42 : %%10.-7p\t : |%*.*p$\n", 10, -7, p);
	printf("nati : %%10.-7p\t : |%*.*p$\n", 10, -7, p);
	usleep(500);
	ft_printf("my42 : %%-5.0p\t : |%*.*p$\n", -5, 0, p);
	printf("nati : %%-5.0p\t : |%*.*p$\n", -5, 0, p);
	usleep(500);
	ft_printf("my42 : %%-5.3p\t : |%*.*p$\n", -5, 3, p);
	printf("nati : %%-5.3p\t : |%*.*p$\n", -5, 3, p);
	usleep(500);
	ft_printf("my42 : %%-5.5p\t : |%*.*p$\n", -5, 5, p);
	printf("nati : %%-5.5p\t : |%*.*p$\n", -5, 5, p);
	usleep(500);
	ft_printf("my42 : %%-5.7p\t : |%*.*p$\n", -5, 7, p);
	printf("nati : %%-5.7p\t : |%*.*p$\n", -5, 7, p);
	usleep(500);
	ft_printf("my42 : %%-5.-7p\t : |%*.*p$\n", -5, -7, p);
	printf("nati : %%-5.-7p\t : |%*.*p$\n", -5, -7, p);
	usleep(500);
	ft_printf("my42 : %%-10.0p\t : |%*.*p$\n", -10, 0, p);
	printf("nati : %%-10.0p\t : |%*.*p$\n", -10, 0, p);
	usleep(500);
	ft_printf("my42 : %%-10.3p\t : |%*.*p$\n", -10, 3, p);
	printf("nati : %%-10.3p\t : |%*.*p$\n", -10, 3, p);
	usleep(500);
	ft_printf("my42 : %%-10.5p\t : |%*.*p$\n", -10, 5, p);
	printf("nati : %%-10.5p\t : |%*.*p$\n", -10, 5, p);
	usleep(500);
	ft_printf("my42 : %%-10.7p\t : |%*.*p$\n", -10, 7, p);
	printf("nati : %%-10.7p\t : |%*.*p$\n", -10, 7, p);
	usleep(500);
	ft_printf("my42 : %%-10.-7p  : |%*.*p$\n", -10, -7, p);
	printf("nati : %%-10.-7p  : |%*.*p$\n", -10, -7, p);
	printf("--------0--p--positive--------\n");
	usleep(500);
	ft_printf("my42 : %%0p\t : |%0p$\n", p);
	printf("nati : %%0p\t : |%0p$\n", p);
	usleep(500);
	ft_printf("my42 : %%00p\t : |%0*p$\n", 0, p);
	printf("nati : %%00p\t : |%0*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%05p\t : |%0*p$\n", 5, p);
	printf("nati : %%05p\t : |%0*p$\n", 5, p);
	usleep(500);
	ft_printf("my42 : %%010p\t : |%0*p$\n", 10, p);
	printf("nati : %%010p\t : |%0*p$\n", 10, p);
	usleep(500);
	ft_printf("my42 : %%0-5p\t : |%0*p$\n", -5, p);
	printf("nati : %%0-5p\t : |%0*p$\n", -5, p);
	usleep(500);
	ft_printf("my42 : %%0-10p\t : |%0*p$\n", -10, p);
	printf("nati : %%0-10p\t : |%0*p$\n", -10, p);
	usleep(500);
	ft_printf("my42 : %%0.0p\t : |%0.*p$\n", 0, p);
	printf("nati : %%0.0p\t : |%0.*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%0.3p\t : |%0.*p$\n", 3, p);
	printf("nati : %%0.3p\t : |%0.*p$\n", 3, p);
	usleep(500);
	ft_printf("my42 : %%0.5p\t : |%0.*p$\n", 5, p);
	printf("nati : %%0.5p\t : |%0.*p$\n", 5, p);
	usleep(500);
	ft_printf("my42 : %%0.7p\t : |%0.*p$\n", 7, p);
	printf("nati : %%0.7p\t : |%0.*p$\n", 7, p);
	usleep(500);
	ft_printf("my42 : %%0.-7p\t : |%0.*p$\n", -7, p);
	printf("nati : %%0.-7p\t : |%0.*p$\n", -7, p);
	usleep(500);
	ft_printf("my42 : %%00.0p\t : |%0*.*p$\n", 0, 0, p);
	printf("nati : %%00.0p\t : |%0*.*p$\n", 0, 0, p);
	usleep(500);
	ft_printf("my42 : %%00.3p\t : |%0*.*p$\n", 0, 3, p);
	printf("nati : %%00.3p\t : |%0*.*p$\n", 0, 3, p);
	usleep(500);
	ft_printf("my42 : %%00.5p\t : |%0*.*p$\n", 0, 5, p);
	printf("nati : %%00.5p\t : |%0*.*p$\n", 0, 5, p);
	usleep(500);
	ft_printf("my42 : %%00.7p\t : |%0*.*p$\n", 0, 7, p);
	printf("nati : %%00.7p\t : |%0*.*p$\n", 0, 7, p);
	usleep(500);
	ft_printf("my42 : %%00.-7p\t : |%0*.*p$\n", 0, -7, p);
	printf("nati : %%00.-7p\t : |%0*.*p$\n", 0, -7, p);
	usleep(500);
	ft_printf("my42 : %%05.0p\t : |%0*.*p$\n", 5, 0, p);
	printf("nati : %%05.0p\t : |%0*.*p$\n", 5, 0, p);
	usleep(500);
	ft_printf("my42 : %%05.3p\t : |%0*.*p$\n", 5, 3, p);
	printf("nati : %%05.3p\t : |%0*.*p$\n", 5, 3, p);
	usleep(500);
	ft_printf("my42 : %%05.5p\t : |%0*.*p$\n", 5, 5, p);
	printf("nati : %%05.5p\t : |%0*.*p$\n", 5, 5, p);
	usleep(500);
	ft_printf("my42 : %%05.7p\t : |%0*.*p$\n", 5, 7, p);
	printf("nati : %%05.7p\t : |%0*.*p$\n", 5, 7, p);
	usleep(500);
	ft_printf("my42 : %%05.-7p\t : |%0*.*p$\n", 5, -7, p);
	printf("nati : %%05.-7p\t : |%0*.*p$\n", 5, -7, p);
	usleep(500);
	ft_printf("my42 : %%010.0p\t : |%0*.*p$\n", 10, 0, p);
	printf("nati : %%010.0p\t : |%0*.*p$\n", 10, 0, p);
	usleep(500);
	ft_printf("my42 : %%010.3p\t : |%0*.*p$\n", 10, 3, p);
	printf("nati : %%010.3p\t : |%0*.*p$\n", 10, 3, p);
	usleep(500);
	ft_printf("my42 : %%010.5p\t : |%0*.*p$\n", 10, 5, p);
	printf("nati : %%010.5p\t : |%0*.*p$\n", 10, 5, p);
	usleep(500);
	ft_printf("my42 : %%010.7p\t : |%0*.*p$\n", 10, 7, p);
	printf("nati : %%010.7p\t : |%0*.*p$\n", 10, 7, p);
	usleep(500);
	ft_printf("my42 : %%010.-7p\t : |%0*.*p$\n", 10, -7, p);
	printf("nati : %%010.-7p\t : |%0*.*p$\n", 10, -7, p);
	usleep(500);
	ft_printf("my42 : %%0-5.0p\t : |%0*.*p$\n", -5, 0, p);
	printf("nati : %%0-5.0p\t : |%0*.*p$\n", -5, 0, p);
	usleep(500);
	ft_printf("my42 : %%0-5.3p\t : |%0*.*p$\n", -5, 3, p);
	printf("nati : %%0-5.3p\t : |%0*.*p$\n", -5, 3, p);
	usleep(500);
	ft_printf("my42 : %%0-5.5p\t : |%0*.*p$\n", -5, 5, p);
	printf("nati : %%0-5.5p\t : |%0*.*p$\n", -5, 5, p);
	usleep(500);
	ft_printf("my42 : %%0-5.7p\t : |%0*.*p$\n", -5, 7, p);
	printf("nati : %%0-5.7p\t : |%0*.*p$\n", -5, 7, p);
	usleep(500);
	ft_printf("my42 : %%0-5.-7p\t : |%0*.*p$\n", -5, -7, p);
	printf("nati : %%0-5.-7p\t : |%0*.*p$\n", -5, -7, p);
	usleep(500);
	ft_printf("my42 : %%0-10.0p\t : |%0*.*p$\n", -10, 0, p);
	printf("nati : %%0-10.0p\t : |%0*.*p$\n", -10, 0, p);
	usleep(500);
	ft_printf("my42 : %%0-10.3p\t : |%0*.*p$\n", -10, 3, p);
	printf("nati : %%0-10.3p\t : |%0*.*p$\n", -10, 3, p);
	usleep(500);
	ft_printf("my42 : %%0-10.5p\t : |%0*.*p$\n", -10, 5, p);
	printf("nati : %%0-10.5p\t : |%0*.*p$\n", -10, 5, p);
	usleep(500);
	ft_printf("my42 : %%0-10.7p\t : |%0*.*p$\n", -10, 7, p);
	printf("nati : %%0-10.7p\t : |%0*.*p$\n", -10, 7, p);
	usleep(500);
	ft_printf("my42 : %%0-10.-7p : |%0*.*p$\n", -10, -7, p);
	printf("nati : %%0-10.-7p : |%0*.*p$\n", -10, -7, p);
	printf("--------0--p--negative--------\n");
	usleep(500);
	ft_printf("my42 : %%0p\t : |%0p$\n", p);
	printf("nati : %%0p\t : |%0p$\n", p);
	usleep(500);
	ft_printf("my42 : %%00p\t : |%0*p$\n", 0, p);
	printf("nati : %%00p\t : |%0*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%05p\t : |%0*p$\n", 5, p);
	printf("nati : %%05p\t : |%0*p$\n", 5, p);
	usleep(500);
	ft_printf("my42 : %%010p\t : |%0*p$\n", 10, p);
	printf("nati : %%010p\t : |%0*p$\n", 10, p);
	usleep(500);
	ft_printf("my42 : %%0-5p\t : |%0*p$\n", -5, p);
	printf("nati : %%0-5p\t : |%0*p$\n", -5, p);
	usleep(500);
	ft_printf("my42 : %%0-10p\t : |%0*p$\n", -10, p);
	printf("nati : %%0-10p\t : |%0*p$\n", -10, p);
	usleep(500);
	ft_printf("my42 : %%0.0p\t : |%0.*p$\n", 0, p);
	printf("nati : %%0.0p\t : |%0.*p$\n", 0, p);
	usleep(500);
	ft_printf("my42 : %%0.3p\t : |%0.*p$\n", 3, p);
	printf("nati : %%0.3p\t : |%0.*p$\n", 3, p);
	usleep(500);
	ft_printf("my42 : %%0.5p\t : |%0.*p$\n", 5, p);
	printf("nati : %%0.5p\t : |%0.*p$\n", 5, p);
	usleep(500);
	ft_printf("my42 : %%0.7p\t : |%0.*p$\n", 7, p);
	printf("nati : %%0.7p\t : |%0.*p$\n", 7, p);
	usleep(500);
	ft_printf("my42 : %%0.-7p\t : |%0.*p$\n", -7, p);
	printf("nati : %%0.-7p\t : |%0.*p$\n", -7, p);
	usleep(500);
	ft_printf("my42 : %%00.0p\t : |%0*.*p$\n", 0, 0, p);
	printf("nati : %%00.0p\t : |%0*.*p$\n", 0, 0, p);
	usleep(500);
	ft_printf("my42 : %%00.3p\t : |%0*.*p$\n", 0, 3, p);
	printf("nati : %%00.3p\t : |%0*.*p$\n", 0, 3, p);
	usleep(500);
	ft_printf("my42 : %%00.5p\t : |%0*.*p$\n", 0, 5, p);
	printf("nati : %%00.5p\t : |%0*.*p$\n", 0, 5, p);
	usleep(500);
	ft_printf("my42 : %%00.7p\t : |%0*.*p$\n", 0, 7, p);
	printf("nati : %%00.7p\t : |%0*.*p$\n", 0, 7, p);
	usleep(500);
	ft_printf("my42 : %%00.-7p\t : |%0*.*p$\n", 0, -7, p);
	printf("nati : %%00.-7p\t : |%0*.*p$\n", 0, -7, p);
	usleep(500);
	ft_printf("my42 : %%05.0p\t : |%0*.*p$\n", 5, 0, p);
	printf("nati : %%05.0p\t : |%0*.*p$\n", 5, 0, p);
	usleep(500);
	ft_printf("my42 : %%05.3p\t : |%0*.*p$\n", 5, 3, p);
	printf("nati : %%05.3p\t : |%0*.*p$\n", 5, 3, p);
	usleep(500);
	ft_printf("my42 : %%05.5p\t : |%0*.*p$\n", 5, 5, p);
	printf("nati : %%05.5p\t : |%0*.*p$\n", 5, 5, p);
	usleep(500);
	ft_printf("my42 : %%05.7p\t : |%0*.*p$\n", 5, 7, p);
	printf("nati : %%05.7p\t : |%0*.*p$\n", 5, 7, p);
	usleep(500);
	ft_printf("my42 : %%05.-7p\t : |%0*.*p$\n", 5, -7, p);
	printf("nati : %%05.-7p\t : |%0*.*p$\n", 5, -7, p);
	usleep(500);
	ft_printf("my42 : %%010.0p\t : |%0*.*p$\n", 10, 0, p);
	printf("nati : %%010.0p\t : |%0*.*p$\n", 10, 0, p);
	usleep(500);
	ft_printf("my42 : %%010.3p\t : |%0*.*p$\n", 10, 3, p);
	printf("nati : %%010.3p\t : |%0*.*p$\n", 10, 3, p);
	usleep(500);
	ft_printf("my42 : %%010.5p\t : |%0*.*p$\n", 10, 5, p);
	printf("nati : %%010.5p\t : |%0*.*p$\n", 10, 5, p);
	usleep(500);
	ft_printf("my42 : %%010.7p\t : |%0*.*p$\n", 10, 7, p);
	printf("nati : %%010.7p\t : |%0*.*p$\n", 10, 7, p);
	usleep(500);
	ft_printf("my42 : %%010.-7p\t : |%0*.*p$\n", 10, -7, p);
	printf("nati : %%010.-7p\t : |%0*.*p$\n", 10, -7, p);
	usleep(500);
	ft_printf("my42 : %%0-5.0p\t : |%0*.*p$\n", -5, 0, p);
	printf("nati : %%0-5.0p\t : |%0*.*p$\n", -5, 0, p);
	usleep(500);
	ft_printf("my42 : %%0-5.3p\t : |%0*.*p$\n", -5, 3, p);
	printf("nati : %%0-5.3p\t : |%0*.*p$\n", -5, 3, p);
	usleep(500);
	ft_printf("my42 : %%0-5.5p\t : |%0*.*p$\n", -5, 5, p);
	printf("nati : %%0-5.5p\t : |%0*.*p$\n", -5, 5, p);
	usleep(500);
	ft_printf("my42 : %%0-5.7p\t : |%0*.*p$\n", -5, 7, p);
	printf("nati : %%0-5.7p\t : |%0*.*p$\n", -5, 7, p);
	usleep(500);
	ft_printf("my42 : %%0-5.-7p\t : |%0*.*p$\n", -5, -7, p);
	printf("nati : %%0-5.-7p\t : |%0*.*p$\n", -5, -7, p);
	usleep(500);
	ft_printf("my42 : %%0-10.0p\t : |%0*.*p$\n", -10, 0, p);
	printf("nati : %%0-10.0p\t : |%0*.*p$\n", -10, 0, p);
	usleep(500);
	ft_printf("my42 : %%0-10.3p\t : |%0*.*p$\n", -10, 3, p);
	printf("nati : %%0-10.3p\t : |%0*.*p$\n", -10, 3, p);
	usleep(500);
	ft_printf("my42 : %%0-10.5p\t : |%0*.*p$\n", -10, 5, p);
	printf("nati : %%0-10.5p\t : |%0*.*p$\n", -10, 5, p);
	usleep(500);
	ft_printf("my42 : %%0-10.7p\t : |%0*.*p$\n", -10, 7, p);
	printf("nati : %%0-10.7p\t : |%0*.*p$\n", -10, 7, p);
	usleep(500);
	ft_printf("my42 : %%0-10.-7p : |%0*.*p$\n", -10, -7, p);
	printf("nati : %%0-10.-7p : |%0*.*p$\n", -10, -7, p);
	usleep(500);
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** get-prazy **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	a = ft_printf("abp %**.*-p abp %**.*-p$", 1, 10, 0, p, 14, 8, 0, p);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abp %**.*-p abp %**.*-p$", 1, 10, 0, p, 14, 8, 0, p);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abp %**.*-p abp %**.*-p$", 1, 10, 0, p, 14, 8, 0, p);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abp %**.*-p abp %**.*-p$", 1, 10, 0, p, 14, 8, 0, p);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abp %0**.*-p abp %0**.*-p$", 1, 10, 0, p, 14, 8, 0, p);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abp %0**.*-p abp %0**.*-p$", 1, 10, 0, p, 14, 8, 0, p);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abp %0**.*-p abp %0**.*-p$", 1, 10, 0, p, 14, 8, 0, p);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abp %0**.*-p abp %0**.*-p$", 1, 10, 0, p, 14, 8, 0, p);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);

	return 0;
}
