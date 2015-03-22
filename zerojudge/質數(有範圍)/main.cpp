#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,y,j,i,g;
    while(cin>>x>>y)
    {
                    if(x>y)swap(x,y);
                    j=0;
                    if(x%2==0&&x!=2)
                    {
                    for(i=x+1;i<=y;i+=2)
                    {
                                     if(i==1)
                                     {j++;}
                                     else if(i==2||i==3)
                                     {continue;}
                                     else
                                     {
                                         for(g=2;g<=sqrt(i);g++)
                                     {
                                                      if(i%g==0)
                                                      {
                                                                j++;
                                                                break;
                                                                }
                                                                }
                                                      }
                                                      }
                                                      }
                    else
                    {
                                            for(i=x;i<=y;i+=2)
                    {
                                     if(i==1)
                                     {j++;}
                                     else if(i==2||i==3)
                                     {continue;}
                                     else
                                     {
                                         for(g=2;g<=sqrt(i);g++)
                                     {
                                                      if(i%g==0)
                                                      {
                                                                j++;
                                                                break;
                                                                }
                                                                }
                                                      }
                                                      }
                        }
                                                      cout<<y-x+1-j<<endl;
                    }
    return 0;
}
