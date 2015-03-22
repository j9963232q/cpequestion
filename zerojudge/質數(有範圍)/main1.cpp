#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y,i,k,j;
    int s[100000000];
    while(cin>>x>>y)
    {
                    s[2]=2;
                    for(i=3;i<=100000000;i++)
                    {
                                             k=0;
                                             for(j=2;j<sqrt(i);j++)
                                             {
                                                      if(i%j==0)
                                                      {
                                                                k++;
                                                                break;       
                                                                }
                                                                }
                                             if(k==0)s[i]=i;
                                             
                                                             }
                                             k=0;
                    for(i=3;i<=100000000;i++)
                    {
                                             if(s[i]>x&&s[i]<y)k++;
                                             }
                                             cout<<k<<endl;
                    }
    return 0;
}
