#include <stdio.h>
#include <conio.h>

void bar(char c, int count);

int main()
{
	int x;

	for (x = 1; x < 11; x++)
		bar('*', x * 2);


	_getch();
	return(0);
}

void bar(char c, int count)
{
	int x;

	for (x = 0; x < count; x++)
		putchar(c);
	putchar('\n');
}