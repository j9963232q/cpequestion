#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int space(int );
int main(int argc, char *argv[]) 
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		int k;
		k=space(a);
		printf("%d\n",k);
	}
	return 0;
}
int space(int a)
{
	if(a==1)
	{
		return 2;
	}
	else
	{
		return space(a-1)+1+(a-1)*a/2;
	}
}
