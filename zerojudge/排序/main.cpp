#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int k,i,x,s[1000];
    while(cin>>x)
    {
                 for(k=0;k<x;k++)cin>>s[k];

                 for(k=0;k<x;k++)
                 {
                 for(i=1+k;i<x;i++)
                 {
                 if(s[k]>s[i])swap(s[k],s[i]);
                 }
                 }
                 for(k=0;k<x;k++)
                 {
                                 if(k==x-1)
                                 {
                                  cout<<s[k]<<endl;
                                 break;
                                 }
                                 else
                                 {
                                     cout<<s[k]<<" ";
                                     }
                 }
                 }
    return 0;
}
