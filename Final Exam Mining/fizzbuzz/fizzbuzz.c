#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int num)
{
	if(num > 9)
	{
		ft_putnbr(num / 10);
		ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar(num + '0');
	}
}
int main()
{
	int num = 1;
	while(num <= 100)
	{
		if(num % 3 == 0 && num % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if(num % 3 == 0)
			write(1, "fizz", 4);
		else if(num % 5 == 0)
			write(1, "buzz", 4);
		else
		{
			ft_putnbr(num);
		}
		write(1, "\n", 1);
		num++;
	}
}
