#include<iostream>
#include<math.h>

using namespace std;


int main()
{
int x,i,y;
y=floor(sqrt(x));
while(cin>>x)
{
if(x==2||x==3||x==5||x==7)
{
cout<<"���"<<endl;
}
else if(x%2==0)
{
 cout<<"�D���"<<endl;
 }
else if(x%3==0)
{
 cout<<"�D���"<<endl;
 }
else
{
for(i=3;i<=y;i+=2) //floor(x)��:�����j��X�̤j��� 
{
if(x%i==0)
{
cout<<"�D���"<<endl;
break;
}                  
if(i==y) 
{
cout<<"���"<<endl;
break;
}  
}    
}
}
return 0;
}
