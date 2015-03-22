#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num,value;
    printf("要輸入幾個數字?");
    scanf("%d",&num);
    int ary[num];
    printf("請輸入要排列的數字!\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&ary[i]);
    }
    for(i=1;i<num;i++)
    {
        j=i;
        value=ary[j];
        while(j>0&&ary[j]<ary[j-1])
        {
            ary[j]=ary[j-1];
            ary[j-1]=value;
            j=j-1;

        }
    }
    printf("排列後...\n");
    for(i=0;i<num;i++)
    {
        printf("%4d",ary[i]);
    }
    int num2,right,left,t;
    printf("請輸入要找的一個數字?");
    scanf("%d",&num2);
    right=num;
    left=1;
    for(i=0;i<num/2;i++)
    {
        t=(right+left)/2;
        if(num2==ary[t])
        {
            break;
        }
        else if(num2>ary[t])
        {
            left=t+1;
        }
        else
        {
            right=t-1;
        }
    }
    printf("%d在第%d項",num2,t+1);
    system("pause");
    return 0;
}
