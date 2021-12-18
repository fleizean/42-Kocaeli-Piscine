#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int s = 1;
	int result = 0;
	while(str[i] != '\0')
	{
		while((str[i] == ' ') || (str[i] >= '\r' && str[i] <= '\t'))
		{
			i++;
		}
		if(str[i] == '+' || str[i] == '-')
		{
			if(str[i] == '-')
			{
				s = -1;
			}
			i++;
		}
		while(str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			result = (str[i] - '0') + (result * 10);
			i++;
		}
		break;
	}
	return (result * s);
}
int main()
{
	char t[] = "  +13asd3";
	printf("$%d$",ft_atoi(t));
}
