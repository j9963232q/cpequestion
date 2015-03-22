#include <iostream>

using namespace std;

int main()
{
    char x[9];
    int n[9];
    int i,sum,k,p,t;
    while(cin>>x)
    {
        for(i=0;i<9;i++)
        {
            n[i]=x[i]-'0';
        }

        sum=0;
        for(i=0;i<8;i++)
        {
            sum+=n[i]*(8-i);
        }
        t=sum%10;
        p=10-n[8];
        p=p%10;
        if(p<t)
        k=p+10-t;
        else
        {
        k=p-t;
        }


        if(k==0)cout<<"BNZ"<<endl;
        if(k==1)cout<<"AMW"<<endl;
        if(k==2)cout<<"KLY"<<endl;
        if(k==3)cout<<"JVX"<<endl;
        if(k==4)cout<<"HU"<<endl;
        if(k==5)cout<<"GT"<<endl;
        if(k==6)cout<<"FS"<<endl;
        if(k==7)cout<<"ER"<<endl;
        if(k==8)cout<<"DOQ"<<endl;
        if(k==9)cout<<"CIP"<<endl;
    }
    return 0;
}
