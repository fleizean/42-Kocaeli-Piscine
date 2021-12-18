#include <unistd.h>

int main()
{
	char a = '9';
	while(a >= '0')
	{
		write(1, &a, 1);
		a--;
	}
	write(1, "\n", 1);
}
