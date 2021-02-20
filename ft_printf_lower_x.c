#include "../ft_printf.h"

int		main(void)
{
	int a;
	int *b;
	int	nbcmy42;
	int nbcnati;

	a = 1;
	b = &a;

	printf("----------x---positive--------\n");
	ft_printf("my42 : %%x\t : |%x$\n", 12345);
	printf("nati : %%x\t : |%x$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%0x\t : |%*x$\n", 0, 12345);
	printf("nati : %%0x\t : |%*x$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5x\t : |%*x$\n", 5, 12345);
	printf("nati : %%5x\t : |%*x$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10x\t : |%*x$\n", 10, 12345);
	printf("nati : %%10x\t : |%*x$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%-5x\t : |%*x$\n", -5, 12345);
	printf("nati : %%-5x\t : |%*x$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10x\t : |%*x$\n", -10, 12345);
	printf("nati : %%-10x\t : |%*x$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%.0x\t : |%.*x$\n", 0, 12345);
	printf("nati : %%.0x\t : |%.*x$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%.3x\t : |%.*x$\n", 3, 12345);
	printf("nati : %%.3x\t : |%.*x$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%.5x\t : |%.*x$\n", 5, 12345);
	printf("nati : %%.5x\t : |%.*x$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%.7x\t : |%.*x$\n", 7, 12345);
	printf("nati : %%.7x\t : |%.*x$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%.-7x\t : |%.*x$\n", -7, 12345);
	printf("nati : %%.-7x\t : |%.*x$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0x\t : |%*.*x$\n", 0, 0, 12345);
	printf("nati : %%0.0x\t : |%*.*x$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3x\t : |%*.*x$\n", 0, 3, 12345);
	printf("nati : %%0.3x\t : |%*.*x$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5x\t : |%*.*x$\n", 0, 5, 12345);
	printf("nati : %%0.5x\t : |%*.*x$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7x\t : |%*.*x$\n", 0, 7, 12345);
	printf("nati : %%0.7x\t : |%*.*x$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7x\t : |%*.*x$\n", 0, -7, 12345);
	printf("nati : %%0.-7x\t : |%*.*x$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.0x\t : |%*.*x$\n", 5, 0, 12345);
	printf("nati : %%5.0x\t : |%*.*x$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5.3x\t : |%*.*x$\n", 5, 3, 12345);
	printf("nati : %%5.3x\t : |%*.*x$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%5.5x\t : |%*.*x$\n", 5, 5, 12345);
	printf("nati : %%5.5x\t : |%*.*x$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%5.7x\t : |%*.*x$\n", 5, 7, 12345);
	printf("nati : %%5.7x\t : |%*.*x$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.-7x\t : |%*.*x$\n", 5, -7, 12345);
	printf("nati : %%5.-7x\t : |%*.*x$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.0x\t : |%*.*x$\n", 10, 0, 12345);
	printf("nati : %%10.0x\t : |%*.*x$\n", 10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%10.3x\t : |%*.*x$\n", 10, 3, 12345);
	printf("nati : %%10.3x\t : |%*.*x$\n", 10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%10.5x\t : |%*.*x$\n", 10, 5, 12345);
	printf("nati : %%10.5x\t : |%*.*x$\n", 10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10.7x\t : |%*.*x$\n", 10, 7, 12345);
	printf("nati : %%10.7x\t : |%*.*x$\n", 10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.-7x\t : |%*.*x$\n", 10, -7, 12345);
	printf("nati : %%10.-7x\t : |%*.*x$\n", 10, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.0x\t : |%*.*x$\n", -5, 0, 12345);
	printf("nati : %%-5.0x\t : |%*.*x$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.3x\t : |%*.*x$\n", -5, 3, 12345);
	printf("nati : %%-5.3x\t : |%*.*x$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.5x\t : |%*.*x$\n", -5, 5, 12345);
	printf("nati : %%-5.5x\t : |%*.*x$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.7x\t : |%*.*x$\n", -5, 7, 12345);
	printf("nati : %%-5.7x\t : |%*.*x$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7x\t : |%*.*x$\n", -5, -7, 12345);
	printf("nati : %%-5.-7x\t : |%*.*x$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.0x\t : |%*.*x$\n", -10, 0, 12345);
	printf("nati : %%-10.0x\t : |%*.*x$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.3x\t : |%*.*x$\n", -10, 3, 12345);
	printf("nati : %%-10.3x\t : |%*.*x$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.5x\t : |%*.*x$\n", -10, 5, 12345);
	printf("nati : %%-10.5x\t : |%*.*x$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.7x\t : |%*.*x$\n", -10, 7, 12345);
	printf("nati : %%-10.7x\t : |%*.*x$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7x\t : |%*.*x$\n", -10, -7, 12345);
	printf("nati : %%-10.-7x\t : |%*.*x$\n", -10, -7, 12345);
	printf("----------x---negative--------\n");
	usleep(500);
	ft_printf("my42 : %%x\t : |%x$\n", -12345);
	printf("nati : %%x\t : |%x$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%0x\t : |%*x$\n", 0, -12345);
	printf("nati : %%0x\t : |%*x$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5x\t : |%*x$\n", 5, -12345);
	printf("nati : %%5x\t : |%*x$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10x\t : |%*x$\n", 10, -12345);
	printf("nati : %%10x\t : |%*x$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%-5x\t : |%*x$\n", -5, -12345);
	printf("nati : %%-5x\t : |%*x$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10x\t : |%*x$\n", -10, -12345);
	printf("nati : %%-10x\t : |%*x$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%.0x\t : |%.*x$\n", 0, -12345);
	printf("nati : %%.0x\t : |%.*x$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%.3x\t : |%.*x$\n", 3, -12345);
	printf("nati : %%.3x\t : |%.*x$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%.5x\t : |%.*x$\n", 5, -12345);
	printf("nati : %%.5x\t : |%.*x$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%.7x\t : |%.*x$\n", 7, -12345);
	printf("nati : %%.7x\t : |%.*x$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%.-7x\t : |%.*x$\n", -7, -12345);
	printf("nati : %%.-7x\t : |%.*x$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0x\t : |%*.*x$\n", 0, 0, -12345);
	printf("nati : %%0.0x\t : |%*.*x$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3x\t : |%*.*x$\n", 0, 3, -12345);
	printf("nati : %%0.3x\t : |%*.*x$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5x\t : |%*.*x$\n", 0, 5, -12345);
	printf("nati : %%0.5x\t : |%*.*x$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7x\t : |%*.*x$\n", 0, 7, -12345);
	printf("nati : %%0.7x\t : |%*.*x$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7x\t : |%*.*x$\n", 0, -7, -12345);
	printf("nati : %%0.-7x\t : |%*.*x$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.0x\t : |%*.*x$\n", 5, 0, -12345);
	printf("nati : %%5.0x\t : |%*.*x$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5.3x\t : |%*.*x$\n", 5, 3, -12345);
	printf("nati : %%5.3x\t : |%*.*x$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%5.5x\t : |%*.*x$\n", 5, 5, -12345);
	printf("nati : %%5.5x\t : |%*.*x$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%5.7x\t : |%*.*x$\n", 5, 7, -12345);
	printf("nati : %%5.7x\t : |%*.*x$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.-7x\t : |%*.*x$\n", 5, -7, -12345);
	printf("nati : %%5.-7x\t : |%*.*x$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.0x\t : |%*.*x$\n", 10, 0, -12345);
	printf("nati : %%10.0x\t : |%*.*x$\n", 10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%10.3x\t : |%*.*x$\n", 10, 3, -12345);
	printf("nati : %%10.3x\t : |%*.*x$\n", 10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%10.5x\t : |%*.*x$\n", 10, 5, -12345);
	printf("nati : %%10.5x\t : |%*.*x$\n", 10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10.7x\t : |%*.*x$\n", 10, 7, -12345);
	printf("nati : %%10.7x\t : |%*.*x$\n", 10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.-7x\t : |%*.*x$\n", 10, -7, -12345);
	printf("nati : %%10.-7x\t : |%*.*x$\n", 10, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.0x\t : |%*.*x$\n", -5, 0, -12345);
	printf("nati : %%-5.0x\t : |%*.*x$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.3x\t : |%*.*x$\n", -5, 3, -12345);
	printf("nati : %%-5.3x\t : |%*.*x$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.5x\t : |%*.*x$\n", -5, 5, -12345);
	printf("nati : %%-5.5x\t : |%*.*x$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.7x\t : |%*.*x$\n", -5, 7, -12345);
	printf("nati : %%-5.7x\t : |%*.*x$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7x\t : |%*.*x$\n", -5, -7, -12345);
	printf("nati : %%-5.-7x\t : |%*.*x$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.0x\t : |%*.*x$\n", -10, 0, -12345);
	printf("nati : %%-10.0x\t : |%*.*x$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.3x\t : |%*.*x$\n", -10, 3, -12345);
	printf("nati : %%-10.3x\t : |%*.*x$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.5x\t : |%*.*x$\n", -10, 5, -12345);
	printf("nati : %%-10.5x\t : |%*.*x$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.7x\t : |%*.*x$\n", -10, 7, -12345);
	printf("nati : %%-10.7x\t : |%*.*x$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7x  : |%*.*x$\n", -10, -7, -12345);
	printf("nati : %%-10.-7x  : |%*.*x$\n", -10, -7, -12345);
	printf("--------0--x--positive--------\n");
	usleep(500);
	ft_printf("my42 : %%0x\t : |%0x$\n", 12345);
	printf("nati : %%0x\t : |%0x$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%00x\t : |%0*x$\n", 0, 12345);
	printf("nati : %%00x\t : |%0*x$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05x\t : |%0*x$\n", 5, 12345);
	printf("nati : %%05x\t : |%0*x$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010x\t : |%0*x$\n", 10, 12345);
	printf("nati : %%010x\t : |%0*x$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5x\t : |%0*x$\n", -5, 12345);
	printf("nati : %%0-5x\t : |%0*x$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10x\t : |%0*x$\n", -10, 12345);
	printf("nati : %%0-10x\t : |%0*x$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0x\t : |%0.*x$\n", 0, 12345);
	printf("nati : %%0.0x\t : |%0.*x$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3x\t : |%0.*x$\n", 3, 12345);
	printf("nati : %%0.3x\t : |%0.*x$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5x\t : |%0.*x$\n", 5, 12345);
	printf("nati : %%0.5x\t : |%0.*x$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7x\t : |%0.*x$\n", 7, 12345);
	printf("nati : %%0.7x\t : |%0.*x$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7x\t : |%0.*x$\n", -7, 12345);
	printf("nati : %%0.-7x\t : |%0.*x$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.0x\t : |%0*.*x$\n", 0, 0, 12345);
	printf("nati : %%00.0x\t : |%0*.*x$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%00.3x\t : |%0*.*x$\n", 0, 3, 12345);
	printf("nati : %%00.3x\t : |%0*.*x$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%00.5x\t : |%0*.*x$\n", 0, 5, 12345);
	printf("nati : %%00.5x\t : |%0*.*x$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%00.7x\t : |%0*.*x$\n", 0, 7, 12345);
	printf("nati : %%00.7x\t : |%0*.*x$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.-7x\t : |%0*.*x$\n", 0, -7, 12345);
	printf("nati : %%00.-7x\t : |%0*.*x$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.0x\t : |%0*.*x$\n", 5, 0, 12345);
	printf("nati : %%05.0x\t : |%0*.*x$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05.3x\t : |%0*.*x$\n", 5, 3, 12345);
	printf("nati : %%05.3x\t : |%0*.*x$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%05.5x\t : |%0*.*x$\n", 5, 5, 12345);
	printf("nati : %%05.5x\t : |%0*.*x$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%05.7x\t : |%0*.*x$\n", 5, 7, 12345);
	printf("nati : %%05.7x\t : |%0*.*x$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.-7x\t : |%0*.*x$\n", 5, -7, 12345);
	printf("nati : %%05.-7x\t : |%0*.*x$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.0x\t : |%0*.*x$\n", 10, 0, 12345);
	printf("nati : %%010.0x\t : |%0*.*x$\n", 10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%010.3x\t : |%0*.*x$\n", 10, 3, 12345);
	printf("nati : %%010.3x\t : |%0*.*x$\n", 10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%010.5x\t : |%0*.*x$\n", 10, 5, 12345);
	printf("nati : %%010.5x\t : |%0*.*x$\n", 10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010.7x\t : |%0*.*x$\n", 10, 7, 12345);
	printf("nati : %%010.7x\t : |%0*.*x$\n", 10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.-7x\t : |%0*.*x$\n", 10, -7, 12345);
	printf("nati : %%010.-7x\t : |%0*.*x$\n", 10, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0x\t : |%0*.*x$\n", -5, 0, 12345);
	printf("nati : %%0-5.0x\t : |%0*.*x$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3x\t : |%0*.*x$\n", -5, 3, 12345);
	printf("nati : %%0-5.3x\t : |%0*.*x$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5x\t : |%0*.*x$\n", -5, 5, 12345);
	printf("nati : %%0-5.5x\t : |%0*.*x$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7x\t : |%0*.*x$\n", -5, 7, 12345);
	printf("nati : %%0-5.7x\t : |%0*.*x$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7x\t : |%0*.*x$\n", -5, -7, 12345);
	printf("nati : %%0-5.-7x\t : |%0*.*x$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0x\t : |%0*.*x$\n", -10, 0, 12345);
	printf("nati : %%0-10.0x\t : |%0*.*x$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3x\t : |%0*.*x$\n", -10, 3, 12345);
	printf("nati : %%0-10.3x\t : |%0*.*x$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5x\t : |%0*.*x$\n", -10, 5, 12345);
	printf("nati : %%0-10.5x\t : |%0*.*x$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7x\t : |%0*.*x$\n", -10, 7, 12345);
	printf("nati : %%0-10.7x\t : |%0*.*x$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7x : |%0*.*x$\n", -10, -7, 12345);
	printf("nati : %%0-10.-7x : |%0*.*x$\n", -10, -7, 12345);
	printf("--------0--x--negative--------\n");
	usleep(500);
	ft_printf("my42 : %%0x\t : |%0x$\n", -12345);
	printf("nati : %%0x\t : |%0x$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%00x\t : |%0*x$\n", 0, -12345);
	printf("nati : %%00x\t : |%0*x$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05x\t : |%0*x$\n", 5, -12345);
	printf("nati : %%05x\t : |%0*x$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010x\t : |%0*x$\n", 10, -12345);
	printf("nati : %%010x\t : |%0*x$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5x\t : |%0*x$\n", -5, -12345);
	printf("nati : %%0-5x\t : |%0*x$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10x\t : |%0*x$\n", -10, -12345);
	printf("nati : %%0-10x\t : |%0*x$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0x\t : |%0.*x$\n", 0, -12345);
	printf("nati : %%0.0x\t : |%0.*x$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3x\t : |%0.*x$\n", 3, -12345);
	printf("nati : %%0.3x\t : |%0.*x$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5x\t : |%0.*x$\n", 5, -12345);
	printf("nati : %%0.5x\t : |%0.*x$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7x\t : |%0.*x$\n", 7, -12345);
	printf("nati : %%0.7x\t : |%0.*x$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7x\t : |%0.*x$\n", -7, -12345);
	printf("nati : %%0.-7x\t : |%0.*x$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.0x\t : |%0*.*x$\n", 0, 0, -12345);
	printf("nati : %%00.0x\t : |%0*.*x$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%00.3x\t : |%0*.*x$\n", 0, 3, -12345);
	printf("nati : %%00.3x\t : |%0*.*x$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%00.5x\t : |%0*.*x$\n", 0, 5, -12345);
	printf("nati : %%00.5x\t : |%0*.*x$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%00.7x\t : |%0*.*x$\n", 0, 7, -12345);
	printf("nati : %%00.7x\t : |%0*.*x$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.-7x\t : |%0*.*x$\n", 0, -7, -12345);
	printf("nati : %%00.-7x\t : |%0*.*x$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.0x\t : |%0*.*x$\n", 5, 0, -12345);
	printf("nati : %%05.0x\t : |%0*.*x$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05.3x\t : |%0*.*x$\n", 5, 3, -12345);
	printf("nati : %%05.3x\t : |%0*.*x$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%05.5x\t : |%0*.*x$\n", 5, 5, -12345);
	printf("nati : %%05.5x\t : |%0*.*x$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%05.7x\t : |%0*.*x$\n", 5, 7, -12345);
	printf("nati : %%05.7x\t : |%0*.*x$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.-7x\t : |%0*.*x$\n", 5, -7, -12345);
	printf("nati : %%05.-7x\t : |%0*.*x$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.0x\t : |%0*.*x$\n", 10, 0, -12345);
	printf("nati : %%010.0x\t : |%0*.*x$\n", 10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%010.3x\t : |%0*.*x$\n", 10, 3, -12345);
	printf("nati : %%010.3x\t : |%0*.*x$\n", 10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%010.5x\t : |%0*.*x$\n", 10, 5, -12345);
	printf("nati : %%010.5x\t : |%0*.*x$\n", 10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010.7x\t : |%0*.*x$\n", 10, 7, -12345);
	printf("nati : %%010.7x\t : |%0*.*x$\n", 10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.-7x\t : |%0*.*x$\n", 10, -7, -12345);
	printf("nati : %%010.-7x\t : |%0*.*x$\n", 10, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0x\t : |%0*.*x$\n", -5, 0, -12345);
	printf("nati : %%0-5.0x\t : |%0*.*x$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3x\t : |%0*.*x$\n", -5, 3, -12345);
	printf("nati : %%0-5.3x\t : |%0*.*x$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5x\t : |%0*.*x$\n", -5, 5, -12345);
	printf("nati : %%0-5.5x\t : |%0*.*x$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7x\t : |%0*.*x$\n", -5, 7, -12345);
	printf("nati : %%0-5.7x\t : |%0*.*x$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7x\t : |%0*.*x$\n", -5, -7, -12345);
	printf("nati : %%0-5.-7x\t : |%0*.*x$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0x\t : |%0*.*x$\n", -10, 0, -12345);
	printf("nati : %%0-10.0x\t : |%0*.*x$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3x\t : |%0*.*x$\n", -10, 3, -12345);
	printf("nati : %%0-10.3x\t : |%0*.*x$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5x\t : |%0*.*x$\n", -10, 5, -12345);
	printf("nati : %%0-10.5x\t : |%0*.*x$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7x\t : |%0*.*x$\n", -10, 7, -12345);
	printf("nati : %%0-10.7x\t : |%0*.*x$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7x : |%0*.*x$\n", -10, -7, -12345);
	printf("nati : %%0-10.-7x : |%0*.*x$\n", -10, -7, -12345);
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** get-xrazy **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	usleep(500);
	a = ft_printf("abx %**.*-x abx %**.*-x$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abx %**.*-x abx %**.*-x$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abx %**.*-x abx %**.*-x$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abx %**.*-x abx %**.*-x$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abx %0**.*-x abx %0**.*-x$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abx %0**.*-x abx %0**.*-x$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abx %0**.*-x abx %0**.*-x$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abx %0**.*-x abx %0**.*-x$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);

	return 0;
}
