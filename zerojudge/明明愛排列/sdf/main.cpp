#include <iostream>

using namespace std;

int main()
{
    int x,i,j;

    while(cin>>x)
    {
        int n[x];

        for(i=0;i<x;i++)
        {
            cin>>n[i];
        }
        for(j=0;j<x-1;j++)//假如是j<x會因為沒這個值而出錯
        for(i=0;i<x-1;i++)
        {
            if(n[i]%10>n[i+1]%10)
            {
            swap(n[i],n[i+1]);
            }
            else if(n[i]%10==n[i+1]%10)
            {
                if(n[i]<n[i+1])swap(n[i],n[i+1]);
            }
        }

        for(i=0;i<x;i++)
        {
            cout<<n[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
