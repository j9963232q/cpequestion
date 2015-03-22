#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int a,b,i,h,e,f;
    srand(time(NULL));
    a=(rand()%100)+1;
    h=0;
    e=1;
    f=100;
    for(i=0;i<5;i++)
    {
        h++;
        printf("還有%d次機會,請輸入一個數字(%d=>%d):",6-h,e,f);
        scanf("%d",&b);
        if(a==b)
        {
            printf("bingle");
            break;
        }
        if(a>b)e=b;
        if(a<b)f=b;
        if(b==0)
        {
            printf("Game Over");
            break;
        }
        if(h==5)printf("正解為:%d",a);
    }
}
