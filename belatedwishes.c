#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	system("clear");
	int i;
	char p[]="Belated Pongal Wishes!!!";
	for(i=0;p[i]!='\0';i++)
	{
		printf("%c",p[i]);
		sleep(1);
	}
	return 0;
}
