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
    for(i=2;i<=p;i++)  //若不先令p=x/2,讓 i是<=p的話,會有問題
                       //ex:直接i<=x/2,之後while裡面的x=x/i會讓x的值產生改變
                       //當重新回到for時, i<=x/2的x會變成 x=x/i的x                 
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
