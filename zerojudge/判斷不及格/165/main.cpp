#include <iostream>

using namespace std;

int main()
{
    double n,a,i,p,sum;

    while(cin>>n)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
        cin>>a;
        sum+=a;
        }
        p=sum/n;
        if(p>=59)cout<<"yes"<<endl;



        else
        {
        cout<<"no"<<endl;
        }
    }
    return 0;
}
