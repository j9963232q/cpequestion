#include <cstdlib>
#include<iostream>
#include<math.h>

using namespace std;


int main()
{
int x,i;
while(cin>>x)
{
for(i=2;i<=floor(sqrt(x))+1;i++) //floor(x):ぃX程俱计 
{
if(i==floor(sqrt(x))+1)
{
cout<<"借计"<<endl;
break;
} 
if(x%i==0)
{
cout<<"獶借计"<<endl;
break;
}
}
}
return 0;
}
