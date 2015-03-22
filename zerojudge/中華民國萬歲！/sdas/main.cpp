#include <iostream>

using namespace std;

int main()
{
    int x;
    while(cin>>x)
    {
        if(x>=15)
        cout<<x-15<<endl;
        else
        {
            cout<<24-(15-x)<<endl;
        }
    }
    return 0;
}
