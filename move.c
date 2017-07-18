#include<stdio.h>
#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int x,y,ch=1,size=3;
void down(void)
{
	system("clear");
	printf("down function\n");
	sleep(5);
}

int main()
{
	int a;
	for(x=0;x<50;x++)
	{
		fcntl(ch,F_SETFL,O_NONBLOCK);
		ch=getchar();
		switch(ch)
		{
			case '2':
				down();
				break;

		}			

		y=0;
		system("clear");

		for(y=0;y<=x;y++)
			printf(" ");
		for(a=0;a<size;a++)
			printf("*");
			
		fflush(stdout);
		sleep(1);
		

	}
	return 0;

}
