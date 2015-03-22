#include <iostream>

using namespace std;

int main()
{
    int N,sum,i,k;
    double j,u;
    while(cin>>N)
    {
        sum=0;
        if(N>2)
        {
        for(i=0;i<=N/2;i++)
        {
            k=1;
            u=1;
            if(i!=0)
            for(j=N-i*2+1;j<=N-i;j++)
            {

                k*=j/u;
                u++;
            }

            else k=1;
            sum+=k;
        }
            sum=sum%10007;
            cout<<sum<<endl;
        }

        else
        {
            if(N==1)cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }
    }
    return 0;
}
