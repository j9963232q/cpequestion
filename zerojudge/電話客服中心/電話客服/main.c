#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a[9];
	int b[10],i,j,sum;
	while(scanf("%s",&a)!=EOF)
	{
		for(j=65;j<91;j++)
		{
			switch(j)
			{
				case 'A':b[0]=1+9*0;
				break;
				case 'B':b[0]=1+9*1;
				break;
				case 'C':b[0]=1+9*2;
				break;
				case 'D':b[0]=1+9*3;
				break;
				case 'E':b[0]=1+9*4;
				break;
				case 'F':b[0]=1+9*5;
				break;
				case 'G':b[0]=1+9*6;
				break;
				case 'H':b[0]=1+9*7;
				break;
				case 'I':b[0]=3+9*4;
				break;
				case 'J':b[0]=1+9*8;
				break;
				case 'K':b[0]=1+9*9;
				break;
				case 'L':b[0]=2+9*0;
				break;
				case 'M':b[0]=2+9*1;
				break;
				case 'N':b[0]=2+9*2;
				break;
				case 'O':b[0]=3+9*5;
				break;
				case 'P':b[0]=2+9*3;
				break;
				case 'Q':b[0]=2+9*4;
				break;
				case 'R':b[0]=2+9*5;
				break;
				case 'S':b[0]=2+9*6;
				break;
				case 'T':b[0]=2+9*7;
				break;
				case 'U':b[0]=2+9*8;
				break;
				case 'V':b[0]=2+9*9;
				break;
				case 'W':b[0]=3+9*2;
				break;
				case 'X':b[0]=3+9*0;
				break;
				case 'Y':b[0]=3+9*1;
				break;
				case 'Z':b[0]=3+9*3;
				break;
			}
			for(i=1;i<10;i++)
			{
				b[i]=a[i-1]-'0';
				if(i!=9)
				{
					b[i]=b[i]*(9-i);
				}
			}
			sum=0;
			for(i=0;i<10;i++)
			{
				sum+=b[i];
			}
			if(sum%10==0)
			{
				printf("%c",j);
			}
		}
		printf("\n");	
	}
	return 0;
}
