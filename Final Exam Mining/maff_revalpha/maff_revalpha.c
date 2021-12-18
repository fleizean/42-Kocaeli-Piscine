#include <unistd.h>

int main()
{
	char odd = 'z';
	char even = 'Y';
	while(even >= 'A')
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		odd -= 2;
		even -= 2;
	}
	write(1, "\n", 1);
}
