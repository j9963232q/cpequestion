#include <cstdlib>
#include<iostream>
#include<math.h>

using namespace std;


int main()
{
int x,i;
while(cin>>x)
{
for(i=2;i<=floor(sqrt(x))+1;i++) //floor(x)指:取不大於X最大整數 
{
if(i==floor(sqrt(x))+1)
{
cout<<"質數"<<endl;
break;
} 
if(x%i==0)
{
cout<<"非質數"<<endl;
break;
}
}
}
return 0;
}
