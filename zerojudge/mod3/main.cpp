#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int x,a,w,e,k,i;
    while(cin>>x)
    {
                 k=0;
                 w=0;
                 e=0;
                 for(i=0;i<x;i++)
                 {
                 cin>>a;
                 if(a%3==0)
                 {
                           w++;
                           }
                           else if(a%3==1)
                           {
                                e++;
                                }
                                else
                                {
                                    k++;
                                    }
                                    }
                                    cout<<w<<" "<<e<<" "<<k<<endl;
                                    
                 }
    return 0;
}
