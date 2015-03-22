#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int x,a;
    while(cin>>x)
    {
                 if(x<=10)
                 {
                         a=6*x;
                         cout<<a<<endl;
                 }
                 else if(10<x&&x<21)
                 {
                 a=60+(x-10)*2;
                 cout<<a<<endl;
                 }
                           else if(20<x&&x<=40)
                          {
                              a=60+x;     
                         cout<<a<<endl;
                           }
                           else
                           {
                               cout<<"100"<<endl;
                               }
                 }
    return 0;
}
