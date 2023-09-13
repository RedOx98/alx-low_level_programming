#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int _islower(int c)
	{
		    if (c >= 'a' && c <= 'z')
			            return 1; // It's a lowercase character
		        else
				        return 0; // It's not a lowercase character
	}
	int r;
	
	r = _islower('H');
	putchar(r + '0');
	putchar('\n');
	r = _islower('o');
	putchar(r + '0');
	putchar('\n');

	return (0);
}
