#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int n,m,sum,k,p;
    while(cin>>n>>m)
    {
                    k=1;
                    sum=n;
                    p=n+1;
                    while(sum<=m)
                    {
                          sum+=p;
                          p++;
                          k++;      
                                }
                                cout<<k<<endl;
                    }
    return 0;
}
