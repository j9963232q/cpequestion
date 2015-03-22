#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gcd(int ,int );
int main(int argc, char *argv[]) 
{

	int a,b,c,k;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		if(a>b)
		{
			c=a;
			a=b;
			b=c;
		}
		k=gcd(a,b);
		printf("%d\n",k);
	}
	return 0;
}
int gcd(int a,int b)
{
	if(a!=0)
	{
		return gcd(b%a,a);
	}
	else
	{
		return b;
	}
}
