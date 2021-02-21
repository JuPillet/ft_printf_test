#include "../ft_printf.h"

int		main(void)
{
	int a;
	int *b;
	int	nbcmy42;
	int nbcnati;

	a = 1;
	b = &a;

	printf("----------X---positive--------\n");
	ft_printf("my42 : %%X\t : |%X$\n", 12345);
	printf("nati : %%X\t : |%X$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%0X\t : |%*X$\n", 0, 12345);
	printf("nati : %%0X\t : |%*X$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5X\t : |%*X$\n", 5, 12345);
	printf("nati : %%5X\t : |%*X$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10X\t : |%*X$\n", 10, 12345);
	printf("nati : %%10X\t : |%*X$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%-5X\t : |%*X$\n", -5, 12345);
	printf("nati : %%-5X\t : |%*X$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10X\t : |%*X$\n", -10, 12345);
	printf("nati : %%-10X\t : |%*X$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%.0X\t : |%.*X$\n", 0, 12345);
	printf("nati : %%.0X\t : |%.*X$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%.3X\t : |%.*X$\n", 3, 12345);
	printf("nati : %%.3X\t : |%.*X$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%.5X\t : |%.*X$\n", 5, 12345);
	printf("nati : %%.5X\t : |%.*X$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%.7X\t : |%.*X$\n", 7, 12345);
	printf("nati : %%.7X\t : |%.*X$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%.-7X\t : |%.*X$\n", -7, 12345);
	printf("nati : %%.-7X\t : |%.*X$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0X\t : |%*.*X$\n", 0, 0, 12345);
	printf("nati : %%0.0X\t : |%*.*X$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3X\t : |%*.*X$\n", 0, 3, 12345);
	printf("nati : %%0.3X\t : |%*.*X$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5X\t : |%*.*X$\n", 0, 5, 12345);
	printf("nati : %%0.5X\t : |%*.*X$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7X\t : |%*.*X$\n", 0, 7, 12345);
	printf("nati : %%0.7X\t : |%*.*X$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7X\t : |%*.*X$\n", 0, -7, 12345);
	printf("nati : %%0.-7X\t : |%*.*X$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.0X\t : |%*.*X$\n", 5, 0, 12345);
	printf("nati : %%5.0X\t : |%*.*X$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5.3X\t : |%*.*X$\n", 5, 3, 12345);
	printf("nati : %%5.3X\t : |%*.*X$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%5.5X\t : |%*.*X$\n", 5, 5, 12345);
	printf("nati : %%5.5X\t : |%*.*X$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%5.7X\t : |%*.*X$\n", 5, 7, 12345);
	printf("nati : %%5.7X\t : |%*.*X$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.-7X\t : |%*.*X$\n", 5, -7, 12345);
	printf("nati : %%5.-7X\t : |%*.*X$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.0X\t : |%*.*X$\n", 10, 0, 12345);
	printf("nati : %%10.0X\t : |%*.*X$\n", 10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%10.3X\t : |%*.*X$\n", 10, 3, 12345);
	printf("nati : %%10.3X\t : |%*.*X$\n", 10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%10.5X\t : |%*.*X$\n", 10, 5, 12345);
	printf("nati : %%10.5X\t : |%*.*X$\n", 10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10.7X\t : |%*.*X$\n", 10, 7, 12345);
	printf("nati : %%10.7X\t : |%*.*X$\n", 10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.-7X\t : |%*.*X$\n", 10, -7, 12345);
	printf("nati : %%10.-7X\t : |%*.*X$\n", 10, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.0X\t : |%*.*X$\n", -5, 0, 12345);
	printf("nati : %%-5.0X\t : |%*.*X$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.3X\t : |%*.*X$\n", -5, 3, 12345);
	printf("nati : %%-5.3X\t : |%*.*X$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.5X\t : |%*.*X$\n", -5, 5, 12345);
	printf("nati : %%-5.5X\t : |%*.*X$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.7X\t : |%*.*X$\n", -5, 7, 12345);
	printf("nati : %%-5.7X\t : |%*.*X$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7X\t : |%*.*X$\n", -5, -7, 12345);
	printf("nati : %%-5.-7X\t : |%*.*X$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.0X\t : |%*.*X$\n", -10, 0, 12345);
	printf("nati : %%-10.0X\t : |%*.*X$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.3X\t : |%*.*X$\n", -10, 3, 12345);
	printf("nati : %%-10.3X\t : |%*.*X$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.5X\t : |%*.*X$\n", -10, 5, 12345);
	printf("nati : %%-10.5X\t : |%*.*X$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.7X\t : |%*.*X$\n", -10, 7, 12345);
	printf("nati : %%-10.7X\t : |%*.*X$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7X\t : |%*.*X$\n", -10, -7, 12345);
	printf("nati : %%-10.-7X\t : |%*.*X$\n", -10, -7, 12345);
	printf("----------X---negative--------\n");
	usleep(500);
	ft_printf("my42 : %%X\t : |%X$\n", -12345);
	printf("nati : %%X\t : |%X$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%0X\t : |%*X$\n", 0, -12345);
	printf("nati : %%0X\t : |%*X$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5X\t : |%*X$\n", 5, -12345);
	printf("nati : %%5X\t : |%*X$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10X\t : |%*X$\n", 10, -12345);
	printf("nati : %%10X\t : |%*X$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%-5X\t : |%*X$\n", -5, -12345);
	printf("nati : %%-5X\t : |%*X$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10X\t : |%*X$\n", -10, -12345);
	printf("nati : %%-10X\t : |%*X$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%.0X\t : |%.*X$\n", 0, -12345);
	printf("nati : %%.0X\t : |%.*X$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%.3X\t : |%.*X$\n", 3, -12345);
	printf("nati : %%.3X\t : |%.*X$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%.5X\t : |%.*X$\n", 5, -12345);
	printf("nati : %%.5X\t : |%.*X$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%.7X\t : |%.*X$\n", 7, -12345);
	printf("nati : %%.7X\t : |%.*X$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%.-7X\t : |%.*X$\n", -7, -12345);
	printf("nati : %%.-7X\t : |%.*X$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0X\t : |%*.*X$\n", 0, 0, -12345);
	printf("nati : %%0.0X\t : |%*.*X$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3X\t : |%*.*X$\n", 0, 3, -12345);
	printf("nati : %%0.3X\t : |%*.*X$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5X\t : |%*.*X$\n", 0, 5, -12345);
	printf("nati : %%0.5X\t : |%*.*X$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7X\t : |%*.*X$\n", 0, 7, -12345);
	printf("nati : %%0.7X\t : |%*.*X$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7X\t : |%*.*X$\n", 0, -7, -12345);
	printf("nati : %%0.-7X\t : |%*.*X$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.0X\t : |%*.*X$\n", 5, 0, -12345);
	printf("nati : %%5.0X\t : |%*.*X$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5.3X\t : |%*.*X$\n", 5, 3, -12345);
	printf("nati : %%5.3X\t : |%*.*X$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%5.5X\t : |%*.*X$\n", 5, 5, -12345);
	printf("nati : %%5.5X\t : |%*.*X$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%5.7X\t : |%*.*X$\n", 5, 7, -12345);
	printf("nati : %%5.7X\t : |%*.*X$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.-7X\t : |%*.*X$\n", 5, -7, -12345);
	printf("nati : %%5.-7X\t : |%*.*X$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.0X\t : |%*.*X$\n", 10, 0, -12345);
	printf("nati : %%10.0X\t : |%*.*X$\n", 10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%10.3X\t : |%*.*X$\n", 10, 3, -12345);
	printf("nati : %%10.3X\t : |%*.*X$\n", 10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%10.5X\t : |%*.*X$\n", 10, 5, -12345);
	printf("nati : %%10.5X\t : |%*.*X$\n", 10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10.7X\t : |%*.*X$\n", 10, 7, -12345);
	printf("nati : %%10.7X\t : |%*.*X$\n", 10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.-7X\t : |%*.*X$\n", 10, -7, -12345);
	printf("nati : %%10.-7X\t : |%*.*X$\n", 10, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.0X\t : |%*.*X$\n", -5, 0, -12345);
	printf("nati : %%-5.0X\t : |%*.*X$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.3X\t : |%*.*X$\n", -5, 3, -12345);
	printf("nati : %%-5.3X\t : |%*.*X$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.5X\t : |%*.*X$\n", -5, 5, -12345);
	printf("nati : %%-5.5X\t : |%*.*X$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.7X\t : |%*.*X$\n", -5, 7, -12345);
	printf("nati : %%-5.7X\t : |%*.*X$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7X\t : |%*.*X$\n", -5, -7, -12345);
	printf("nati : %%-5.-7X\t : |%*.*X$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.0X\t : |%*.*X$\n", -10, 0, -12345);
	printf("nati : %%-10.0X\t : |%*.*X$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.3X\t : |%*.*X$\n", -10, 3, -12345);
	printf("nati : %%-10.3X\t : |%*.*X$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.5X\t : |%*.*X$\n", -10, 5, -12345);
	printf("nati : %%-10.5X\t : |%*.*X$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.7X\t : |%*.*X$\n", -10, 7, -12345);
	printf("nati : %%-10.7X\t : |%*.*X$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7X  : |%*.*X$\n", -10, -7, -12345);
	printf("nati : %%-10.-7X  : |%*.*X$\n", -10, -7, -12345);
	printf("--------0--X--positive--------\n");
	usleep(500);
	ft_printf("my42 : %%0X\t : |%0X$\n", 12345);
	printf("nati : %%0X\t : |%0X$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%00X\t : |%0*X$\n", 0, 12345);
	printf("nati : %%00X\t : |%0*X$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05X\t : |%0*X$\n", 5, 12345);
	printf("nati : %%05X\t : |%0*X$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010X\t : |%0*X$\n", 10, 12345);
	printf("nati : %%010X\t : |%0*X$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5X\t : |%0*X$\n", -5, 12345);
	printf("nati : %%0-5X\t : |%0*X$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10X\t : |%0*X$\n", -10, 12345);
	printf("nati : %%0-10X\t : |%0*X$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0X\t : |%0.*X$\n", 0, 12345);
	printf("nati : %%0.0X\t : |%0.*X$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3X\t : |%0.*X$\n", 3, 12345);
	printf("nati : %%0.3X\t : |%0.*X$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5X\t : |%0.*X$\n", 5, 12345);
	printf("nati : %%0.5X\t : |%0.*X$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7X\t : |%0.*X$\n", 7, 12345);
	printf("nati : %%0.7X\t : |%0.*X$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7X\t : |%0.*X$\n", -7, 12345);
	printf("nati : %%0.-7X\t : |%0.*X$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.0X\t : |%0*.*X$\n", 0, 0, 12345);
	printf("nati : %%00.0X\t : |%0*.*X$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%00.3X\t : |%0*.*X$\n", 0, 3, 12345);
	printf("nati : %%00.3X\t : |%0*.*X$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%00.5X\t : |%0*.*X$\n", 0, 5, 12345);
	printf("nati : %%00.5X\t : |%0*.*X$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%00.7X\t : |%0*.*X$\n", 0, 7, 12345);
	printf("nati : %%00.7X\t : |%0*.*X$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.-7X\t : |%0*.*X$\n", 0, -7, 12345);
	printf("nati : %%00.-7X\t : |%0*.*X$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.0X\t : |%0*.*X$\n", 5, 0, 12345);
	printf("nati : %%05.0X\t : |%0*.*X$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05.3X\t : |%0*.*X$\n", 5, 3, 12345);
	printf("nati : %%05.3X\t : |%0*.*X$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%05.5X\t : |%0*.*X$\n", 5, 5, 12345);
	printf("nati : %%05.5X\t : |%0*.*X$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%05.7X\t : |%0*.*X$\n", 5, 7, 12345);
	printf("nati : %%05.7X\t : |%0*.*X$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.-7X\t : |%0*.*X$\n", 5, -7, 12345);
	printf("nati : %%05.-7X\t : |%0*.*X$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.0X\t : |%0*.*X$\n", 10, 0, 12345);
	printf("nati : %%010.0X\t : |%0*.*X$\n", 10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%010.3X\t : |%0*.*X$\n", 10, 3, 12345);
	printf("nati : %%010.3X\t : |%0*.*X$\n", 10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%010.5X\t : |%0*.*X$\n", 10, 5, 12345);
	printf("nati : %%010.5X\t : |%0*.*X$\n", 10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010.7X\t : |%0*.*X$\n", 10, 7, 12345);
	printf("nati : %%010.7X\t : |%0*.*X$\n", 10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.-7X\t : |%0*.*X$\n", 10, -7, 12345);
	printf("nati : %%010.-7X\t : |%0*.*X$\n", 10, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0X\t : |%0*.*X$\n", -5, 0, 12345);
	printf("nati : %%0-5.0X\t : |%0*.*X$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3X\t : |%0*.*X$\n", -5, 3, 12345);
	printf("nati : %%0-5.3X\t : |%0*.*X$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5X\t : |%0*.*X$\n", -5, 5, 12345);
	printf("nati : %%0-5.5X\t : |%0*.*X$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7X\t : |%0*.*X$\n", -5, 7, 12345);
	printf("nati : %%0-5.7X\t : |%0*.*X$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7X\t : |%0*.*X$\n", -5, -7, 12345);
	printf("nati : %%0-5.-7X\t : |%0*.*X$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0X\t : |%0*.*X$\n", -10, 0, 12345);
	printf("nati : %%0-10.0X\t : |%0*.*X$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3X\t : |%0*.*X$\n", -10, 3, 12345);
	printf("nati : %%0-10.3X\t : |%0*.*X$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5X\t : |%0*.*X$\n", -10, 5, 12345);
	printf("nati : %%0-10.5X\t : |%0*.*X$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7X\t : |%0*.*X$\n", -10, 7, 12345);
	printf("nati : %%0-10.7X\t : |%0*.*X$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7X : |%0*.*X$\n", -10, -7, 12345);
	printf("nati : %%0-10.-7X : |%0*.*X$\n", -10, -7, 12345);
	printf("--------0--X--negative--------\n");
	usleep(500);
	ft_printf("my42 : %%0X\t : |%0X$\n", -12345);
	printf("nati : %%0X\t : |%0X$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%00X\t : |%0*X$\n", 0, -12345);
	printf("nati : %%00X\t : |%0*X$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05X\t : |%0*X$\n", 5, -12345);
	printf("nati : %%05X\t : |%0*X$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010X\t : |%0*X$\n", 10, -12345);
	printf("nati : %%010X\t : |%0*X$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5X\t : |%0*X$\n", -5, -12345);
	printf("nati : %%0-5X\t : |%0*X$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10X\t : |%0*X$\n", -10, -12345);
	printf("nati : %%0-10X\t : |%0*X$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0X\t : |%0.*X$\n", 0, -12345);
	printf("nati : %%0.0X\t : |%0.*X$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3X\t : |%0.*X$\n", 3, -12345);
	printf("nati : %%0.3X\t : |%0.*X$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5X\t : |%0.*X$\n", 5, -12345);
	printf("nati : %%0.5X\t : |%0.*X$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7X\t : |%0.*X$\n", 7, -12345);
	printf("nati : %%0.7X\t : |%0.*X$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7X\t : |%0.*X$\n", -7, -12345);
	printf("nati : %%0.-7X\t : |%0.*X$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.0X\t : |%0*.*X$\n", 0, 0, -12345);
	printf("nati : %%00.0X\t : |%0*.*X$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%00.3X\t : |%0*.*X$\n", 0, 3, -12345);
	printf("nati : %%00.3X\t : |%0*.*X$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%00.5X\t : |%0*.*X$\n", 0, 5, -12345);
	printf("nati : %%00.5X\t : |%0*.*X$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%00.7X\t : |%0*.*X$\n", 0, 7, -12345);
	printf("nati : %%00.7X\t : |%0*.*X$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.-7X\t : |%0*.*X$\n", 0, -7, -12345);
	printf("nati : %%00.-7X\t : |%0*.*X$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.0X\t : |%0*.*X$\n", 5, 0, -12345);
	printf("nati : %%05.0X\t : |%0*.*X$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05.3X\t : |%0*.*X$\n", 5, 3, -12345);
	printf("nati : %%05.3X\t : |%0*.*X$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%05.5X\t : |%0*.*X$\n", 5, 5, -12345);
	printf("nati : %%05.5X\t : |%0*.*X$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%05.7X\t : |%0*.*X$\n", 5, 7, -12345);
	printf("nati : %%05.7X\t : |%0*.*X$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.-7X\t : |%0*.*X$\n", 5, -7, -12345);
	printf("nati : %%05.-7X\t : |%0*.*X$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.0X\t : |%0*.*X$\n", 10, 0, -12345);
	printf("nati : %%010.0X\t : |%0*.*X$\n", 10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%010.3X\t : |%0*.*X$\n", 10, 3, -12345);
	printf("nati : %%010.3X\t : |%0*.*X$\n", 10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%010.5X\t : |%0*.*X$\n", 10, 5, -12345);
	printf("nati : %%010.5X\t : |%0*.*X$\n", 10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010.7X\t : |%0*.*X$\n", 10, 7, -12345);
	printf("nati : %%010.7X\t : |%0*.*X$\n", 10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.-7X\t : |%0*.*X$\n", 10, -7, -12345);
	printf("nati : %%010.-7X\t : |%0*.*X$\n", 10, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0X\t : |%0*.*X$\n", -5, 0, -12345);
	printf("nati : %%0-5.0X\t : |%0*.*X$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3X\t : |%0*.*X$\n", -5, 3, -12345);
	printf("nati : %%0-5.3X\t : |%0*.*X$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5X\t : |%0*.*X$\n", -5, 5, -12345);
	printf("nati : %%0-5.5X\t : |%0*.*X$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7X\t : |%0*.*X$\n", -5, 7, -12345);
	printf("nati : %%0-5.7X\t : |%0*.*X$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7X\t : |%0*.*X$\n", -5, -7, -12345);
	printf("nati : %%0-5.-7X\t : |%0*.*X$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0X\t : |%0*.*X$\n", -10, 0, -12345);
	printf("nati : %%0-10.0X\t : |%0*.*X$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3X\t : |%0*.*X$\n", -10, 3, -12345);
	printf("nati : %%0-10.3X\t : |%0*.*X$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5X\t : |%0*.*X$\n", -10, 5, -12345);
	printf("nati : %%0-10.5X\t : |%0*.*X$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7X\t : |%0*.*X$\n", -10, 7, -12345);
	printf("nati : %%0-10.7X\t : |%0*.*X$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7X : |%0*.*X$\n", -10, -7, -12345);
	printf("nati : %%0-10.-7X : |%0*.*X$\n", -10, -7, -12345);
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** get-crazy **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	usleep(500);
	a = ft_printf("abc %**.*-X abc %**.*-X$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %**.*-X abc %**.*-X$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %**.*-X abc %**.*-X$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %**.*-X abc %**.*-X$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %0**.*-X abc %0**.*-X$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %0**.*-X abc %0**.*-X$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %0**.*-X abc %0**.*-X$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %0**.*-X abc %0**.*-X$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);

	return 0;
}
