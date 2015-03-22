#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    int i;
    char x[7],k[6];
    while(cin>>x)
    {
        for(i=0;i<7;i++)
        {
            if(x[i+1]>x[i])
           k[i]=x[i+1]-x[i]+48;
           else
           {
            k[i]=x[i]-x[i+1]+48;
           }
        }


        for(i=0;i<6;i++)
        {
            cout<<k[i];
        }

        cout<<"\n";
    }
    return 0;
}
