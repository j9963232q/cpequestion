#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    char x[100];
    while(cin>>x)
    {
        int l,i;
        l=strlen(x);
        for(i=0;i<l;i++)
        {
            x[i]=x[i]-7;
            cout<<x[i];
        }
        cout<<"\n";
    }
    return 0;
}
