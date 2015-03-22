#include <iostream>

using namespace std;

int main()
{
    int n,m,i,j,y,k,t,sum;
    int s[3];
    while(cin>>n>>m>>s[n])
    {
        int sum[n];

        k=0;
        for(i=0;i<n;i++)
            for(j=0;j<i;j++)
            {
                k+=s[j];
                sum[i]=k;
            }
        cin>>y>>t;
        cout<<sum[t-1]-sum[y-2]<<endl;

    }
    return 0;
}
