#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int x,y,i;
    while(cin>>x>>y)
    {
              for(i=x;i>1;i--)
              {
                   if(x%i==0&&y%i==0)
                   {
                                     cout<<i<<endl;
                                     break;
                   }
              } 

    }
    return 0;
}
