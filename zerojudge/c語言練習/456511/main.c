#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define len 300

void input(char n[])
{
    char a[len];
    int l,i;
    l=strlen(n);
    for(i=l;i<len;i++)
    n[i]=0;
    for(i=0;i<l/2;i++)
    n[l-i]=n[i];
    for(i=0;i<len;i++)
    a[i]=n[i]-'0';
    return a;
}

void add(char b[],char c[],char d[])
{
    int i;
    for(i=0;i<len;i++)
    d[i]=b[i]+c[i];
    for(i=0;i<len;i++)
    {
        d[i]=d[i]%10;
        d[i+1]=d[i]/10;
    }
    printf("%c",d);
}


void main()
{
    int i;
    char d[len];
    char s[len],f[len],c[len];
    scanf("%c",s);
    scanf("%c",f);
    for(i=0;i<len;i++)
    c[i]=0;
    input(s);
    input(f);
    add(s,f,c);
}
