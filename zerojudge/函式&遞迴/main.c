#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sum(int,int);
int main(int argc, char *argv[])
{
	int a,b;
	printf("以下為計算An=2*An-1 +1 的條件下\n");
	printf("A1~An的總和\n");
	printf("請輸入A1:");
	scanf("%d",&a);
	printf("再輸入一個數字:(n)");
	scanf("%d",&b);
	printf("sum=%d",sum(a,b)+a);
	system("pause");
	return 0;
}
int sum(int a,int b)
{
	int k;

	if(b!=1)
	{
		k=2*a+1;
		return (sum(k,b-1)+k);
	}


	else
	{
		return 0;
	}
}

