#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,i,h;
    srand(time(NULL));
    a=(rand()%100)+1;
    h=0;
    for(i=0;i<3;i++)
    {
        printf("請輸入一個數字:");
        h++;
        scanf("%d",&b);
        if(a==b)
        {
            printf("Bingo!");
            break;
        }
        if(h==3)printf("正解為%d",a);
    }
    return 0;
}
