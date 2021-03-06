#include "../includes/ft_printf.h"

int		main(void)
{
	printf("----------d---positive--------\n");
	ft_printf("my42 : %%d\t : |%d$\n", 12345);
	printf("nati : %%d\t : |%d$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%0d\t : |%*d$\n", 0, 12345);
	printf("nati : %%0d\t : |%*d$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5d\t : |%*d$\n", 5, 12345);
	printf("nati : %%5d\t : |%*d$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10d\t : |%*d$\n", 10, 12345);
	printf("nati : %%10d\t : |%*d$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%-5d\t : |%*d$\n", -5, 12345);
	printf("nati : %%-5d\t : |%*d$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10d\t : |%*d$\n", -10, 12345);
	printf("nati : %%-10d\t : |%*d$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%.0d\t : |%.*d$\n", 0, 12345);
	printf("nati : %%.0d\t : |%.*d$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%.3d\t : |%.*d$\n", 3, 12345);
	printf("nati : %%.3d\t : |%.*d$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%.5d\t : |%.*d$\n", 5, 12345);
	printf("nati : %%.5d\t : |%.*d$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%.7d\t : |%.*d$\n", 7, 12345);
	printf("nati : %%.7d\t : |%.*d$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%.-7d\t : |%.*d$\n", -7, 12345);
	printf("nati : %%.-7d\t : |%.*d$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0d\t : |%*.*d$\n", 0, 0, 12345);
	printf("nati : %%0.0d\t : |%*.*d$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3d\t : |%*.*d$\n", 0, 3, 12345);
	printf("nati : %%0.3d\t : |%*.*d$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5d\t : |%*.*d$\n", 0, 5, 12345);
	printf("nati : %%0.5d\t : |%*.*d$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7d\t : |%*.*d$\n", 0, 7, 12345);
	printf("nati : %%0.7d\t : |%*.*d$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7d\t : |%*.*d$\n", 0, -7, 12345);
	printf("nati : %%0.-7d\t : |%*.*d$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.0d\t : |%*.*d$\n", 5, 0, 12345);
	printf("nati : %%5.0d\t : |%*.*d$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%5.3d\t : |%*.*d$\n", 5, 3, 12345);
	printf("nati : %%5.3d\t : |%*.*d$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%5.5d\t : |%*.*d$\n", 5, 5, 12345);
	printf("nati : %%5.5d\t : |%*.*d$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%5.7d\t : |%*.*d$\n", 5, 7, 12345);
	printf("nati : %%5.7d\t : |%*.*d$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%5.-7d\t : |%*.*d$\n", 5, -7, 12345);
	printf("nati : %%5.-7d\t : |%*.*d$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.0d\t : |%*.*d$\n", 10, 0, 12345);
	printf("nati : %%10.0d\t : |%*.*d$\n", 10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%10.3d\t : |%*.*d$\n", 10, 3, 12345);
	printf("nati : %%10.3d\t : |%*.*d$\n", 10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%10.5d\t : |%*.*d$\n", 10, 5, 12345);
	printf("nati : %%10.5d\t : |%*.*d$\n", 10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%10.7d\t : |%*.*d$\n", 10, 7, 12345);
	printf("nati : %%10.7d\t : |%*.*d$\n", 10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%10.-7d\t : |%*.*d$\n", 10, -7, 12345);
	printf("nati : %%10.-7d\t : |%*.*d$\n", 10, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.0d\t : |%*.*d$\n", -5, 0, 12345);
	printf("nati : %%-5.0d\t : |%*.*d$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.3d\t : |%*.*d$\n", -5, 3, 12345);
	printf("nati : %%-5.3d\t : |%*.*d$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.5d\t : |%*.*d$\n", -5, 5, 12345);
	printf("nati : %%-5.5d\t : |%*.*d$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.7d\t : |%*.*d$\n", -5, 7, 12345);
	printf("nati : %%-5.7d\t : |%*.*d$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7d\t : |%*.*d$\n", -5, -7, 12345);
	printf("nati : %%-5.-7d\t : |%*.*d$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.0d\t : |%*.*d$\n", -10, 0, 12345);
	printf("nati : %%-10.0d\t : |%*.*d$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.3d\t : |%*.*d$\n", -10, 3, 12345);
	printf("nati : %%-10.3d\t : |%*.*d$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.5d\t : |%*.*d$\n", -10, 5, 12345);
	printf("nati : %%-10.5d\t : |%*.*d$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.7d\t : |%*.*d$\n", -10, 7, 12345);
	printf("nati : %%-10.7d\t : |%*.*d$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7d\t : |%*.*d$\n", -10, -7, 12345);
	printf("nati : %%-10.-7d\t : |%*.*d$\n", -10, -7, 12345);
	printf("----------d---negative--------\n");
	usleep(500);
	ft_printf("my42 : %%d\t : |%d$\n", -12345);
	printf("nati : %%d\t : |%d$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%0d\t : |%*d$\n", 0, -12345);
	printf("nati : %%0d\t : |%*d$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5d\t : |%*d$\n", 5, -12345);
	printf("nati : %%5d\t : |%*d$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10d\t : |%*d$\n", 10, -12345);
	printf("nati : %%10d\t : |%*d$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%-5d\t : |%*d$\n", -5, -12345);
	printf("nati : %%-5d\t : |%*d$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10d\t : |%*d$\n", -10, -12345);
	printf("nati : %%-10d\t : |%*d$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%.0d\t : |%.*d$\n", 0, -12345);
	printf("nati : %%.0d\t : |%.*d$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%.3d\t : |%.*d$\n", 3, -12345);
	printf("nati : %%.3d\t : |%.*d$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%.5d\t : |%.*d$\n", 5, -12345);
	printf("nati : %%.5d\t : |%.*d$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%.7d\t : |%.*d$\n", 7, -12345);
	printf("nati : %%.7d\t : |%.*d$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%.-7d\t : |%.*d$\n", -7, -12345);
	printf("nati : %%.-7d\t : |%.*d$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0d\t : |%*.*d$\n", 0, 0, -12345);
	printf("nati : %%0.0d\t : |%*.*d$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3d\t : |%*.*d$\n", 0, 3, -12345);
	printf("nati : %%0.3d\t : |%*.*d$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5d\t : |%*.*d$\n", 0, 5, -12345);
	printf("nati : %%0.5d\t : |%*.*d$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7d\t : |%*.*d$\n", 0, 7, -12345);
	printf("nati : %%0.7d\t : |%*.*d$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7d\t : |%*.*d$\n", 0, -7, -12345);
	printf("nati : %%0.-7d\t : |%*.*d$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.0d\t : |%*.*d$\n", 5, 0, -12345);
	printf("nati : %%5.0d\t : |%*.*d$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%5.3d\t : |%*.*d$\n", 5, 3, -12345);
	printf("nati : %%5.3d\t : |%*.*d$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%5.5d\t : |%*.*d$\n", 5, 5, -12345);
	printf("nati : %%5.5d\t : |%*.*d$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%5.7d\t : |%*.*d$\n", 5, 7, -12345);
	printf("nati : %%5.7d\t : |%*.*d$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%5.-7d\t : |%*.*d$\n", 5, -7, -12345);
	printf("nati : %%5.-7d\t : |%*.*d$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.0d\t : |%*.*d$\n", 10, 0, -12345);
	printf("nati : %%10.0d\t : |%*.*d$\n", 10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%10.3d\t : |%*.*d$\n", 10, 3, -12345);
	printf("nati : %%10.3d\t : |%*.*d$\n", 10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%10.5d\t : |%*.*d$\n", 10, 5, -12345);
	printf("nati : %%10.5d\t : |%*.*d$\n", 10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%10.7d\t : |%*.*d$\n", 10, 7, -12345);
	printf("nati : %%10.7d\t : |%*.*d$\n", 10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%10.-7d\t : |%*.*d$\n", 10, -7, -12345);
	printf("nati : %%10.-7d\t : |%*.*d$\n", 10, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.0d\t : |%*.*d$\n", -5, 0, -12345);
	printf("nati : %%-5.0d\t : |%*.*d$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.3d\t : |%*.*d$\n", -5, 3, -12345);
	printf("nati : %%-5.3d\t : |%*.*d$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.5d\t : |%*.*d$\n", -5, 5, -12345);
	printf("nati : %%-5.5d\t : |%*.*d$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.7d\t : |%*.*d$\n", -5, 7, -12345);
	printf("nati : %%-5.7d\t : |%*.*d$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-5.-7d\t : |%*.*d$\n", -5, -7, -12345);
	printf("nati : %%-5.-7d\t : |%*.*d$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.0d\t : |%*.*d$\n", -10, 0, -12345);
	printf("nati : %%-10.0d\t : |%*.*d$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.3d\t : |%*.*d$\n", -10, 3, -12345);
	printf("nati : %%-10.3d\t : |%*.*d$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.5d\t : |%*.*d$\n", -10, 5, -12345);
	printf("nati : %%-10.5d\t : |%*.*d$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.7d\t : |%*.*d$\n", -10, 7, -12345);
	printf("nati : %%-10.7d\t : |%*.*d$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%-10.-7d  : |%*.*d$\n", -10, -7, -12345);
	printf("nati : %%-10.-7d  : |%*.*d$\n", -10, -7, -12345);
	printf("--------0--d--positive--------\n");
	usleep(500);
	ft_printf("my42 : %%0d\t : |%0d$\n", 12345);
	printf("nati : %%0d\t : |%0d$\n", 12345);
	usleep(500);
	ft_printf("my42 : %%00d\t : |%0*d$\n", 0, 12345);
	printf("nati : %%00d\t : |%0*d$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05d\t : |%0*d$\n", 5, 12345);
	printf("nati : %%05d\t : |%0*d$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010d\t : |%0*d$\n", 10, 12345);
	printf("nati : %%010d\t : |%0*d$\n", 10, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5d\t : |%0*d$\n", -5, 12345);
	printf("nati : %%0-5d\t : |%0*d$\n", -5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10d\t : |%0*d$\n", -10, 12345);
	printf("nati : %%0-10d\t : |%0*d$\n", -10, 12345);
	usleep(500);
	ft_printf("my42 : %%0.0d\t : |%0.*d$\n", 0, 12345);
	printf("nati : %%0.0d\t : |%0.*d$\n", 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0.3d\t : |%0.*d$\n", 3, 12345);
	printf("nati : %%0.3d\t : |%0.*d$\n", 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0.5d\t : |%0.*d$\n", 5, 12345);
	printf("nati : %%0.5d\t : |%0.*d$\n", 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0.7d\t : |%0.*d$\n", 7, 12345);
	printf("nati : %%0.7d\t : |%0.*d$\n", 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0.-7d\t : |%0.*d$\n", -7, 12345);
	printf("nati : %%0.-7d\t : |%0.*d$\n", -7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.0d\t : |%0*.*d$\n", 0, 0, 12345);
	printf("nati : %%00.0d\t : |%0*.*d$\n", 0, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%00.3d\t : |%0*.*d$\n", 0, 3, 12345);
	printf("nati : %%00.3d\t : |%0*.*d$\n", 0, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%00.5d\t : |%0*.*d$\n", 0, 5, 12345);
	printf("nati : %%00.5d\t : |%0*.*d$\n", 0, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%00.7d\t : |%0*.*d$\n", 0, 7, 12345);
	printf("nati : %%00.7d\t : |%0*.*d$\n", 0, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%00.-7d\t : |%0*.*d$\n", 0, -7, 12345);
	printf("nati : %%00.-7d\t : |%0*.*d$\n", 0, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.0d\t : |%0*.*d$\n", 5, 0, 12345);
	printf("nati : %%05.0d\t : |%0*.*d$\n", 5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%05.3d\t : |%0*.*d$\n", 5, 3, 12345);
	printf("nati : %%05.3d\t : |%0*.*d$\n", 5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%05.5d\t : |%0*.*d$\n", 5, 5, 12345);
	printf("nati : %%05.5d\t : |%0*.*d$\n", 5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%05.7d\t : |%0*.*d$\n", 5, 7, 12345);
	printf("nati : %%05.7d\t : |%0*.*d$\n", 5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%05.-7d\t : |%0*.*d$\n", 5, -7, 12345);
	printf("nati : %%05.-7d\t : |%0*.*d$\n", 5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.0d\t : |%0*.*d$\n", 10, 0, 12345);
	printf("nati : %%010.0d\t : |%0*.*d$\n", 10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%010.3d\t : |%0*.*d$\n", 10, 3, 12345);
	printf("nati : %%010.3d\t : |%0*.*d$\n", 10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%010.5d\t : |%0*.*d$\n", 10, 5, 12345);
	printf("nati : %%010.5d\t : |%0*.*d$\n", 10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%010.7d\t : |%0*.*d$\n", 10, 7, 12345);
	printf("nati : %%010.7d\t : |%0*.*d$\n", 10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%010.-7d\t : |%0*.*d$\n", 10, -7, 12345);
	printf("nati : %%010.-7d\t : |%0*.*d$\n", 10, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0d\t : |%0*.*d$\n", -5, 0, 12345);
	printf("nati : %%0-5.0d\t : |%0*.*d$\n", -5, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3d\t : |%0*.*d$\n", -5, 3, 12345);
	printf("nati : %%0-5.3d\t : |%0*.*d$\n", -5, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5d\t : |%0*.*d$\n", -5, 5, 12345);
	printf("nati : %%0-5.5d\t : |%0*.*d$\n", -5, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7d\t : |%0*.*d$\n", -5, 7, 12345);
	printf("nati : %%0-5.7d\t : |%0*.*d$\n", -5, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7d\t : |%0*.*d$\n", -5, -7, 12345);
	printf("nati : %%0-5.-7d\t : |%0*.*d$\n", -5, -7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0d\t : |%0*.*d$\n", -10, 0, 12345);
	printf("nati : %%0-10.0d\t : |%0*.*d$\n", -10, 0, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3d\t : |%0*.*d$\n", -10, 3, 12345);
	printf("nati : %%0-10.3d\t : |%0*.*d$\n", -10, 3, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5d\t : |%0*.*d$\n", -10, 5, 12345);
	printf("nati : %%0-10.5d\t : |%0*.*d$\n", -10, 5, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7d\t : |%0*.*d$\n", -10, 7, 12345);
	printf("nati : %%0-10.7d\t : |%0*.*d$\n", -10, 7, 12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7d : |%0*.*d$\n", -10, -7, 12345);
	printf("nati : %%0-10.-7d : |%0*.*d$\n", -10, -7, 12345);
	printf("--------0--d--negative--------\n");
	usleep(500);
	ft_printf("my42 : %%0d\t : |%0d$\n", -12345);
	printf("nati : %%0d\t : |%0d$\n", -12345);
	usleep(500);
	ft_printf("my42 : %%00d\t : |%0*d$\n", 0, -12345);
	printf("nati : %%00d\t : |%0*d$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05d\t : |%0*d$\n", 5, -12345);
	printf("nati : %%05d\t : |%0*d$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010d\t : |%0*d$\n", 10, -12345);
	printf("nati : %%010d\t : |%0*d$\n", 10, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5d\t : |%0*d$\n", -5, -12345);
	printf("nati : %%0-5d\t : |%0*d$\n", -5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10d\t : |%0*d$\n", -10, -12345);
	printf("nati : %%0-10d\t : |%0*d$\n", -10, -12345);
	usleep(500);
	ft_printf("my42 : %%0.0d\t : |%0.*d$\n", 0, -12345);
	printf("nati : %%0.0d\t : |%0.*d$\n", 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0.3d\t : |%0.*d$\n", 3, -12345);
	printf("nati : %%0.3d\t : |%0.*d$\n", 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0.5d\t : |%0.*d$\n", 5, -12345);
	printf("nati : %%0.5d\t : |%0.*d$\n", 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0.7d\t : |%0.*d$\n", 7, -12345);
	printf("nati : %%0.7d\t : |%0.*d$\n", 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0.-7d\t : |%0.*d$\n", -7, -12345);
	printf("nati : %%0.-7d\t : |%0.*d$\n", -7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.0d\t : |%0*.*d$\n", 0, 0, -12345);
	printf("nati : %%00.0d\t : |%0*.*d$\n", 0, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%00.3d\t : |%0*.*d$\n", 0, 3, -12345);
	printf("nati : %%00.3d\t : |%0*.*d$\n", 0, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%00.5d\t : |%0*.*d$\n", 0, 5, -12345);
	printf("nati : %%00.5d\t : |%0*.*d$\n", 0, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%00.7d\t : |%0*.*d$\n", 0, 7, -12345);
	printf("nati : %%00.7d\t : |%0*.*d$\n", 0, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%00.-7d\t : |%0*.*d$\n", 0, -7, -12345);
	printf("nati : %%00.-7d\t : |%0*.*d$\n", 0, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.0d\t : |%0*.*d$\n", 5, 0, -12345);
	printf("nati : %%05.0d\t : |%0*.*d$\n", 5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%05.3d\t : |%0*.*d$\n", 5, 3, -12345);
	printf("nati : %%05.3d\t : |%0*.*d$\n", 5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%05.5d\t : |%0*.*d$\n", 5, 5, -12345);
	printf("nati : %%05.5d\t : |%0*.*d$\n", 5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%05.7d\t : |%0*.*d$\n", 5, 7, -12345);
	printf("nati : %%05.7d\t : |%0*.*d$\n", 5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%05.-7d\t : |%0*.*d$\n", 5, -7, -12345);
	printf("nati : %%05.-7d\t : |%0*.*d$\n", 5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.0d\t : |%0*.*d$\n", 10, 0, -12345);
	printf("nati : %%010.0d\t : |%0*.*d$\n", 10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%010.3d\t : |%0*.*d$\n", 10, 3, -12345);
	printf("nati : %%010.3d\t : |%0*.*d$\n", 10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%010.5d\t : |%0*.*d$\n", 10, 5, -12345);
	printf("nati : %%010.5d\t : |%0*.*d$\n", 10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%010.7d\t : |%0*.*d$\n", 10, 7, -12345);
	printf("nati : %%010.7d\t : |%0*.*d$\n", 10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%010.-7d\t : |%0*.*d$\n", 10, -7, -12345);
	printf("nati : %%010.-7d\t : |%0*.*d$\n", 10, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.0d\t : |%0*.*d$\n", -5, 0, -12345);
	printf("nati : %%0-5.0d\t : |%0*.*d$\n", -5, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.3d\t : |%0*.*d$\n", -5, 3, -12345);
	printf("nati : %%0-5.3d\t : |%0*.*d$\n", -5, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.5d\t : |%0*.*d$\n", -5, 5, -12345);
	printf("nati : %%0-5.5d\t : |%0*.*d$\n", -5, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.7d\t : |%0*.*d$\n", -5, 7, -12345);
	printf("nati : %%0-5.7d\t : |%0*.*d$\n", -5, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-5.-7d\t : |%0*.*d$\n", -5, -7, -12345);
	printf("nati : %%0-5.-7d\t : |%0*.*d$\n", -5, -7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.0d\t : |%0*.*d$\n", -10, 0, -12345);
	printf("nati : %%0-10.0d\t : |%0*.*d$\n", -10, 0, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.3d\t : |%0*.*d$\n", -10, 3, -12345);
	printf("nati : %%0-10.3d\t : |%0*.*d$\n", -10, 3, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.5d\t : |%0*.*d$\n", -10, 5, -12345);
	printf("nati : %%0-10.5d\t : |%0*.*d$\n", -10, 5, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.7d\t : |%0*.*d$\n", -10, 7, -12345);
	printf("nati : %%0-10.7d\t : |%0*.*d$\n", -10, 7, -12345);
	usleep(500);
	ft_printf("my42 : %%0-10.-7d : |%0*.*d$\n", -10, -7, -12345);
	printf("nati : %%0-10.-7d : |%0*.*d$\n", -10, -7, -12345);

	return 0;
}
