#include "../includes/ft_printf.h"

int		main(void)
{
	printf("--------------%%--------------\n");
	ft_printf("my42 : %%%%\t : |%%$\n");
	printf("nati : %%%%\t : |%%$\n");
	usleep(500);
	ft_printf("my42 : %%0%%\t : |%*%$\n", 0);
	printf("nati : %%0%%\t : |%*%$\n", 0);
	usleep(500);
	ft_printf("my42 : %%5%%\t : |%*%$\n", 5);
	printf("nati : %%5%%\t : |%*%$\n", 5);
	usleep(500);
	ft_printf("my42 : %%10%%\t : |%*%$\n", 10);
	printf("nati : %%10%%\t : |%*%$\n", 10);
	usleep(500);
	ft_printf("my42 : %%-5%%\t : |%*%$\n", -5);
	printf("nati : %%-5%%\t : |%*%$\n", -5);
	usleep(500);
	ft_printf("my42 : %%-10%%\t : |%*%$\n", -10);
	printf("nati : %%-10%%\t : |%*%$\n", -10);
	usleep(500);
	ft_printf("my42 : %%.0%%\t : |%.*%$\n", 0);
	printf("nati : %%.0%%\t : |%.*%$\n", 0);
	usleep(500);
	ft_printf("my42 : %%.3%%\t : |%.*%$\n", 3);
	printf("nati : %%.3%%\t : |%.*%$\n", 3);
	usleep(500);
	ft_printf("my42 : %%.5%%\t : |%.*%$\n", 5);
	printf("nati : %%.5%%\t : |%.*%$\n", 5);
	usleep(500);
	ft_printf("my42 : %%.7%%\t : |%.*%$\n", 7);
	printf("nati : %%.7%%\t : |%.*%$\n", 7);
	usleep(500);
	ft_printf("my42 : %%.-7%%\t : |%.*%$\n", -7);
	printf("nati : %%.-7%%\t : |%.*%$\n", -7);
	usleep(500);
	ft_printf("my42 : %%0.0%%\t : |%*.*%$\n", 0, 0);
	printf("nati : %%0.0%%\t : |%*.*%$\n", 0, 0);
	usleep(500);
	ft_printf("my42 : %%0.3%%\t : |%*.*%$\n", 0, 3);
	printf("nati : %%0.3%%\t : |%*.*%$\n", 0, 3);
	usleep(500);
	ft_printf("my42 : %%0.5%%\t : |%*.*%$\n", 0, 5);
	printf("nati : %%0.5%%\t : |%*.*%$\n", 0, 5);
	usleep(500);
	ft_printf("my42 : %%0.7%%\t : |%*.*%$\n", 0, 7);
	printf("nati : %%0.7%%\t : |%*.*%$\n", 0, 7);
	usleep(500);
	ft_printf("my42 : %%0.-7%%\t : |%*.*%$\n", 0, -7);
	printf("nati : %%0.-7%%\t : |%*.*%$\n", 0, -7);
	usleep(500);
	ft_printf("my42 : %%5.0%%\t : |%*.*%$\n", 5, 0);
	printf("nati : %%5.0%%\t : |%*.*%$\n", 5, 0);
	usleep(500);
	ft_printf("my42 : %%5.3%%\t : |%*.*%$\n", 5, 3);
	printf("nati : %%5.3%%\t : |%*.*%$\n", 5, 3);
	usleep(500);
	ft_printf("my42 : %%5.5%%\t : |%*.*%$\n", 5, 5);
	printf("nati : %%5.5%%\t : |%*.*%$\n", 5, 5);
	usleep(500);
	ft_printf("my42 : %%5.7%%\t : |%*.*%$\n", 5, 7);
	printf("nati : %%5.7%%\t : |%*.*%$\n", 5, 7);
	usleep(500);
	ft_printf("my42 : %%5.-7%%\t : |%*.*%$\n", 5, -7);
	printf("nati : %%5.-7%%\t : |%*.*%$\n", 5, -7);
	usleep(500);
	ft_printf("my42 : %%10.0%%\t : |%*.*%$\n", 10, 0);
	printf("nati : %%10.0%%\t : |%*.*%$\n", 10, 0);
	usleep(500);
	ft_printf("my42 : %%10.3%%\t : |%*.*%$\n", 10, 3);
	printf("nati : %%10.3%%\t : |%*.*%$\n", 10, 3);
	usleep(500);
	ft_printf("my42 : %%10.5%%\t : |%*.*%$\n", 10, 5);
	printf("nati : %%10.5%%\t : |%*.*%$\n", 10, 5);
	usleep(500);
	ft_printf("my42 : %%10.7%%\t : |%*.*%$\n", 10, 7);
	printf("nati : %%10.7%%\t : |%*.*%$\n", 10, 7);
	usleep(500);
	ft_printf("my42 : %%10.-7%%\t : |%*.*%$\n", 10, -7);
	printf("nati : %%10.-7%%\t : |%*.*%$\n", 10, -7);
	usleep(500);
	ft_printf("my42 : %%-5.0%%\t : |%*.*%$\n", -5, 0);
	printf("nati : %%-5.0%%\t : |%*.*%$\n", -5, 0);
	usleep(500);
	ft_printf("my42 : %%-5.3%%\t : |%*.*%$\n", -5, 3);
	printf("nati : %%-5.3%%\t : |%*.*%$\n", -5, 3);
	usleep(500);
	ft_printf("my42 : %%-5.5%%\t : |%*.*%$\n", -5, 5);
	printf("nati : %%-5.5%%\t : |%*.*%$\n", -5, 5);
	usleep(500);
	ft_printf("my42 : %%-5.7%%\t : |%*.*%$\n", -5, 7);
	printf("nati : %%-5.7%%\t : |%*.*%$\n", -5, 7);
	usleep(500);
	ft_printf("my42 : %%-5.-7%%\t : |%*.*%$\n", -5, -7);
	printf("nati : %%-5.-7%%\t : |%*.*%$\n", -5, -7);
	usleep(500);
	ft_printf("my42 : %%-10.0%%\t : |%*.*%$\n", -10, 0);
	printf("nati : %%-10.0%%\t : |%*.*%$\n", -10, 0);
	usleep(500);
	ft_printf("my42 : %%-10.3%%\t : |%*.*%$\n", -10, 3);
	printf("nati : %%-10.3%%\t : |%*.*%$\n", -10, 3);
	usleep(500);
	ft_printf("my42 : %%-10.5%%\t : |%*.*%$\n", -10, 5);
	printf("nati : %%-10.5%%\t : |%*.*%$\n", -10, 5);
	usleep(500);
	ft_printf("my42 : %%-10.7%%\t : |%*.*%$\n", -10, 7);
	printf("nati : %%-10.7%%\t : |%*.*%$\n", -10, 7);
	usleep(500);
	ft_printf("my42 : %%-10.-7%%\t : |%*.*%$\n", -10, -7);
	printf("nati : %%-10.-7%%\t : |%*.*%$\n", -10, -7);
	printf("-------------0--%%-------------\n");
	usleep(500);
	ft_printf("my42 : %%0%%\t : |%0%$\n");
	printf("nati : %%0%%\t : |%0%$\n");
	usleep(500);
	ft_printf("my42 : %%00%%\t : |%0*%$\n", 0);
	printf("nati : %%00%%\t : |%0*%$\n", 0);
	usleep(500);
	ft_printf("my42 : %%05%%\t : |%0*%$\n", 5);
	printf("nati : %%05%%\t : |%0*%$\n", 5);
	usleep(500);
	ft_printf("my42 : %%010%%\t : |%0*%$\n", 10);
	printf("nati : %%010%%\t : |%0*%$\n", 10);
	usleep(500);
	ft_printf("my42 : %%0-5%%\t : |%0*%$\n", -5);
	printf("nati : %%0-5%%\t : |%0*%$\n", -5);
	usleep(500);
	ft_printf("my42 : %%0-10%%\t : |%0*%$\n", -10);
	printf("nati : %%0-10%%\t : |%0*%$\n", -10);
	usleep(500);
	ft_printf("my42 : %%0.0%%\t : |%0.*%$\n", 0);
	printf("nati : %%0.0%%\t : |%0.*%$\n", 0);
	usleep(500);
	ft_printf("my42 : %%0.3%%\t : |%0.*%$\n", 3);
	printf("nati : %%0.3%%\t : |%0.*%$\n", 3);
	usleep(500);
	ft_printf("my42 : %%0.5%%\t : |%0.*%$\n", 5);
	printf("nati : %%0.5%%\t : |%0.*%$\n", 5);
	usleep(500);
	ft_printf("my42 : %%0.7%%\t : |%0.*%$\n", 7);
	printf("nati : %%0.7%%\t : |%0.*%$\n", 7);
	usleep(500);
	ft_printf("my42 : %%0.-7%%\t : |%0.*%$\n", -7);
	printf("nati : %%0.-7%%\t : |%0.*%$\n", -7);
	usleep(500);
	ft_printf("my42 : %%00.0%%\t : |%0*.*%$\n", 0, 0);
	printf("nati : %%00.0%%\t : |%0*.*%$\n", 0, 0);
	usleep(500);
	ft_printf("my42 : %%00.3%%\t : |%0*.*%$\n", 0, 3);
	printf("nati : %%00.3%%\t : |%0*.*%$\n", 0, 3);
	usleep(500);
	ft_printf("my42 : %%00.5%%\t : |%0*.*%$\n", 0, 5);
	printf("nati : %%00.5%%\t : |%0*.*%$\n", 0, 5);
	usleep(500);
	ft_printf("my42 : %%00.7%%\t : |%0*.*%$\n", 0, 7);
	printf("nati : %%00.7%%\t : |%0*.*%$\n", 0, 7);
	usleep(500);
	ft_printf("my42 : %%00.-7%%\t : |%0*.*%$\n", 0, -7);
	printf("nati : %%00.-7%%\t : |%0*.*%$\n", 0, -7);
	usleep(500);
	ft_printf("my42 : %%05.0%%\t : |%0*.*%$\n", 5, 0);
	printf("nati : %%05.0%%\t : |%0*.*%$\n", 5, 0);
	usleep(500);
	ft_printf("my42 : %%05.3%%\t : |%0*.*%$\n", 5, 3);
	printf("nati : %%05.3%%\t : |%0*.*%$\n", 5, 3);
	usleep(500);
	ft_printf("my42 : %%05.5%%\t : |%0*.*%$\n", 5, 5);
	printf("nati : %%05.5%%\t : |%0*.*%$\n", 5, 5);
	usleep(500);
	ft_printf("my42 : %%05.7%%\t : |%0*.*%$\n", 5, 7);
	printf("nati : %%05.7%%\t : |%0*.*%$\n", 5, 7);
	usleep(500);
	ft_printf("my42 : %%05.-7%%\t : |%0*.*%$\n", 5, -7);
	printf("nati : %%05.-7%%\t : |%0*.*%$\n", 5, -7);
	usleep(500);
	ft_printf("my42 : %%010.0%%\t : |%0*.*%$\n", 10, 0);
	printf("nati : %%010.0%%\t : |%0*.*%$\n", 10, 0);
	usleep(500);
	ft_printf("my42 : %%010.3%%\t : |%0*.*%$\n", 10, 3);
	printf("nati : %%010.3%%\t : |%0*.*%$\n", 10, 3);
	usleep(500);
	ft_printf("my42 : %%010.5%%\t : |%0*.*%$\n", 10, 5);
	printf("nati : %%010.5%%\t : |%0*.*%$\n", 10, 5);
	usleep(500);
	ft_printf("my42 : %%010.7%%\t : |%0*.*%$\n", 10, 7);
	printf("nati : %%010.7%%\t : |%0*.*%$\n", 10, 7);
	usleep(500);
	ft_printf("my42 : %%010.-7%%\t : |%0*.*%$\n", 10, -7);
	printf("nati : %%010.-7%%\t : |%0*.*%$\n", 10, -7);
	usleep(500);
	ft_printf("my42 : %%0-5.0%%\t : |%0*.*%$\n", -5, 0);
	printf("nati : %%0-5.0%%\t : |%0*.*%$\n", -5, 0);
	usleep(500);
	ft_printf("my42 : %%0-5.3%%\t : |%0*.*%$\n", -5, 3);
	printf("nati : %%0-5.3%%\t : |%0*.*%$\n", -5, 3);
	usleep(500);
	ft_printf("my42 : %%0-5.5%%\t : |%0*.*%$\n", -5, 5);
	printf("nati : %%0-5.5%%\t : |%0*.*%$\n", -5, 5);
	usleep(500);
	ft_printf("my42 : %%0-5.7%%\t : |%0*.*%$\n", -5, 7);
	printf("nati : %%0-5.7%%\t : |%0*.*%$\n", -5, 7);
	usleep(500);
	ft_printf("my42 : %%0-5.-7%%\t : |%0*.*%$\n", -5, -7);
	printf("nati : %%0-5.-7%%\t : |%0*.*%$\n", -5, -7);
	usleep(500);
	ft_printf("my42 : %%0-10.0%%\t : |%0*.*%$\n", -10, 0);
	printf("nati : %%0-10.0%%\t : |%0*.*%$\n", -10, 0);
	usleep(500);
	ft_printf("my42 : %%0-10.3%%\t : |%0*.*%$\n", -10, 3);
	printf("nati : %%0-10.3%%\t : |%0*.*%$\n", -10, 3);
	usleep(500);
	ft_printf("my42 : %%0-10.5%%\t : |%0*.*%$\n", -10, 5);
	printf("nati : %%0-10.5%%\t : |%0*.*%$\n", -10, 5);
	usleep(500);
	ft_printf("my42 : %%0-10.7%%\t : |%0*.*%$\n", -10, 7);
	printf("nati : %%0-10.7%%\t : |%0*.*%$\n", -10, 7);
	usleep(500);
	ft_printf("my42 : %%0-10.-7%%: |%0*.*%$\n", -10, -7);
	printf("nati : %%0-10.-7%%: |%0*.*%$\n", -10, -7);
	printf("--------0--%%--negative--------\n");
	usleep(500);
	ft_printf("my42 : %%0%%\t : |%0%$\n");
	printf("nati : %%0%%\t : |%0%$\n");
	usleep(500);
	ft_printf("my42 : %%00%%\t : |%0*%$\n", 0);
	printf("nati : %%00%%\t : |%0*%$\n", 0);
	usleep(500);
	ft_printf("my42 : %%05%%\t : |%0*%$\n", 5);
	printf("nati : %%05%%\t : |%0*%$\n", 5);
	usleep(500);
	ft_printf("my42 : %%010%%\t : |%0*%$\n", 10);
	printf("nati : %%010%%\t : |%0*%$\n", 10);
	usleep(500);
	ft_printf("my42 : %%0-5%%\t : |%0*%$\n", -5);
	printf("nati : %%0-5%%\t : |%0*%$\n", -5);
	usleep(500);
	ft_printf("my42 : %%0-10%%\t : |%0*%$\n", -10);
	printf("nati : %%0-10%%\t : |%0*%$\n", -10);
	usleep(500);
	ft_printf("my42 : %%0.0%%\t : |%0.*%$\n", 0);
	printf("nati : %%0.0%%\t : |%0.*%$\n", 0);
	usleep(500);
	ft_printf("my42 : %%0.3%%\t : |%0.*%$\n", 3);
	printf("nati : %%0.3%%\t : |%0.*%$\n", 3);
	usleep(500);
	ft_printf("my42 : %%0.5%%\t : |%0.*%$\n", 5);
	printf("nati : %%0.5%%\t : |%0.*%$\n", 5);
	usleep(500);
	ft_printf("my42 : %%0.7%%\t : |%0.*%$\n", 7);
	printf("nati : %%0.7%%\t : |%0.*%$\n", 7);
	usleep(500);
	ft_printf("my42 : %%0.-7%%\t : |%0.*%$\n", -7);
	printf("nati : %%0.-7%%\t : |%0.*%$\n", -7);
	usleep(500);
	ft_printf("my42 : %%00.0%%\t : |%0*.*%$\n", 0, 0);
	printf("nati : %%00.0%%\t : |%0*.*%$\n", 0, 0);
	usleep(500);
	ft_printf("my42 : %%00.3%%\t : |%0*.*%$\n", 0, 3);
	printf("nati : %%00.3%%\t : |%0*.*%$\n", 0, 3);
	usleep(500);
	ft_printf("my42 : %%00.5%%\t : |%0*.*%$\n", 0, 5);
	printf("nati : %%00.5%%\t : |%0*.*%$\n", 0, 5);
	usleep(500);
	ft_printf("my42 : %%00.7%%\t : |%0*.*%$\n", 0, 7);
	printf("nati : %%00.7%%\t : |%0*.*%$\n", 0, 7);
	usleep(500);
	ft_printf("my42 : %%00.-7%%\t : |%0*.*%$\n", 0, -7);
	printf("nati : %%00.-7%%\t : |%0*.*%$\n", 0, -7);
	usleep(500);
	ft_printf("my42 : %%05.0%%\t : |%0*.*%$\n", 5, 0);
	printf("nati : %%05.0%%\t : |%0*.*%$\n", 5, 0);
	usleep(500);
	ft_printf("my42 : %%05.3%%\t : |%0*.*%$\n", 5, 3);
	printf("nati : %%05.3%%\t : |%0*.*%$\n", 5, 3);
	usleep(500);
	ft_printf("my42 : %%05.5%%\t : |%0*.*%$\n", 5, 5);
	printf("nati : %%05.5%%\t : |%0*.*%$\n", 5, 5);
	usleep(500);
	ft_printf("my42 : %%05.7%%\t : |%0*.*%$\n", 5, 7);
	printf("nati : %%05.7%%\t : |%0*.*%$\n", 5, 7);
	usleep(500);
	ft_printf("my42 : %%05.-7%%\t : |%0*.*%$\n", 5, -7);
	printf("nati : %%05.-7%%\t : |%0*.*%$\n", 5, -7);
	usleep(500);
	ft_printf("my42 : %%010.0%%\t : |%0*.*%$\n", 10, 0);
	printf("nati : %%010.0%%\t : |%0*.*%$\n", 10, 0);
	usleep(500);
	ft_printf("my42 : %%010.3%%\t : |%0*.*%$\n", 10, 3);
	printf("nati : %%010.3%%\t : |%0*.*%$\n", 10, 3);
	usleep(500);
	ft_printf("my42 : %%010.5%%\t : |%0*.*%$\n", 10, 5);
	printf("nati : %%010.5%%\t : |%0*.*%$\n", 10, 5);
	usleep(500);
	ft_printf("my42 : %%010.7%%\t : |%0*.*%$\n", 10, 7);
	printf("nati : %%010.7%%\t : |%0*.*%$\n", 10, 7);
	usleep(500);
	ft_printf("my42 : %%010.-7%%\t : |%0*.*%$\n", 10, -7);
	printf("nati : %%010.-7%%\t : |%0*.*%$\n", 10, -7);
	usleep(500);
	ft_printf("my42 : %%0-5.0%%\t : |%0*.*%$\n", -5, 0);
	printf("nati : %%0-5.0%%\t : |%0*.*%$\n", -5, 0);
	usleep(500);
	ft_printf("my42 : %%0-5.3%%\t : |%0*.*%$\n", -5, 3);
	printf("nati : %%0-5.3%%\t : |%0*.*%$\n", -5, 3);
	usleep(500);
	ft_printf("my42 : %%0-5.5%%\t : |%0*.*%$\n", -5, 5);
	printf("nati : %%0-5.5%%\t : |%0*.*%$\n", -5, 5);
	usleep(500);
	ft_printf("my42 : %%0-5.7%%\t : |%0*.*%$\n", -5, 7);
	printf("nati : %%0-5.7%%\t : |%0*.*%$\n", -5, 7);
	usleep(500);
	ft_printf("my42 : %%0-5.-7%%\t : |%0*.*%$\n", -5, -7);
	printf("nati : %%0-5.-7%%\t : |%0*.*%$\n", -5, -7);
	usleep(500);
	ft_printf("my42 : %%0-10.0%%\t : |%0*.*%$\n", -10, 0);
	printf("nati : %%0-10.0%%\t : |%0*.*%$\n", -10, 0);
	usleep(500);
	ft_printf("my42 : %%0-10.3%%\t : |%0*.*%$\n", -10, 3);
	printf("nati : %%0-10.3%%\t : |%0*.*%$\n", -10, 3);
	usleep(500);
	ft_printf("my42 : %%0-10.5%%\t : |%0*.*%$\n", -10, 5);
	printf("nati : %%0-10.5%%\t : |%0*.*%$\n", -10, 5);
	usleep(500);
	ft_printf("my42 : %%0-10.7%%\t : |%0*.*%$\n", -10, 7);
	printf("nati : %%0-10.7%%\t : |%0*.*%$\n", -10, 7);
	usleep(500);
	ft_printf("my42 : %%0-10.-7%%: |%0*.*%$\n", -10, -7);
	printf("nati : %%0-10.-7%%: |%0*.*%$\n", -10, -7);
	
	return 0;
}
