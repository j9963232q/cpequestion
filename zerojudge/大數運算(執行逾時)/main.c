#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char a[100]={0},b[100]={0},p;
	while(scanf("%s %c %s",&a,&p,&b)!=EOF)
	{
		int c[100]={0},d[100]={0},e[100]={0},h,l,i,j,l1,l2,k,m;
		l=(strlen(a)>strlen(b))?strlen(a):strlen(b);
		for(i=0;i<l;i++)
		{
			d[i]=a[l-i-1]-'0';
			e[i]=b[l-i-1]-'0';
		}
		if(p=='+')
		{
			for(i=0;i<l;i++)
			{
				c[i]+=d[i]+e[i];
				if(c[i]>9)
				{
					c[i]=c[i]-10;
					c[i+1]=1;
				}
			}
			h=0;
			for(i=l+2;i>-1;i--)
			{
				if(c[i]!=0||h>0)
				{
					printf("%d",c[i]);
					h=1;
				}
			}
		}
		else if(p=='-')
		{
			for(i=l-1;i>-1;i--)
			{
				c[i]+=d[i]-e[i];
				if(c[i]<0)
				{
					for(j=i;j<l;j++)
					{
						if(c[j]!=0)
						{
							while(j!=i)
							{
								c[j]-=1;
								c[j-1]+=10;
								j--;
							}
							break;
						}
					}
				}
			}
			h=0;
			for(i=l-1;i>-1;i--)
			{
				if(c[i]!=0||h==1)
				{
					printf("%d",c[i]);
					h=1;
				}
			}
		}
		else if(p=='*')
		{
			for(i=0;i<l;i++)
			{
				for(j=0;j<l;j++)
				{
					c[j+i]+=d[i]*e[j];
					if(c[j+i]>9)
					{
						c[j+1+i]+=c[j+i]/10;
						c[j+i]=c[j+i]%10;
					}
				}
			}
			h=0;
			for(i=99;i>-1;i--)
			{
				if(c[i]!=0||h==1)
				{
					printf("%d",c[i]);
					h=1;
				}
			}
		}
		else
		{
			l1=strlen(a);
			l2=strlen(b);
			for(i=0;i<l1;i++)
			{
				d[i]=a[l1-1-i]-'0';
			}
			for(i=0;i<l2;i++)
			{
				e[i]=b[l2-1-i]-'0';
			}
			for(i=l2;i<l1;i++)
			{
				h=0;
				while(d[h]==0)
				{
					h++;
				}
				for(j=h;j<i;j++)
				{
					if(d[j]<e[j])
					{
						h++;
						while(d[i-l2]!=0)
						{
							for(k=h;k<l2+h;k++)
							{
								d[k]+=d[k]-e[k-1];
								if(d[k]<0)
								{
									for(m=0;m<k;m++)
									{
										if(d[m]!=0)
										{
											while(m!=k)
											{
												d[m]-=1;
												d[m+1]+=10;
												m++;
											}
											break;
										}
									}
								}
							}
							c[i-l2]+=1;
						}
						break;
					}
				}
				while(d[i-l2]!=0)
				{
					for(k=h;k<l2+h;k++)
					{
						d[k]+=d[k]-e[k-1];
						if(d[k]<0)
						{
							for(m=0;m<k;m++)
							{
								if(d[m]!=0)
								{
									while(m!=k)
									{
										d[m]-=1;
										d[m+1]+=10;
										m++;
									}
									break;
								}
							}
						}
					}
					c[i-l2]+=1;
				}
			}
			h=0;
			for(i=0;i<l1;i++)
			{
				if(c[i]!=0||h==1)
				{
					printf("%d",c[i]);
					h=1;
				}
			}
		}
		printf("\n");
	}
	return 0;
}
