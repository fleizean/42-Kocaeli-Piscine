#include <unistd.h>

int main()
{
	char odd = 'a';
	char even = 'B';
	while(even <= 'Z')
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		odd += 2;
		even += 2;
	}
	write(1, "\n", 1);
}
