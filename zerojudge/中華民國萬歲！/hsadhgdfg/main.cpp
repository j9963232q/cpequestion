#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double x,k;
    while(cin>>x)
    {
        k=(x-32)/9*5;
        cout<<fixed<<setprecision(3)<<k<<endl;
    }
    return 0;
}
