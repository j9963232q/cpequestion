#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num,value;
    printf("�n��J�X�ӼƦr?");
    scanf("%d",&num);
    int ary[num];
    printf("�п�J�n�ƦC���Ʀr!\n");
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
    printf("�ƦC��...\n");
    for(i=0;i<num;i++)
    {
        printf("%4d",ary[i]);
    }
    int num2,right,left,t;
    printf("�п�J�n�䪺�@�ӼƦr?");
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
    printf("%d�b��%d��",num2,t+1);
    system("pause");
    return 0;
}
