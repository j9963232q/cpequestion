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
        printf("�п�J�@�ӼƦr:");
        h++;
        scanf("%d",&b);
        if(a==b)
        {
            printf("Bingo!");
            break;
        }
        if(h==3)printf("���Ѭ�%d",a);
    }
    return 0;
}
