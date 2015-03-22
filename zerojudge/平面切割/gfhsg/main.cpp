#include <iostream>

using namespace std;

int main()
{
    int n,sum,i,k,m,j;
    while(cin>>n)
    {
        k=0;
        for(j=1;j<n;j++)
        {
            sum=2;
            for(i=2;i<j+1;i++)
            {
                sum+=i;
            }
            k+=sum;
        }
        m=2+k;
        cout<<m<<endl;
    }
    return 0;
}
