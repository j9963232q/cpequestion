#include <iostream>
#include <math.h>

using namespace std;

int P(int n)
{
    int i;
    if(n<2)return 0;
    if(n==3)return 1;
    if(n==4)return 0;
    for(i=2;i<sqrt(n);i++)
    if(n%i==0)return 0;
    return 1;

}

int main()
{
    int a;
    while(cin>>a)
    {
        if(P(a))cout<<"質數"<<endl;
        else cout<<"非質數"<<endl;
    }
    return 0;
}
