#include <iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        if(n-m>0)
        {
            cout<<m+1<<endl;
        }
        else
        {
            cout<<m<<endl;
        }
    }
    return 0;
}
