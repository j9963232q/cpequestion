#include <stdio.h>
#include <string.h>
int R7(char s[])
{
 int n=0, i;
 for(i=0; i<strlen(s); i++)
   n=n*7+s[i]-'0';
 return n;
}
void P7(int n)
{
 int p[10], i, j=0;
 while(n>0) {
   p[j]=n%7;
   n/=7;
   j++;
 }
 for(i=j-1; i>=0; i--)
   printf("%d", p[i]);
}
void main()
{
 char s1[10], s2[10];
 int a, b;
 scanf("%s %s", s1, s2);
 a=R7(s1);
 b=R7(s2);
 P7(a+b);
}
