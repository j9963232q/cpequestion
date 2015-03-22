#include <cstdlib>
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
    int a,i,k;
    
    while(cin>>a)
    {
                 k=log2(a);
                 int g[k+1];

                 for(i=0;i<k+1;i++)
                 {
                           g[i]=a%2;
                           a=a/2;
                           }
                 for(i=k;i>-1;i--)cout<<g[i];
                 cout<<""<<endl;
                 
                 }
    return 0;
}
