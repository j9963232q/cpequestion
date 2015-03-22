#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
	char a[100],c[100];
	int b[100],d[100],e[4],i,l1,l2;
	while(scanf("%s",&a)!=EOF)
	{
		if(a[0]=='#') break;
		scanf("%s",&c);
		l1=strlen(a);
		l2=strlen(c);
		for(i=0;i<l1;i++)
		{
			switch(a[i])
			{
				case 'I':b[i]=1;
					break;
				case 'V':b[i]=5;
					break;
				case 'X':b[i]=10;
					break;
				case 'L':b[i]=50;
					break;
				case 'C':b[i]=100;
					break;
				case 'D':b[i]=500;
					break;
				default:b[i]=1000;
			}	
		}
		for(i=0;i<l2;i++)
		{
			switch(c[i])
			{
				case 'I':d[i]=1;
					break;
				case 'V':d[i]=5;
					break;
				case 'X':d[i]=10;
					break;
				case 'L':d[i]=50;
					break;
				case 'C':d[i]=100;
					break;
				case 'D':d[i]=500;
					break;
				default:d[i]=1000;
			}	
		}
		int sum1=0,sum2=0;
		d[l2]=0;
		b[l1]=0;
		for(i=0;i<l2;i++)
		{
			if(d[i]>=d[i+1])
			{
				sum1=sum1+d[i];
			}
			
			else
			{
				sum1=sum1-d[i];
			}  
		}
		for(i=0;i<l1;i++)
		{
			if(b[i]>=b[i+1])
			{
				sum2=sum2+b[i];
			}
			
			else
			{
				sum2=sum2-b[i];
			}    
		}
		int result;
		result=(sum1>=sum2)?(sum1-sum2):(sum2-sum1);
		if(result==0)
		{
			printf("ZERO\n");
		}
		else
		{
			e[0]=result/1000;
			result=result%1000;
			e[1]=result/100;
			result=result%100;
			e[2]=result/10;
			e[3]=result%10;
			for(i=0;i<e[0];i++)
			{
				printf("M");
			}
			if(e[1]<=3)
			{
				for(i=0;i<e[1];i++)
				{
					printf("C");
				}
			}
			else if(e[1]==4)
			{
				printf("CD");
			}
			else if(e[1]>=5&&e[1]<9)
			{
				printf("D");
				for(i=0;i<e[1]-5;i++)
				{
					printf("C");
				}
			}
			else
			{
				printf("CM");	
			}
			if(e[2]<=3)
			{
				for(i=0;i<e[2];i++)
				{
					printf("X");
				}
			}
			else if(e[2]==4)
			{
				printf("XL");
			}
			else if(e[2]>=5&&e[2]<9)
			{
				printf("L");
				for(i=0;i<e[2]-5;i++)
				{
					printf("X");
				}
			}
			else
			{
				printf("XC");	
			}
			if(e[3]<=3)
			{
				for(i=0;i<e[3];i++)
				{
					printf("I");
				}
			}
			else if(e[3]==4)
			{
				printf("IV");
			}
			else if(e[3]>=5&&e[3]<9)
			{
				printf("V");
				for(i=0;i<e[3]-5;i++)
				{
					printf("I");
				}
			}
			else
			{
				printf("IX");	
			}
			printf("\n");	
		}
		
		
	}

	return 0;
}

