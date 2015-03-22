#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    if(a%b==0)printf("Yes!");
    else printf("No!");
    return 0;
}
