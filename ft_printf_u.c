#include "../ft_printf.h"

int		main(void)
{
	int a;
	int *b;
	int	nbcmy42;
	int nbcnati;

	a = 1;
	b = &a;

	printf("----------u---positive--------\n");
	ft_printf("my42 : %%u\t : |%u$\n", 12345);
	printf("nati : %%u\t : |%u$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%0u\t : |%*u$\n", 0, 12345);
	printf("nati : %%0u\t : |%*u$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5u\t : |%*u$\n", 5, 12345);
	printf("nati : %%5u\t : |%*u$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10u\t : |%*u$\n", 10, 12345);
	printf("nati : %%10u\t : |%*u$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%-5u\t : |%*u$\n", -5, 12345);
	printf("nati : %%-5u\t : |%*u$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10u\t : |%*u$\n", -10, 12345);
	printf("nati : %%-10u\t : |%*u$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%.0u\t : |%.*u$\n", 0, 12345);
	printf("nati : %%.0u\t : |%.*u$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%.3u\t : |%.*u$\n", 3, 12345);
	printf("nati : %%.3u\t : |%.*u$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%.5u\t : |%.*u$\n", 5, 12345);
	printf("nati : %%.5u\t : |%.*u$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%.7u\t : |%.*u$\n", 7, 12345);
	printf("nati : %%.7u\t : |%.*u$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%.-7u\t : |%.*u$\n", -7, 12345);
	printf("nati : %%.-7u\t : |%.*u$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0u\t : |%*.*u$\n", 0, 0, 12345);
	printf("nati : %%0.0u\t : |%*.*u$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3u\t : |%*.*u$\n", 0, 3, 12345);
	printf("nati : %%0.3u\t : |%*.*u$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5u\t : |%*.*u$\n", 0, 5, 12345);
	printf("nati : %%0.5u\t : |%*.*u$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7u\t : |%*.*u$\n", 0, 7, 12345);
	printf("nati : %%0.7u\t : |%*.*u$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7u\t : |%*.*u$\n", 0, -7, 12345);
	printf("nati : %%0.-7u\t : |%*.*u$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.0u\t : |%*.*u$\n", 5, 0, 12345);
	printf("nati : %%5.0u\t : |%*.*u$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5.3u\t : |%*.*u$\n", 5, 3, 12345);
	printf("nati : %%5.3u\t : |%*.*u$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%5.5u\t : |%*.*u$\n", 5, 5, 12345);
	printf("nati : %%5.5u\t : |%*.*u$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%5.7u\t : |%*.*u$\n", 5, 7, 12345);
	printf("nati : %%5.7u\t : |%*.*u$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.-7u\t : |%*.*u$\n", 5, -7, 12345);
	printf("nati : %%5.-7u\t : |%*.*u$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.0u\t : |%*.*u$\n", 10, 0, 12345);
	printf("nati : %%10.0u\t : |%*.*u$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%10.3u\t : |%*.*u$\n", 10, 3, 12345);
	printf("nati : %%10.3u\t : |%*.*u$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%10.5u\t : |%*.*u$\n", 10, 5, 12345);
	printf("nati : %%10.5u\t : |%*.*u$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10.7u\t : |%*.*u$\n", 10, 7, 12345);
	printf("nati : %%10.7u\t : |%*.*u$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.0u\t : |%*.*u$\n", -5, 0, 12345);
	printf("nati : %%-5.0u\t : |%*.*u$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.3u\t : |%*.*u$\n", -5, 3, 12345);
	printf("nati : %%-5.3u\t : |%*.*u$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.5u\t : |%*.*u$\n", -5, 5, 12345);
	printf("nati : %%-5.5u\t : |%*.*u$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.7u\t : |%*.*u$\n", -5, 7, 12345);
	printf("nati : %%-5.7u\t : |%*.*u$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7u\t : |%*.*u$\n", -5, -7, 12345);
	printf("nati : %%-5.-7u\t : |%*.*u$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.0u\t : |%*.*u$\n", -10, 0, 12345);
	printf("nati : %%-10.0u\t : |%*.*u$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.3u\t : |%*.*u$\n", -10, 3, 12345);
	printf("nati : %%-10.3u\t : |%*.*u$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.5u\t : |%*.*u$\n", -10, 5, 12345);
	printf("nati : %%-10.5u\t : |%*.*u$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.7u\t : |%*.*u$\n", -10, 7, 12345);
	printf("nati : %%-10.7u\t : |%*.*u$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7u\t : |%*.*u$\n", -10, -7, 12345);
	printf("nati : %%-10.-7u\t : |%*.*u$\n", -10, -7, 12345);
	printf("----------u---negative--------\n");
	usleep(500);
	ft_printf("my42 : %%u\t : |%u$\n", -12345);
	printf("nati : %%u\t : |%u$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%0u\t : |%*u$\n", 0, -12345);
	printf("nati : %%0u\t : |%*u$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5u\t : |%*u$\n", 5, -12345);
	printf("nati : %%5u\t : |%*u$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10u\t : |%*u$\n", 10, -12345);
	printf("nati : %%10u\t : |%*u$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%-5u\t : |%*u$\n", -5, -12345);
	printf("nati : %%-5u\t : |%*u$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10u\t : |%*u$\n", -10, -12345);
	printf("nati : %%-10u\t : |%*u$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%.0u\t : |%.*u$\n", 0, -12345);
	printf("nati : %%.0u\t : |%.*u$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%.3u\t : |%.*u$\n", 3, -12345);
	printf("nati : %%.3u\t : |%.*u$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%.5u\t : |%.*u$\n", 5, -12345);
	printf("nati : %%.5u\t : |%.*u$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%.7u\t : |%.*u$\n", 7, -12345);
	printf("nati : %%.7u\t : |%.*u$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%.-7u\t : |%.*u$\n", -7, -12345);
	printf("nati : %%.-7u\t : |%.*u$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0u\t : |%*.*u$\n", 0, 0, -12345);
	printf("nati : %%0.0u\t : |%*.*u$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3u\t : |%*.*u$\n", 0, 3, -12345);
	printf("nati : %%0.3u\t : |%*.*u$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5u\t : |%*.*u$\n", 0, 5, -12345);
	printf("nati : %%0.5u\t : |%*.*u$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7u\t : |%*.*u$\n", 0, 7, -12345);
	printf("nati : %%0.7u\t : |%*.*u$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7u\t : |%*.*u$\n", 0, -7, -12345);
	printf("nati : %%0.-7u\t : |%*.*u$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.0u\t : |%*.*u$\n", 5, 0, -12345);
	printf("nati : %%5.0u\t : |%*.*u$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5.3u\t : |%*.*u$\n", 5, 3, -12345);
	printf("nati : %%5.3u\t : |%*.*u$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%5.5u\t : |%*.*u$\n", 5, 5, -12345);
	printf("nati : %%5.5u\t : |%*.*u$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%5.7u\t : |%*.*u$\n", 5, 7, -12345);
	printf("nati : %%5.7u\t : |%*.*u$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.-7u\t : |%*.*u$\n", 5, -7, -12345);
	printf("nati : %%5.-7u\t : |%*.*u$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.0u\t : |%*.*u$\n", 10, 0, -12345);
	printf("nati : %%10.0u\t : |%*.*u$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%10.3u\t : |%*.*u$\n", 10, 3, -12345);
	printf("nati : %%10.3u\t : |%*.*u$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%10.5u\t : |%*.*u$\n", 10, 5, -12345);
	printf("nati : %%10.5u\t : |%*.*u$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10.7u\t : |%*.*u$\n", 10, 7, -12345);
	printf("nati : %%10.7u\t : |%*.*u$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.0u\t : |%*.*u$\n", -5, 0, -12345);
	printf("nati : %%-5.0u\t : |%*.*u$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.3u\t : |%*.*u$\n", -5, 3, -12345);
	printf("nati : %%-5.3u\t : |%*.*u$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.5u\t : |%*.*u$\n", -5, 5, -12345);
	printf("nati : %%-5.5u\t : |%*.*u$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.7u\t : |%*.*u$\n", -5, 7, -12345);
	printf("nati : %%-5.7u\t : |%*.*u$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7u\t : |%*.*u$\n", -5, -7, -12345);
	printf("nati : %%-5.-7u\t : |%*.*u$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.0u\t : |%*.*u$\n", -10, 0, -12345);
	printf("nati : %%-10.0u\t : |%*.*u$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.3u\t : |%*.*u$\n", -10, 3, -12345);
	printf("nati : %%-10.3u\t : |%*.*u$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.5u\t : |%*.*u$\n", -10, 5, -12345);
	printf("nati : %%-10.5u\t : |%*.*u$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.7u\t : |%*.*u$\n", -10, 7, -12345);
	printf("nati : %%-10.7u\t : |%*.*u$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7u\t : |%*.*u$\n", -10, -7, -12345);
	printf("nati : %%-10.-7u\t : |%*.*u$\n", -10, -7, -12345);
	printf("--------0--u---positive--------\n");
	usleep(500);
	ft_printf("my42 : %%0u\t : |%0u$\n", 12345);
	printf("nati : %%0u\t : |%0u$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%00u\t : |%0*u$\n", 0, 12345);
	printf("nati : %%00u\t : |%0*u$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05u\t : |%0*u$\n", 5, 12345);
	printf("nati : %%05u\t : |%0*u$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010u\t : |%0*u$\n", 10, 12345);
	printf("nati : %%010u\t : |%0*u$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5u\t : |%0*u$\n", -5, 12345);
	printf("nati : %%0-5u\t : |%0*u$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10u\t : |%0*u$\n", -10, 12345);
	printf("nati : %%0-10u\t : |%0*u$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0u\t : |%0.*u$\n", 0, 12345);
	printf("nati : %%0.0u\t : |%0.*u$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3u\t : |%0.*u$\n", 3, 12345);
	printf("nati : %%0.3u\t : |%0.*u$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5u\t : |%0.*u$\n", 5, 12345);
	printf("nati : %%0.5u\t : |%0.*u$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7u\t : |%0.*u$\n", 7, 12345);
	printf("nati : %%0.7u\t : |%0.*u$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7u\t : |%0.*u$\n", -7, 12345);
	printf("nati : %%0.-7u\t : |%0.*u$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.0u\t : |%0*.*u$\n", 0, 0, 12345);
	printf("nati : %%00.0u\t : |%0*.*u$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%00.3u\t : |%0*.*u$\n", 0, 3, 12345);
	printf("nati : %%00.3u\t : |%0*.*u$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%00.5u\t : |%0*.*u$\n", 0, 5, 12345);
	printf("nati : %%00.5u\t : |%0*.*u$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%00.7u\t : |%0*.*u$\n", 0, 7, 12345);
	printf("nati : %%00.7u\t : |%0*.*u$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.-7u\t : |%0*.*u$\n", 0, -7, 12345);
	printf("nati : %%00.-7u\t : |%0*.*u$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.0u\t : |%0*.*u$\n", 5, 0, 12345);
	printf("nati : %%05.0u\t : |%0*.*u$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05.3u\t : |%0*.*u$\n", 5, 3, 12345);
	printf("nati : %%05.3u\t : |%0*.*u$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%05.5u\t : |%0*.*u$\n", 5, 5, 12345);
	printf("nati : %%05.5u\t : |%0*.*u$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%05.7u\t : |%0*.*u$\n", 5, 7, 12345);
	printf("nati : %%05.7u\t : |%0*.*u$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.-7u\t : |%0*.*u$\n", 5, -7, 12345);
	printf("nati : %%05.-7u\t : |%0*.*u$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.0u\t : |%0*.*u$\n", 10, 0, 12345);
	printf("nati : %%010.0u\t : |%0*.*u$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%010.3u\t : |%0*.*u$\n", 10, 3, 12345);
	printf("nati : %%010.3u\t : |%0*.*u$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%010.5u\t : |%0*.*u$\n", 10, 5, 12345);
	printf("nati : %%010.5u\t : |%0*.*u$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010.7u\t : |%0*.*u$\n", 10, 7, 12345);
	printf("nati : %%010.7u\t : |%0*.*u$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0u\t : |%0*.*u$\n", -5, 0, 12345);
	printf("nati : %%0-5.0u\t : |%0*.*u$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3u\t : |%0*.*u$\n", -5, 3, 12345);
	printf("nati : %%0-5.3u\t : |%0*.*u$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5u\t : |%0*.*u$\n", -5, 5, 12345);
	printf("nati : %%0-5.5u\t : |%0*.*u$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7u\t : |%0*.*u$\n", -5, 7, 12345);
	printf("nati : %%0-5.7u\t : |%0*.*u$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7u\t : |%0*.*u$\n", -5, -7, 12345);
	printf("nati : %%0-5.-7u\t : |%0*.*u$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0u\t : |%0*.*u$\n", -10, 0, 12345);
	printf("nati : %%0-10.0u\t : |%0*.*u$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3u\t : |%0*.*u$\n", -10, 3, 12345);
	printf("nati : %%0-10.3u\t : |%0*.*u$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5u\t : |%0*.*u$\n", -10, 5, 12345);
	printf("nati : %%0-10.5u\t : |%0*.*u$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7u\t : |%0*.*u$\n", -10, 7, 12345);
	printf("nati : %%0-10.7u\t : |%0*.*u$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7u : |%0*.*u$\n", -10, -7, 12345);
	printf("nati : %%0-10.-7u : |%0*.*u$\n", -10, -7, 12345);
	usleep(500);
	printf("--------0--u---negative--------\n");
	ft_printf("my42 : %%0u\t : |%0u$\n", 12345);
	printf("nati : %%0u\t : |%0u$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%00u\t : |%0*u$\n", 0, -12345);
	printf("nati : %%00u\t : |%0*u$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05u\t : |%0*u$\n", 5, -12345);
	printf("nati : %%05u\t : |%0*u$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010u\t : |%0*u$\n", 10, -12345);
	printf("nati : %%010u\t : |%0*u$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5u\t : |%0*u$\n", -5, -12345);
	printf("nati : %%0-5u\t : |%0*u$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10u\t : |%0*u$\n", -10, -12345);
	printf("nati : %%0-10u\t : |%0*u$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0u\t : |%0.*u$\n", 0, -12345);
	printf("nati : %%0.0u\t : |%0.*u$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3u\t : |%0.*u$\n", 3, -12345);
	printf("nati : %%0.3u\t : |%0.*u$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5u\t : |%0.*u$\n", 5, -12345);
	printf("nati : %%0.5u\t : |%0.*u$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7u\t : |%0.*u$\n", 7, -12345);
	printf("nati : %%0.7u\t : |%0.*u$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7u\t : |%0.*u$\n", -7, -12345);
	printf("nati : %%0.-7u\t : |%0.*u$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.0u\t : |%0*.*u$\n", 0, 0, -12345);
	printf("nati : %%00.0u\t : |%0*.*u$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%00.3u\t : |%0*.*u$\n", 0, 3, -12345);
	printf("nati : %%00.3u\t : |%0*.*u$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%00.5u\t : |%0*.*u$\n", 0, 5, -12345);
	printf("nati : %%00.5u\t : |%0*.*u$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%00.7u\t : |%0*.*u$\n", 0, 7, -12345);
	printf("nati : %%00.7u\t : |%0*.*u$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.-7u\t : |%0*.*u$\n", 0, -7, -12345);
	printf("nati : %%00.-7u\t : |%0*.*u$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.0u\t : |%0*.*u$\n", 5, 0, -12345);
	printf("nati : %%05.0u\t : |%0*.*u$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05.3u\t : |%0*.*u$\n", 5, 3, -12345);
	printf("nati : %%05.3u\t : |%0*.*u$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%05.5u\t : |%0*.*u$\n", 5, 5, -12345);
	printf("nati : %%05.5u\t : |%0*.*u$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%05.7u\t : |%0*.*u$\n", 5, 7, -12345);
	printf("nati : %%05.7u\t : |%0*.*u$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.-7u\t : |%0*.*u$\n", 5, -7, -12345);
	printf("nati : %%05.-7u\t : |%0*.*u$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.0u\t : |%0*.*u$\n", 10, 0, -12345);
	printf("nati : %%010.0u\t : |%0*.*u$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%010.3u\t : |%0*.*u$\n", 10, 3, -12345);
	printf("nati : %%010.3u\t : |%0*.*u$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%010.5u\t : |%0*.*u$\n", 10, 5, -12345);
	printf("nati : %%010.5u\t : |%0*.*u$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010.7u\t : |%0*.*u$\n", 10, 7, -12345);
	printf("nati : %%010.7u\t : |%0*.*u$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0u\t : |%0*.*u$\n", -5, 0, -12345);
	printf("nati : %%0-5.0u\t : |%0*.*u$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3u\t : |%0*.*u$\n", -5, 3, -12345);
	printf("nati : %%0-5.3u\t : |%0*.*u$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5u\t : |%0*.*u$\n", -5, 5, -12345);
	printf("nati : %%0-5.5u\t : |%0*.*u$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7u\t : |%0*.*u$\n", -5, 7, -12345);
	printf("nati : %%0-5.7u\t : |%0*.*u$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7u\t : |%0*.*u$\n", -5, -7, -12345);
	printf("nati : %%0-5.-7u\t : |%0*.*u$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0u\t : |%0*.*u$\n", -10, 0, -12345);
	printf("nati : %%0-10.0u\t : |%0*.*u$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3u\t : |%0*.*u$\n", -10, 3, -12345);
	printf("nati : %%0-10.3u\t : |%0*.*u$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5u\t : |%0*.*u$\n", -10, 5, -12345);
	printf("nati : %%0-10.5u\t : |%0*.*u$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7u\t : |%0*.*u$\n", -10, 7, -12345);
	printf("nati : %%0-10.7u\t : |%0*.*u$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7u : |%0*.*u$\n", -10, -7, -12345);
	printf("nati : %%0-10.-7u : |%0*.*u$\n", -10, -7, -12345);
	usleep(500);
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** get-crazy **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	usleep(500);
	a = ft_printf("abc %**.*-u abc %**.*-u$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %**.*-u abc %**.*-u$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %**.*-u abc %**.*-u$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %**.*-u abc %**.*-u$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %0**.*-u abc %0**.*-u$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %0**.*-u abc %0**.*-u$", 1, 10, 0, 12345, 14, 8, 0, 12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %0**.*-u abc %0**.*-u$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %0**.*-u abc %0**.*-u$", 1, 10, 0, -12345, 14, 8, 0, -12345);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);

	return 0;
}
