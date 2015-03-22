#include <iostream>


using namespace std;

int main()
{
    int k,i,t,r;
    char x[10];
    int f[9];
    while(cin>>x)
    {
        if(x[0]=='A')k=1;
        else if(x[0]=='B')k=1+9*1;
        else if(x[0]=='C')k=1+9*2;
        else if(x[0]=='D')k=1+9*3;
        else if(x[0]=='E')k=1+9*4;
        else if(x[0]=='F')k=1+9*5;
        else if(x[0]=='G')k=1+9*6;
        else if(x[0]=='H')k=1+9*7;
        else if(x[0]=='I')k=3+9*4;
        else if(x[0]=='J')k=1+9*8;
        else if(x[0]=='K')k=1+9*9;
        else if(x[0]=='L')k=2+9*0;
        else if(x[0]=='M')k=2+9*1;
        else if(x[0]=='N')k=2+9*2;
        else if(x[0]=='O')k=3+9*5;
        else if(x[0]=='P')k=2+9*3;
        else if(x[0]=='Q')k=2+9*4;
        else if(x[0]=='R')k=2+9*5;
        else if(x[0]=='S')k=2+9*6;
        else if(x[0]=='T')k=2+9*7;
        else if(x[0]=='U')k=2+9*8;
        else if(x[0]=='V')k=2+9*9;
        else if(x[0]=='W')k=3+9*2;
        else if(x[0]=='X')k=3+9*0;
        else if(x[0]=='Y')k=3+9*1;
        else if(x[0]=='Z')k=3+9*3;

        for(i=1;i<=9;i++)f[i-1]=x[i]-'0';
        r=0;
        for(i=0;i<=7;i++)
        {
            r+=f[i]*(8-i);
        }
        t=r+k+f[8];
        if(t%10==0)cout<<"real"<<endl;
        else cout<<"fake"<<endl;
    }
    return 0;
}
