#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		while(a!=0)
		{
			int b,c;
			scanf("%d %d",&b,&c);
			
			int d[b+2][c+2],i,j;
			for(i=0;i<b+2;i++)
			{
				for(j=0;j<c+2;j++)
				{
					if(i!=0&&j!=0&&i!=b+1&&j!=c+1)
					{
						scanf("%d",&d[i][j]);
					}
					else
					{
						d[i][j]=0;
					}
				}
			}
			
			for(i=1;i<b+1;i++)
			{
				for(j=1;j<c+1;j++)
				{
					if((i==1&&j==1)||(i==b&&j==1))
					{
						if(d[i-1][j]+d[i+1][j]+d[i][j+1]+d[i][j]==3||d[i][j]==0)
						{
							printf("_ ");
						}
						else
						{
							printf("0 ");
						}
					}
					else if((i==1&&j==c)||(i==b&&j==c))
					{
						if(d[i+1][j]+d[i-1][j]+d[i][j-1]+d[i][j]==3||d[i][j]==0)
						{
							printf("_");
						}
						else
						{
							printf("0");
						}
					}
					else if(i!=1&&j!=1&&i!=b&&j!=c)
					{
						if(d[i-1][j]+d[i+1][j]+d[i][j+1]+d[i][j-1]+d[i][j]==5||d[i][j]==0)
						{
							printf("_ ");
						}
						else
						{
							printf("0 ");
						}
					}
					else
					{
						if(d[i-1][j]+d[i+1][j]+d[i][j+1]+d[i][j-1]+d[i][j]==4||d[i][j]==0)
						{
							if(j!=c)
							{
								printf("_ ");
							}
							else
							{
								printf("_");	
							}
						}
						else
						{
							if(j!=c)
							{
								printf("0 ");
							}
							else
							{
								printf("0");	
							}
						}
					}
				}
				printf("\n");
			}
			printf("\n");
			a--;
		}
	}
	return 0;
}

