#include "../ft_printf.h"

int		main(void)
{
	int a;
	int *b;
	int	nbcmy42;
	int nbcnati;

	a = 1;
	b = &a;

	printf("----------rother---positive--------\n");
	ft_printf("my42 : %%rother\t : |%rother$\n");
	printf("nati : %%rother\t : |%rother$\n");
	usleep(500);
	ft_printf("my42 : %%0rother\t : |%*rother$\n", 0);
	printf("nati : %%0rother\t : |%*rother$\n", 0);
	usleep(500);
	ft_printf("my42 : %%5rother\t : |%*rother$\n", 5);
	printf("nati : %%5rother\t : |%*rother$\n", 5);
	usleep(500);
	ft_printf("my42 : %%10rother\t : |%*rother$\n", 10);
	printf("nati : %%10rother\t : |%*rother$\n", 10);
	usleep(500);
	ft_printf("my42 : %%-5rother\t : |%*rother$\n", -5);
	printf("nati : %%-5rother\t : |%*rother$\n", -5);
	usleep(500);
	ft_printf("my42 : %%-10rother\t : |%*rother$\n", -10);
	printf("nati : %%-10rother\t : |%*rother$\n", -10);
	usleep(500);
	ft_printf("my42 : %%.0rother\t : |%.*rother$\n", 0);
	printf("nati : %%.0rother\t : |%.*rother$\n", 0);
	usleep(500);
	ft_printf("my42 : %%.3rother\t : |%.*rother$\n", 3);
	printf("nati : %%.3rother\t : |%.*rother$\n", 3);
	usleep(500);
	ft_printf("my42 : %%.5rother\t : |%.*rother$\n", 5);
	printf("nati : %%.5rother\t : |%.*rother$\n", 5);
	usleep(500);
	ft_printf("my42 : %%.7rother\t : |%.*rother$\n", 7);
	printf("nati : %%.7rother\t : |%.*rother$\n", 7);
	usleep(500);
	ft_printf("my42 : %%.-7rother\t : |%.*rother$\n", -7);
	printf("nati : %%.-7rother\t : |%.*rother$\n", -7);
	usleep(500);
	ft_printf("my42 : %%0.0rother\t : |%*.*rother$\n", 0, 0);
	printf("nati : %%0.0rother\t : |%*.*rother$\n", 0, 0);
	usleep(500);
	ft_printf("my42 : %%0.3rother\t : |%*.*rother$\n", 0, 3);
	printf("nati : %%0.3rother\t : |%*.*rother$\n", 0, 3);
	usleep(500);
	ft_printf("my42 : %%0.5rother\t : |%*.*rother$\n", 0, 5);
	printf("nati : %%0.5rother\t : |%*.*rother$\n", 0, 5);
	usleep(500);
	ft_printf("my42 : %%0.7rother\t : |%*.*rother$\n", 0, 7);
	printf("nati : %%0.7rother\t : |%*.*rother$\n", 0, 7);
	usleep(500);
	ft_printf("my42 : %%0.-7rother\t : |%*.*rother$\n", 0, -7);
	printf("nati : %%0.-7rother\t : |%*.*rother$\n", 0, -7);
	usleep(500);
	ft_printf("my42 : %%5.0rother\t : |%*.*rother$\n", 5, 0);
	printf("nati : %%5.0rother\t : |%*.*rother$\n", 5, 0);
	usleep(500);
	ft_printf("my42 : %%5.3rother\t : |%*.*rother$\n", 5, 3);
	printf("nati : %%5.3rother\t : |%*.*rother$\n", 5, 3);
	usleep(500);
	ft_printf("my42 : %%5.5rother\t : |%*.*rother$\n", 5, 5);
	printf("nati : %%5.5rother\t : |%*.*rother$\n", 5, 5);
	usleep(500);
	ft_printf("my42 : %%5.7rother\t : |%*.*rother$\n", 5, 7);
	printf("nati : %%5.7rother\t : |%*.*rother$\n", 5, 7);
	usleep(500);
	ft_printf("my42 : %%5.-7rother\t : |%*.*rother$\n", 5, -7);
	printf("nati : %%5.-7rother\t : |%*.*rother$\n", 5, -7);
	usleep(500);
	ft_printf("my42 : %%10.0rother\t : |%*.*rother$\n", 10, 0);
	printf("nati : %%10.0rother\t : |%*.*rother$\n", 10, 0);
	usleep(500);
	ft_printf("my42 : %%10.3rother\t : |%*.*rother$\n", 10, 3);
	printf("nati : %%10.3rother\t : |%*.*rother$\n", 10, 3);
	usleep(500);
	ft_printf("my42 : %%10.5rother\t : |%*.*rother$\n", 10, 5);
	printf("nati : %%10.5rother\t : |%*.*rother$\n", 10, 5);
	usleep(500);
	ft_printf("my42 : %%10.7rother\t : |%*.*rother$\n", 10, 7);
	printf("nati : %%10.7rother\t : |%*.*rother$\n", 10, 7);
	usleep(500);
	ft_printf("my42 : %%10.-7rother\t : |%*.*rother$\n", 10, -7);
	printf("nati : %%10.-7rother\t : |%*.*rother$\n", 10, -7);
	usleep(500);
	ft_printf("my42 : %%-5.0rother\t : |%*.*rother$\n", -5, 0);
	printf("nati : %%-5.0rother\t : |%*.*rother$\n", -5, 0);
	usleep(500);
	ft_printf("my42 : %%-5.3rother\t : |%*.*rother$\n", -5, 3);
	printf("nati : %%-5.3rother\t : |%*.*rother$\n", -5, 3);
	usleep(500);
	ft_printf("my42 : %%-5.5rother\t : |%*.*rother$\n", -5, 5);
	printf("nati : %%-5.5rother\t : |%*.*rother$\n", -5, 5);
	usleep(500);
	ft_printf("my42 : %%-5.7rother\t : |%*.*rother$\n", -5, 7);
	printf("nati : %%-5.7rother\t : |%*.*rother$\n", -5, 7);
	usleep(500);
	ft_printf("my42 : %%-5.-7rother\t : |%*.*rother$\n", -5, -7);
	printf("nati : %%-5.-7rother\t : |%*.*rother$\n", -5, -7);
	usleep(500);
	ft_printf("my42 : %%-10.0rother\t : |%*.*rother$\n", -10, 0);
	printf("nati : %%-10.0rother\t : |%*.*rother$\n", -10, 0);
	usleep(500);
	ft_printf("my42 : %%-10.3rother\t : |%*.*rother$\n", -10, 3);
	printf("nati : %%-10.3rother\t : |%*.*rother$\n", -10, 3);
	usleep(500);
	ft_printf("my42 : %%-10.5rother\t : |%*.*rother$\n", -10, 5);
	printf("nati : %%-10.5rother\t : |%*.*rother$\n", -10, 5);
	usleep(500);
	ft_printf("my42 : %%-10.7rother\t : |%*.*rother$\n", -10, 7);
	printf("nati : %%-10.7rother\t : |%*.*rother$\n", -10, 7);
	usleep(500);
	ft_printf("my42 : %%-10.-7rother\t : |%*.*rother$\n", -10, -7);
	printf("nati : %%-10.-7rother\t : |%*.*rother$\n", -10, -7);
	printf("----------rother---negative--------\n");
	usleep(500);
	ft_printf("my42 : %%rother\t : |%rother$\n");
	printf("nati : %%rother\t : |%rother$\n");
	usleep(500);
	ft_printf("my42 : %%0rother\t : |%*rother$\n", 0);
	printf("nati : %%0rother\t : |%*rother$\n", 0);
	usleep(500);
	ft_printf("my42 : %%5rother\t : |%*rother$\n", 5);
	printf("nati : %%5rother\t : |%*rother$\n", 5);
	usleep(500);
	ft_printf("my42 : %%10rother\t : |%*rother$\n", 10);
	printf("nati : %%10rother\t : |%*rother$\n", 10);
	usleep(500);
	ft_printf("my42 : %%-5rother\t : |%*rother$\n", -5);
	printf("nati : %%-5rother\t : |%*rother$\n", -5);
	usleep(500);
	ft_printf("my42 : %%-10rother\t : |%*rother$\n", -10);
	printf("nati : %%-10rother\t : |%*rother$\n", -10);
	usleep(500);
	ft_printf("my42 : %%.0rother\t : |%.*rother$\n", 0);
	printf("nati : %%.0rother\t : |%.*rother$\n", 0);
	usleep(500);
	ft_printf("my42 : %%.3rother\t : |%.*rother$\n", 3);
	printf("nati : %%.3rother\t : |%.*rother$\n", 3);
	usleep(500);
	ft_printf("my42 : %%.5rother\t : |%.*rother$\n", 5);
	printf("nati : %%.5rother\t : |%.*rother$\n", 5);
	usleep(500);
	ft_printf("my42 : %%.7rother\t : |%.*rother$\n", 7);
	printf("nati : %%.7rother\t : |%.*rother$\n", 7);
	usleep(500);
	ft_printf("my42 : %%.-7rother\t : |%.*rother$\n", -7);
	printf("nati : %%.-7rother\t : |%.*rother$\n", -7);
	usleep(500);
	ft_printf("my42 : %%0.0rother\t : |%*.*rother$\n", 0, 0);
	printf("nati : %%0.0rother\t : |%*.*rother$\n", 0, 0);
	usleep(500);
	ft_printf("my42 : %%0.3rother\t : |%*.*rother$\n", 0, 3);
	printf("nati : %%0.3rother\t : |%*.*rother$\n", 0, 3);
	usleep(500);
	ft_printf("my42 : %%0.5rother\t : |%*.*rother$\n", 0, 5);
	printf("nati : %%0.5rother\t : |%*.*rother$\n", 0, 5);
	usleep(500);
	ft_printf("my42 : %%0.7rother\t : |%*.*rother$\n", 0, 7);
	printf("nati : %%0.7rother\t : |%*.*rother$\n", 0, 7);
	usleep(500);
	ft_printf("my42 : %%0.-7rother\t : |%*.*rother$\n", 0, -7);
	printf("nati : %%0.-7rother\t : |%*.*rother$\n", 0, -7);
	usleep(500);
	ft_printf("my42 : %%5.0rother\t : |%*.*rother$\n", 5, 0);
	printf("nati : %%5.0rother\t : |%*.*rother$\n", 5, 0);
	usleep(500);
	ft_printf("my42 : %%5.3rother\t : |%*.*rother$\n", 5, 3);
	printf("nati : %%5.3rother\t : |%*.*rother$\n", 5, 3);
	usleep(500);
	ft_printf("my42 : %%5.5rother\t : |%*.*rother$\n", 5, 5);
	printf("nati : %%5.5rother\t : |%*.*rother$\n", 5, 5);
	usleep(500);
	ft_printf("my42 : %%5.7rother\t : |%*.*rother$\n", 5, 7);
	printf("nati : %%5.7rother\t : |%*.*rother$\n", 5, 7);
	usleep(500);
	ft_printf("my42 : %%5.-7rother\t : |%*.*rother$\n", 5, -7);
	printf("nati : %%5.-7rother\t : |%*.*rother$\n", 5, -7);
	usleep(500);
	ft_printf("my42 : %%10.0rother\t : |%*.*rother$\n", 10, 0);
	printf("nati : %%10.0rother\t : |%*.*rother$\n", 10, 0);
	usleep(500);
	ft_printf("my42 : %%10.3rother\t : |%*.*rother$\n", 10, 3);
	printf("nati : %%10.3rother\t : |%*.*rother$\n", 10, 3);
	usleep(500);
	ft_printf("my42 : %%10.5rother\t : |%*.*rother$\n", 10, 5);
	printf("nati : %%10.5rother\t : |%*.*rother$\n", 10, 5);
	usleep(500);
	ft_printf("my42 : %%10.7rother\t : |%*.*rother$\n", 10, 7);
	printf("nati : %%10.7rother\t : |%*.*rother$\n", 10, 7);
	usleep(500);
	ft_printf("my42 : %%10.-7rother\t : |%*.*rother$\n", 10, -7);
	printf("nati : %%10.-7rother\t : |%*.*rother$\n", 10, -7);
	usleep(500);
	ft_printf("my42 : %%-5.0rother\t : |%*.*rother$\n", -5, 0);
	printf("nati : %%-5.0rother\t : |%*.*rother$\n", -5, 0);
	usleep(500);
	ft_printf("my42 : %%-5.3rother\t : |%*.*rother$\n", -5, 3);
	printf("nati : %%-5.3rother\t : |%*.*rother$\n", -5, 3);
	usleep(500);
	ft_printf("my42 : %%-5.5rother\t : |%*.*rother$\n", -5, 5);
	printf("nati : %%-5.5rother\t : |%*.*rother$\n", -5, 5);
	usleep(500);
	ft_printf("my42 : %%-5.7rother\t : |%*.*rother$\n", -5, 7);
	printf("nati : %%-5.7rother\t : |%*.*rother$\n", -5, 7);
	usleep(500);
	ft_printf("my42 : %%-5.-7rother\t : |%*.*rother$\n", -5, -7);
	printf("nati : %%-5.-7rother\t : |%*.*rother$\n", -5, -7);
	usleep(500);
	ft_printf("my42 : %%-10.0rother\t : |%*.*rother$\n", -10, 0);
	printf("nati : %%-10.0rother\t : |%*.*rother$\n", -10, 0);
	usleep(500);
	ft_printf("my42 : %%-10.3rother\t : |%*.*rother$\n", -10, 3);
	printf("nati : %%-10.3rother\t : |%*.*rother$\n", -10, 3);
	usleep(500);
	ft_printf("my42 : %%-10.5rother\t : |%*.*rother$\n", -10, 5);
	printf("nati : %%-10.5rother\t : |%*.*rother$\n", -10, 5);
	usleep(500);
	ft_printf("my42 : %%-10.7rother\t : |%*.*rother$\n", -10, 7);
	printf("nati : %%-10.7rother\t : |%*.*rother$\n", -10, 7);
	usleep(500);
	ft_printf("my42 : %%-10.-7rother  : |%*.*rother$\n", -10, -7);
	printf("nati : %%-10.-7rother  : |%*.*rother$\n", -10, -7);
	printf("--------0--rother--positive--------\n");
	usleep(500);
	ft_printf("my42 : %%0rother\t : |%0rother$\n");
	printf("nati : %%0rother\t : |%0rother$\n");
	usleep(500);
	ft_printf("my42 : %%00rother\t : |%0*rother$\n", 0);
	printf("nati : %%00rother\t : |%0*rother$\n", 0);
	usleep(500);
	ft_printf("my42 : %%05rother\t : |%0*rother$\n", 5);
	printf("nati : %%05rother\t : |%0*rother$\n", 5);
	usleep(500);
	ft_printf("my42 : %%010rother\t : |%0*rother$\n", 10);
	printf("nati : %%010rother\t : |%0*rother$\n", 10);
	usleep(500);
	ft_printf("my42 : %%0-5rother\t : |%0*rother$\n", -5);
	printf("nati : %%0-5rother\t : |%0*rother$\n", -5);
	usleep(500);
	ft_printf("my42 : %%0-10rother\t : |%0*rother$\n", -10);
	printf("nati : %%0-10rother\t : |%0*rother$\n", -10);
	usleep(500);
	ft_printf("my42 : %%0.0rother\t : |%0.*rother$\n", 0);
	printf("nati : %%0.0rother\t : |%0.*rother$\n", 0);
	usleep(500);
	ft_printf("my42 : %%0.3rother\t : |%0.*rother$\n", 3);
	printf("nati : %%0.3rother\t : |%0.*rother$\n", 3);
	usleep(500);
	ft_printf("my42 : %%0.5rother\t : |%0.*rother$\n", 5);
	printf("nati : %%0.5rother\t : |%0.*rother$\n", 5);
	usleep(500);
	ft_printf("my42 : %%0.7rother\t : |%0.*rother$\n", 7);
	printf("nati : %%0.7rother\t : |%0.*rother$\n", 7);
	usleep(500);
	ft_printf("my42 : %%0.-7rother\t : |%0.*rother$\n", -7);
	printf("nati : %%0.-7rother\t : |%0.*rother$\n", -7);
	usleep(500);
	ft_printf("my42 : %%00.0rother\t : |%0*.*rother$\n", 0, 0);
	printf("nati : %%00.0rother\t : |%0*.*rother$\n", 0, 0);
	usleep(500);
	ft_printf("my42 : %%00.3rother\t : |%0*.*rother$\n", 0, 3);
	printf("nati : %%00.3rother\t : |%0*.*rother$\n", 0, 3);
	usleep(500);
	ft_printf("my42 : %%00.5rother\t : |%0*.*rother$\n", 0, 5);
	printf("nati : %%00.5rother\t : |%0*.*rother$\n", 0, 5);
	usleep(500);
	ft_printf("my42 : %%00.7rother\t : |%0*.*rother$\n", 0, 7);
	printf("nati : %%00.7rother\t : |%0*.*rother$\n", 0, 7);
	usleep(500);
	ft_printf("my42 : %%00.-7rother\t : |%0*.*rother$\n", 0, -7);
	printf("nati : %%00.-7rother\t : |%0*.*rother$\n", 0, -7);
	usleep(500);
	ft_printf("my42 : %%05.0rother\t : |%0*.*rother$\n", 5, 0);
	printf("nati : %%05.0rother\t : |%0*.*rother$\n", 5, 0);
	usleep(500);
	ft_printf("my42 : %%05.3rother\t : |%0*.*rother$\n", 5, 3);
	printf("nati : %%05.3rother\t : |%0*.*rother$\n", 5, 3);
	usleep(500);
	ft_printf("my42 : %%05.5rother\t : |%0*.*rother$\n", 5, 5);
	printf("nati : %%05.5rother\t : |%0*.*rother$\n", 5, 5);
	usleep(500);
	ft_printf("my42 : %%05.7rother\t : |%0*.*rother$\n", 5, 7);
	printf("nati : %%05.7rother\t : |%0*.*rother$\n", 5, 7);
	usleep(500);
	ft_printf("my42 : %%05.-7rother\t : |%0*.*rother$\n", 5, -7);
	printf("nati : %%05.-7rother\t : |%0*.*rother$\n", 5, -7);
	usleep(500);
	ft_printf("my42 : %%010.0rother\t : |%0*.*rother$\n", 10, 0);
	printf("nati : %%010.0rother\t : |%0*.*rother$\n", 10, 0);
	usleep(500);
	ft_printf("my42 : %%010.3rother\t : |%0*.*rother$\n", 10, 3);
	printf("nati : %%010.3rother\t : |%0*.*rother$\n", 10, 3);
	usleep(500);
	ft_printf("my42 : %%010.5rother\t : |%0*.*rother$\n", 10, 5);
	printf("nati : %%010.5rother\t : |%0*.*rother$\n", 10, 5);
	usleep(500);
	ft_printf("my42 : %%010.7rother\t : |%0*.*rother$\n", 10, 7);
	printf("nati : %%010.7rother\t : |%0*.*rother$\n", 10, 7);
	usleep(500);
	ft_printf("my42 : %%010.-7rother\t : |%0*.*rother$\n", 10, -7);
	printf("nati : %%010.-7rother\t : |%0*.*rother$\n", 10, -7);
	usleep(500);
	ft_printf("my42 : %%0-5.0rother\t : |%0*.*rother$\n", -5, 0);
	printf("nati : %%0-5.0rother\t : |%0*.*rother$\n", -5, 0);
	usleep(500);
	ft_printf("my42 : %%0-5.3rother\t : |%0*.*rother$\n", -5, 3);
	printf("nati : %%0-5.3rother\t : |%0*.*rother$\n", -5, 3);
	usleep(500);
	ft_printf("my42 : %%0-5.5rother\t : |%0*.*rother$\n", -5, 5);
	printf("nati : %%0-5.5rother\t : |%0*.*rother$\n", -5, 5);
	usleep(500);
	ft_printf("my42 : %%0-5.7rother\t : |%0*.*rother$\n", -5, 7);
	printf("nati : %%0-5.7rother\t : |%0*.*rother$\n", -5, 7);
	usleep(500);
	ft_printf("my42 : %%0-5.-7rother\t : |%0*.*rother$\n", -5, -7);
	printf("nati : %%0-5.-7rother\t : |%0*.*rother$\n", -5, -7);
	usleep(500);
	ft_printf("my42 : %%0-10.0rother\t : |%0*.*rother$\n", -10, 0);
	printf("nati : %%0-10.0rother\t : |%0*.*rother$\n", -10, 0);
	usleep(500);
	ft_printf("my42 : %%0-10.3rother\t : |%0*.*rother$\n", -10, 3);
	printf("nati : %%0-10.3rother\t : |%0*.*rother$\n", -10, 3);
	usleep(500);
	ft_printf("my42 : %%0-10.5rother\t : |%0*.*rother$\n", -10, 5);
	printf("nati : %%0-10.5rother\t : |%0*.*rother$\n", -10, 5);
	usleep(500);
	ft_printf("my42 : %%0-10.7rother\t : |%0*.*rother$\n", -10, 7);
	printf("nati : %%0-10.7rother\t : |%0*.*rother$\n", -10, 7);
	usleep(500);
	ft_printf("my42 : %%0-10.-7rother : |%0*.*rother$\n", -10, -7);
	printf("nati : %%0-10.-7rother : |%0*.*rother$\n", -10, -7);
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** get-crazy **** **** **** **** **** **** **** **** **** \n");
	printf("**** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** **** \n");
	usleep(500);
	a = ft_printf("abc %**.*-rother abc %**.*-rother$", 1, 10, 0, 14, 8, 0);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %**.*-rother abc %**.*-rother$", 1, 10, 0, 14, 8, 0);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);
	a = ft_printf("abc %0**.*-rother abc %0**.*-rother$", 1, 10, 0, 14, 8, 0);
	printf("\n");
	printf("my42 return : %i\n", a);
	usleep(500);
	a = printf("abc %0**.*-rother abc %0**.*-rother$", 1, 10, 0, 14, 8, 0);
	printf("\n");
	printf("nati return : %i\n", a);
	usleep(500);

	return 0;
}
