#include <iostream>
#include <math.h>

using namespace std;

int main()
{
     int N,i,h,y,u,k,k1,h1;
     int s[11],a[11];
    while(cin>>N)
    {
        s[0]=a[0]=1;
        s[1]=a[1]=2;
            for(i=0;i<9;i++)
            {
                a[i+2]=a[i+1]+a[i];

                s[i+2]=a[i+2];
            }
        if(N>11)
        {
            k=N/10;
            h=(N-1)%10;
            k1=(N-2)/9;
            h1=(N-3)%9;
            if(h!=0&&h1!=0)
            u=pow(s[9],k)*s[h]+pow(s[8],k1)*s[h1];
            else if(h==0&&h1!=0) u=pow(s[9],k)+pow(s[8],k1)*s[h1];
            else if(h!=0&&h1==0) u=pow(s[9],k)*s[h]+pow(s[8],k1);
            else u=pow(s[9],k)+pow(s[8],k1);
            u=u%10007;
            cout<<u<<endl;
        }

        else
        {
            cout<<s[N-1]<<endl;
        }



    }
    return 0;
}
