#include "../ft_printf.h"

int		main(void)
{
	int a;
	int *b;
	int	nbcmy42;
	int nbcnati;

	a = 1;
	b = &a;

	printf("----------c---positive--------\n");
	ft_printf("my42 : %%c\t : |%c$\n", 12345);
	printf("nati : %%c\t : |%c$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%0c\t : |%*c$\n", 0, 12345);
	printf("nati : %%0c\t : |%*c$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5c\t : |%*c$\n", 5, 12345);
	printf("nati : %%5c\t : |%*c$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10c\t : |%*c$\n", 10, 12345);
	printf("nati : %%10c\t : |%*c$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%-5c\t : |%*c$\n", -5, 12345);
	printf("nati : %%-5c\t : |%*c$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10c\t : |%*c$\n", -10, 12345);
	printf("nati : %%-10c\t : |%*c$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%.0c\t : |%.*c$\n", 0, 12345);
	printf("nati : %%.0c\t : |%.*c$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%.3c\t : |%.*c$\n", 3, 12345);
	printf("nati : %%.3c\t : |%.*c$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%.5c\t : |%.*c$\n", 5, 12345);
	printf("nati : %%.5c\t : |%.*c$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%.7c\t : |%.*c$\n", 7, 12345);
	printf("nati : %%.7c\t : |%.*c$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%.-7c\t : |%.*c$\n", -7, 12345);
	printf("nati : %%.-7c\t : |%.*c$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0c\t : |%*.*c$\n", 0, 0, 12345);
	printf("nati : %%0.0c\t : |%*.*c$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3c\t : |%*.*c$\n", 0, 3, 12345);
	printf("nati : %%0.3c\t : |%*.*c$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5c\t : |%*.*c$\n", 0, 5, 12345);
	printf("nati : %%0.5c\t : |%*.*c$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7c\t : |%*.*c$\n", 0, 7, 12345);
	printf("nati : %%0.7c\t : |%*.*c$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7c\t : |%*.*c$\n", 0, -7, 12345);
	printf("nati : %%0.-7c\t : |%*.*c$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.0c\t : |%*.*c$\n", 5, 0, 12345);
	printf("nati : %%5.0c\t : |%*.*c$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5.3c\t : |%*.*c$\n", 5, 3, 12345);
	printf("nati : %%5.3c\t : |%*.*c$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%5.5c\t : |%*.*c$\n", 5, 5, 12345);
	printf("nati : %%5.5c\t : |%*.*c$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%5.7c\t : |%*.*c$\n", 5, 7, 12345);
	printf("nati : %%5.7c\t : |%*.*c$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.-7c\t : |%*.*c$\n", 5, -7, 12345);
	printf("nati : %%5.-7c\t : |%*.*c$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.0c\t : |%*.*c$\n", 10, 0, 12345);
	printf("nati : %%10.0c\t : |%*.*c$\n", 10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%10.3c\t : |%*.*c$\n", 10, 3, 12345);
	printf("nati : %%10.3c\t : |%*.*c$\n", 10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%10.5c\t : |%*.*c$\n", 10, 5, 12345);
	printf("nati : %%10.5c\t : |%*.*c$\n", 10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10.7c\t : |%*.*c$\n", 10, 7, 12345);
	printf("nati : %%10.7c\t : |%*.*c$\n", 10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.-7c\t : |%*.*c$\n", 10, -7, 12345);
	printf("nati : %%10.-7c\t : |%*.*c$\n", 10, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.0c\t : |%*.*c$\n", -5, 0, 12345);
	printf("nati : %%-5.0c\t : |%*.*c$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.3c\t : |%*.*c$\n", -5, 3, 12345);
	printf("nati : %%-5.3c\t : |%*.*c$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.5c\t : |%*.*c$\n", -5, 5, 12345);
	printf("nati : %%-5.5c\t : |%*.*c$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.7c\t : |%*.*c$\n", -5, 7, 12345);
	printf("nati : %%-5.7c\t : |%*.*c$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7c\t : |%*.*c$\n", -5, -7, 12345);
	printf("nati : %%-5.-7c\t : |%*.*c$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.0c\t : |%*.*c$\n", -10, 0, 12345);
	printf("nati : %%-10.0c\t : |%*.*c$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.3c\t : |%*.*c$\n", -10, 3, 12345);
	printf("nati : %%-10.3c\t : |%*.*c$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.5c\t : |%*.*c$\n", -10, 5, 12345);
	printf("nati : %%-10.5c\t : |%*.*c$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.7c\t : |%*.*c$\n", -10, 7, 12345);
	printf("nati : %%-10.7c\t : |%*.*c$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7c\t : |%*.*c$\n", -10, -7, 12345);
	printf("nati : %%-10.-7c\t : |%*.*c$\n", -10, -7, 12345);
	printf("----------c---negative--------\n");
	usleep(500);
	ft_printf("my42 : %%c\t : |%c$\n", -12345);
	printf("nati : %%c\t : |%c$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%0c\t : |%*c$\n", 0, -12345);
	printf("nati : %%0c\t : |%*c$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5c\t : |%*c$\n", 5, -12345);
	printf("nati : %%5c\t : |%*c$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10c\t : |%*c$\n", 10, -12345);
	printf("nati : %%10c\t : |%*c$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%-5c\t : |%*c$\n", -5, -12345);
	printf("nati : %%-5c\t : |%*c$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10c\t : |%*c$\n", -10, -12345);
	printf("nati : %%-10c\t : |%*c$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%.0c\t : |%.*c$\n", 0, -12345);
	printf("nati : %%.0c\t : |%.*c$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%.3c\t : |%.*c$\n", 3, -12345);
	printf("nati : %%.3c\t : |%.*c$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%.5c\t : |%.*c$\n", 5, -12345);
	printf("nati : %%.5c\t : |%.*c$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%.7c\t : |%.*c$\n", 7, -12345);
	printf("nati : %%.7c\t : |%.*c$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%.-7c\t : |%.*c$\n", -7, -12345);
	printf("nati : %%.-7c\t : |%.*c$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0c\t : |%*.*c$\n", 0, 0, -12345);
	printf("nati : %%0.0c\t : |%*.*c$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3c\t : |%*.*c$\n", 0, 3, -12345);
	printf("nati : %%0.3c\t : |%*.*c$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5c\t : |%*.*c$\n", 0, 5, -12345);
	printf("nati : %%0.5c\t : |%*.*c$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7c\t : |%*.*c$\n", 0, 7, -12345);
	printf("nati : %%0.7c\t : |%*.*c$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7c\t : |%*.*c$\n", 0, -7, -12345);
	printf("nati : %%0.-7c\t : |%*.*c$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.0c\t : |%*.*c$\n", 5, 0, -12345);
	printf("nati : %%5.0c\t : |%*.*c$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5.3c\t : |%*.*c$\n", 5, 3, -12345);
	printf("nati : %%5.3c\t : |%*.*c$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%5.5c\t : |%*.*c$\n", 5, 5, -12345);
	printf("nati : %%5.5c\t : |%*.*c$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%5.7c\t : |%*.*c$\n", 5, 7, -12345);
	printf("nati : %%5.7c\t : |%*.*c$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.-7c\t : |%*.*c$\n", 5, -7, -12345);
	printf("nati : %%5.-7c\t : |%*.*c$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.0c\t : |%*.*c$\n", 10, 0, -12345);
	printf("nati : %%10.0c\t : |%*.*c$\n", 10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%10.3c\t : |%*.*c$\n", 10, 3, -12345);
	printf("nati : %%10.3c\t : |%*.*c$\n", 10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%10.5c\t : |%*.*c$\n", 10, 5, -12345);
	printf("nati : %%10.5c\t : |%*.*c$\n", 10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10.7c\t : |%*.*c$\n", 10, 7, -12345);
	printf("nati : %%10.7c\t : |%*.*c$\n", 10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.-7c\t : |%*.*c$\n", 10, -7, -12345);
	printf("nati : %%10.-7c\t : |%*.*c$\n", 10, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.0c\t : |%*.*c$\n", -5, 0, -12345);
	printf("nati : %%-5.0c\t : |%*.*c$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.3c\t : |%*.*c$\n", -5, 3, -12345);
	printf("nati : %%-5.3c\t : |%*.*c$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.5c\t : |%*.*c$\n", -5, 5, -12345);
	printf("nati : %%-5.5c\t : |%*.*c$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.7c\t : |%*.*c$\n", -5, 7, -12345);
	printf("nati : %%-5.7c\t : |%*.*c$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7c\t : |%*.*c$\n", -5, -7, -12345);
	printf("nati : %%-5.-7c\t : |%*.*c$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.0c\t : |%*.*c$\n", -10, 0, -12345);
	printf("nati : %%-10.0c\t : |%*.*c$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.3c\t : |%*.*c$\n", -10, 3, -12345);
	printf("nati : %%-10.3c\t : |%*.*c$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.5c\t : |%*.*c$\n", -10, 5, -12345);
	printf("nati : %%-10.5c\t : |%*.*c$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.7c\t : |%*.*c$\n", -10, 7, -12345);
	printf("nati : %%-10.7c\t : |%*.*c$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7c  : |%*.*c$\n", -10, -7, -12345);
	printf("nati : %%-10.-7c  : |%*.*c$\n", -10, -7, -12345);
	printf("--------0--c--positive--------\n");
	usleep(500);
	ft_printf("my42 : %%0c\t : |%0c$\n", 12345);
	printf("nati : %%0c\t : |%0c$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%00c\t : |%0*c$\n", 0, 12345);
	printf("nati : %%00c\t : |%0*c$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05c\t : |%0*c$\n", 5, 12345);
	printf("nati : %%05c\t : |%0*c$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010c\t : |%0*c$\n", 10, 12345);
	printf("nati : %%010c\t : |%0*c$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5c\t : |%0*c$\n", -5, 12345);
	printf("nati : %%0-5c\t : |%0*c$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10c\t : |%0*c$\n", -10, 12345);
	printf("nati : %%0-10c\t : |%0*c$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0c\t : |%0.*c$\n", 0, 12345);
	printf("nati : %%0.0c\t : |%0.*c$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3c\t : |%0.*c$\n", 3, 12345);
	printf("nati : %%0.3c\t : |%0.*c$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5c\t : |%0.*c$\n", 5, 12345);
	printf("nati : %%0.5c\t : |%0.*c$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7c\t : |%0.*c$\n", 7, 12345);
	printf("nati : %%0.7c\t : |%0.*c$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7c\t : |%0.*c$\n", -7, 12345);
	printf("nati : %%0.-7c\t : |%0.*c$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.0c\t : |%0*.*c$\n", 0, 0, 12345);
	printf("nati : %%00.0c\t : |%0*.*c$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%00.3c\t : |%0*.*c$\n", 0, 3, 12345);
	printf("nati : %%00.3c\t : |%0*.*c$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%00.5c\t : |%0*.*c$\n", 0, 5, 12345);
	printf("nati : %%00.5c\t : |%0*.*c$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%00.7c\t : |%0*.*c$\n", 0, 7, 12345);
	printf("nati : %%00.7c\t : |%0*.*c$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.-7c\t : |%0*.*c$\n", 0, -7, 12345);
	printf("nati : %%00.-7c\t : |%0*.*c$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.0c\t : |%0*.*c$\n", 5, 0, 12345);
	printf("nati : %%05.0c\t : |%0*.*c$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05.3c\t : |%0*.*c$\n", 5, 3, 12345);
	printf("nati : %%05.3c\t : |%0*.*c$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%05.5c\t : |%0*.*c$\n", 5, 5, 12345);
	printf("nati : %%05.5c\t : |%0*.*c$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%05.7c\t : |%0*.*c$\n", 5, 7, 12345);
	printf("nati : %%05.7c\t : |%0*.*c$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.-7c\t : |%0*.*c$\n", 5, -7, 12345);
	printf("nati : %%05.-7c\t : |%0*.*c$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.0c\t : |%0*.*c$\n", 10, 0, 12345);
	printf("nati : %%010.0c\t : |%0*.*c$\n", 10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%010.3c\t : |%0*.*c$\n", 10, 3, 12345);
	printf("nati : %%010.3c\t : |%0*.*c$\n", 10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%010.5c\t : |%0*.*c$\n", 10, 5, 12345);
	printf("nati : %%010.5c\t : |%0*.*c$\n", 10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010.7c\t : |%0*.*c$\n", 10, 7, 12345);
	printf("nati : %%010.7c\t : |%0*.*c$\n", 10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.-7c\t : |%0*.*c$\n", 10, -7, 12345);
	printf("nati : %%010.-7c\t : |%0*.*c$\n", 10, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0c\t : |%0*.*c$\n", -5, 0, 12345);
	printf("nati : %%0-5.0c\t : |%0*.*c$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3c\t : |%0*.*c$\n", -5, 3, 12345);
	printf("nati : %%0-5.3c\t : |%0*.*c$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5c\t : |%0*.*c$\n", -5, 5, 12345);
	printf("nati : %%0-5.5c\t : |%0*.*c$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7c\t : |%0*.*c$\n", -5, 7, 12345);
	printf("nati : %%0-5.7c\t : |%0*.*c$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7c\t : |%0*.*c$\n", -5, -7, 12345);
	printf("nati : %%0-5.-7c\t : |%0*.*c$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0c\t : |%0*.*c$\n", -10, 0, 12345);
	printf("nati : %%0-10.0c\t : |%0*.*c$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3c\t : |%0*.*c$\n", -10, 3, 12345);
	printf("nati : %%0-10.3c\t : |%0*.*c$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5c\t : |%0*.*c$\n", -10, 5, 12345);
	printf("nati : %%0-10.5c\t : |%0*.*c$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7c\t : |%0*.*c$\n", -10, 7, 12345);
	printf("nati : %%0-10.7c\t : |%0*.*c$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7c : |%0*.*c$\n", -10, -7, 12345);
	printf("nati : %%0-10.-7c : |%0*.*c$\n", -10, -7, 12345);
	printf("--------0--c--negative--------\n");
	usleep(500);
	ft_printf("my42 : %%0c\t : |%0c$\n", -12345);
	printf("nati : %%0c\t : |%0c$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%00c\t : |%0*c$\n", 0, -12345);
	printf("nati : %%00c\t : |%0*c$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05c\t : |%0*c$\n", 5, -12345);
	printf("nati : %%05c\t : |%0*c$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010c\t : |%0*c$\n", 10, -12345);
	printf("nati : %%010c\t : |%0*c$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5c\t : |%0*c$\n", -5, -12345);
	printf("nati : %%0-5c\t : |%0*c$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10c\t : |%0*c$\n", -10, -12345);
	printf("nati : %%0-10c\t : |%0*c$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0c\t : |%0.*c$\n", 0, -12345);
	printf("nati : %%0.0c\t : |%0.*c$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3c\t : |%0.*c$\n", 3, -12345);
	printf("nati : %%0.3c\t : |%0.*c$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5c\t : |%0.*c$\n", 5, -12345);
	printf("nati : %%0.5c\t : |%0.*c$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7c\t : |%0.*c$\n", 7, -12345);
	printf("nati : %%0.7c\t : |%0.*c$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7c\t : |%0.*c$\n", -7, -12345);
	printf("nati : %%0.-7c\t : |%0.*c$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.0c\t : |%0*.*c$\n", 0, 0, -12345);
	printf("nati : %%00.0c\t : |%0*.*c$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%00.3c\t : |%0*.*c$\n", 0, 3, -12345);
	printf("nati : %%00.3c\t : |%0*.*c$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%00.5c\t : |%0*.*c$\n", 0, 5, -12345);
	printf("nati : %%00.5c\t : |%0*.*c$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%00.7c\t : |%0*.*c$\n", 0, 7, -12345);
	printf("nati : %%00.7c\t : |%0*.*c$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.-7c\t : |%0*.*c$\n", 0, -7, -12345);
	printf("nati : %%00.-7c\t : |%0*.*c$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.0c\t : |%0*.*c$\n", 5, 0, -12345);
	printf("nati : %%05.0c\t : |%0*.*c$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05.3c\t : |%0*.*c$\n", 5, 3, -12345);
	printf("nati : %%05.3c\t : |%0*.*c$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%05.5c\t : |%0*.*c$\n", 5, 5, -12345);
	printf("nati : %%05.5c\t : |%0*.*c$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%05.7c\t : |%0*.*c$\n", 5, 7, -12345);
	printf("nati : %%05.7c\t : |%0*.*c$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.-7c\t : |%0*.*c$\n", 5, -7, -12345);
	printf("nati : %%05.-7c\t : |%0*.*c$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.0c\t : |%0*.*c$\n", 10, 0, -12345);
	printf("nati : %%010.0c\t : |%0*.*c$\n", 10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%010.3c\t : |%0*.*c$\n", 10, 3, -12345);
	printf("nati : %%010.3c\t : |%0*.*c$\n", 10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%010.5c\t : |%0*.*c$\n", 10, 5, -12345);
	printf("nati : %%010.5c\t : |%0*.*c$\n", 10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010.7c\t : |%0*.*c$\n", 10, 7, -12345);
	printf("nati : %%010.7c\t : |%0*.*c$\n", 10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.-7c\t : |%0*.*c$\n", 10, -7, -12345);
	printf("nati : %%010.-7c\t : |%0*.*c$\n", 10, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0c\t : |%0*.*c$\n", -5, 0, -12345);
	printf("nati : %%0-5.0c\t : |%0*.*c$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3c\t : |%0*.*c$\n", -5, 3, -12345);
	printf("nati : %%0-5.3c\t : |%0*.*c$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5c\t : |%0*.*c$\n", -5, 5, -12345);
	printf("nati : %%0-5.5c\t : |%0*.*c$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7c\t : |%0*.*c$\n", -5, 7, -12345);
	printf("nati : %%0-5.7c\t : |%0*.*c$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7c\t : |%0*.*c$\n", -5, -7, -12345);
	printf("nati : %%0-5.-7c\t : |%0*.*c$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0c\t : |%0*.*c$\n", -10, 0, -12345);
	printf("nati : %%0-10.0c\t : |%0*.*c$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3c\t : |%0*.*c$\n", -10, 3, -12345);
	printf("nati : %%0-10.3c\t : |%0*.*c$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5c\t : |%0*.*c$\n", -10, 5, -12345);
	printf("nati : %%0-10.5c\t : |%0*.*c$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7c\t : |%0*.*c$\n", -10, 7, -12345);
	printf("nati : %%0-10.7c\t : |%0*.*c$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7c : |%0*.*c$\n", -10, -7, -12345);
	printf("nati : %%0-10.-7c : |%0*.*c$\n", -10, -7, -12345);
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** get-crazy **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	usleep(500);
	a = ft_printf("abc %**.*-c abc %**.*-c$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %**.*-c abc %**.*-c$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %**.*-c abc %**.*-c$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %**.*-c abc %**.*-c$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %0**.*-c abc %0**.*-c$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %0**.*-c abc %0**.*-c$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %0**.*-c abc %0**.*-c$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %0**.*-c abc %0**.*-c$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);

	return 0;
}
