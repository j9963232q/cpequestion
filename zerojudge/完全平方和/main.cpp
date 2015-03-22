#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int x,a,b,i,k,sum;
    while(cin>>x)
    {
                       for(k=0;k<x;k++)
                       {
                                         cin>>a>>b;
                                         sum=0;
                       for(i=1;i<=sqrt(b);i++)
                       {
                       sum+=pow(i,2);
                       }
                       for(i=1;i<sqrt(a);i++)
                       {
                       sum-=pow(i,2);
                       }

                       cout<<"Case"<<" "<<k+1<<":"<<" "<<sum<<endl;


                                         }
                       


                 } 
    return 0;
}
