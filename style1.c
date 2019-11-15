#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int main(int argc,char * argv[])
{
	printf("Hacker Web Scan,1.0.0\n");
	printf("What website you want to scan?");
	char buf[1024];
	gets(buf);
	if(strcmp(buf,"199.0.12.22"))
	{
		printf("Please input 199.0.12.22 when you use it next!\n");
		return 0;
	}
	printf("Scan %s . . .","199.0.12.22");
	sleep(12);
	putchar('\n');
	printf("***************************\n");
	printf("Getting password . . . \n");
	int i;
	for(i = 0;i < 10;i++)
	{
		putchar('#');
		sleep(rand() % 10);
	}
	putchar('\n');
	printf("ERROR from 199.0.12.22 : User isn't `root'");
	printf("\nWaiting . . .");
	srand((unsigned int)time(NULL));
	char c = '\0';
	int j = 0;
	for(i = 0;i < 20;i++)
	{
		for(j = 0;j < 80;i++)
		{
			c = rand() % 'Z' + ' ';
			putchar(c);
		}
		putchar('\n');
	}
	printf("Password is : \n");
	srand((unsigned int)getpid());
	for(i = 0;i < 12;i++)
	{
		c = rand() % 'Z' + ' ';
		putchar(c);
	}
	putchar('\n');
	printf("\n\nScan . . .\n");
	printf("Get data in 199.0.12.22 . . .");
	sleep(1);
	printf("Got root.");
	sleep(3);
	printf("\n All file download done.\n");
	return 0;
}
