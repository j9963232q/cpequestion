#include <cstdlib>
#include <iostream>
#include<math.h>

using namespace std;

int main()
{
int i,j,k,x,y,p;
    while(cin>>x)
    {
    k=0;  
    p=x/2;       
    for(i=2;i<=p;i++)  //�Y�����Op=x/2,�� i�O<=p����,�|�����D
                       //ex:����i<=x/2,����while�̭���x=x/i�|��x���Ȳ��ͧ���
                       //���s�^��for��, i<=x/2��x�|�ܦ� x=x/i��x                 
    {
        if(x%i==0)
        {
               k++;
               j=0;                      
               if(k>1)
               {
                cout<<" * ";
               }
               while(x%i==0)
               {
                  x=x/i;
                  j++;
                  y=j;
               }
               if(y>1)
               {
               cout<<i<<"^"<<y;
               }
               if(y==1)
               {
               cout<<i;
               }
        }
     }
     if(k==0)
     {
                         cout<<x<<endl;
     }
     else
     {
         cout<<""<<endl;
     }
    }
         return 0;
}
