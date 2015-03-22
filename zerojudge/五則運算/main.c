#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int calculate();
int i=0;
int main(int argc, char *argv[]) 
{
	while(scanf("%s",&a)!=EOF)
	{
		
		int calculate(i);
		
		
		
	}
	return 0;
}
int calculate()
{
	l=strlen(a);
	i=0;
	while(i<l)
	{
		switch(a[i])
		{
			case '(':
				{
					b[i]=int calculate();
				}
			break;
			default:
				{
					b[i]=a[i];
					i++;
				}

		}
		i++;
	}
	while(b[i]!=NULL)
	{
		switch(b[i])
		{	
			case '*':
				{
					c[i]=(char)((b[i-1]-'0')*(b[i+1]-'0'));
					i++;
				}
			break;
			case '/':
				{
					c[i]=(char)((b[i-1]-'0')/(b[i+1]-'0'));
					i++;
				}
			break;
			case '%':
				{
					c[i]=(char)((b[i-1]-'0')%(b[i+1]-'0'));
					i++;
				}
			break;
			default:c[i]=b[i];
		}
		i++;
	}
	i=0;
	while(c[i]!=NULL)
	{
		switch(a[i])
		{
			case '+':
				{
					c[i+1]=(char)((c[i-1]-'0')+(c[i+1]-'0'));
					i++;
				}
			break;
			case '-':
				{
					c[i+1]=(char)((c[i-1]-'0')-(c[i+1]-'0'));
					i++;
				}
			break;
			case ')':
				{
					return c[i-1];
				}
			break;
		}
		i++;
	}
	printf("%s")
}

