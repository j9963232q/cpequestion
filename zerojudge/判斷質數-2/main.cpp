#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int x,i,j,k,l;
    int a[2147483647];
    while(cin>>x)
    {
                 l=strlen(x);
                 a[0]=2;
                 
                 for(i=3;i<=2147483647;i+=3)
                 {
                                            k=0;                
                                           for(j=2;j<i;j++)
                                           {
                                            if(i%j==0)
                                            {
                                               k++;
                                               break;       
                                                      }  
                                                           }
                                            if(k==0)a[i]=i;
                                            }
                 k=0;
                 if(x==2)
                 {
                 cout<<"yes"<<endl;
                 k++;
                                   }
                 else
                 {
                 for(i=3;i<=l;i+=3)
                 {
                  if(x==a[i])
                  {
                         cout<<"yes"<<endl;
                         break;
                         k++;
                                           }    
                                            }
                  if(k==0)cout<<"no"<<endl;
                 }
    return 0;
}
