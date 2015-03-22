#include <stdio.h>
#include <string.h>
int R15(char u[])
{
    int i,n=0;
    for(i=0;i<strlen(u);i++)n=n*15+u[i]-'0';
    return n;
}

int P15(int k)
{
    int j=0,i,p[10];
    while(k>0)
    {
        p[j]=k%15;
        k=k/15;
        j++;
    }
    for(i=j-1;i>=0;i--)printf("%d",p[i]);
}

void main()
{
    char s[10],e[10];
    scanf("%s %s",s,e);
    a=R15(s);
    b=R15(e);
    P15(a+b);
}
