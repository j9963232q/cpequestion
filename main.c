#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char str[100000];
	int row,l,i,j,k;
	char sign;
	while(gets(str)!= 0)
	{
		printf("str:%s\n",str);
		fflush(stdin);
		scanf("%c",&sign);
		fflush(stdin);
		scanf("%d",&row);
		l=strlen(str);
		k=l/row;
		for(i=0;i<row;i++)
		{
			for(j=(k-1)*row+i;j>=i;j-=row)
			{
				printf("%c",str[j]);
				if(j!=i)
				{
					printf("%c",sign);
				}
			}
			printf("\n");
		}
		printf("PASS!\n");
	}
	return 0;
}
