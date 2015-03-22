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
if(i==x/2+1)//只有一個"="與有兩個"=="狀況不同 
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
