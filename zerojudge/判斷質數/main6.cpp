#include <cstdlib>
#include<iostream>
#include<math.h>

using namespace std;


int main()
{
int x,i;
while(cin>>x)
{
for(i=2;i<=floor(sqrt(x))+1;i++) //floor(x)��:�����j��X�̤j��� 
{
if(i==floor(sqrt(x))+1)
{
cout<<"���"<<endl;
break;
} 
if(x%i==0)
{
cout<<"�D���"<<endl;
break;
}
}
}
return 0;
}
