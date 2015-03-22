#include <iostream>

using namespace std;

int main()
{
    int i;
    double p,sum,n,a;
    while(cin>>n)
    {

        sum=0;
        for(i=0;i<n;i++)
        {
        cin>>a;
        sum+=a;
        }
        p=sum/n;//­Ysum,n¬Oint·|¨Ïp!=float?
        if(p>59)cout<<"no"<<endl;



        else
        {
        cout<<"yes"<<endl;
        }
    }
    return 0;
}

