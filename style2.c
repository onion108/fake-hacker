#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

int main(int argc,char * argv[])
{
	srand((unsigned int)time(NULL));
	int j;
	printf("\033[01;32m");
	for(;;)
	{
		for(j = 0;j < 80;j++)
		{
			putchar(rand() % 'Z' + ' ');
		}
		sleep(0.001);
	}
	printf("\033[00m");
	return 0;
}
