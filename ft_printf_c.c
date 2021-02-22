#include "../includes/ft_printf.h"

int		ft_printf(const char *str, ...);
int		main(void)
{
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

	return 0;
}
