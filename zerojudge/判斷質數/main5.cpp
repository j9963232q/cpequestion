#include <cstdlib>
#include<iostream>


using namespace std;


int main()
{
int x,i;
while(cin>>x)
{
for(i=2;i<=x/2+1;i++)
{
if(i==x/2+1)//�u���@��"="�P�����"=="���p���P 
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
