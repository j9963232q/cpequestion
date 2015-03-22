#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    long long int n,p,i,g;
    while(cin>>n)
    {
                 p=1;
                 g=1;
                for(i=1;i<n;i++)
                      {
                       p=i+1+p;
                       g=g+p;
                        } 
                        cout<<p<<" "<<g<<endl;
                 }
    return 0;
}
