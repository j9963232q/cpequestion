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
cout<<"借计"<<endl;
}
else if(x%2==0)
{
 cout<<"獶借计"<<endl;
 }
else if(x%3==0)
{
 cout<<"獶借计"<<endl;
 }
else
{
for(i=3;i<=y;i+=2) //floor(x):ぃX程俱计 
{
if(x%i==0)
{
cout<<"獶借计"<<endl;
break;
}                  
if(i==y) 
{
cout<<"借计"<<endl;
break;
}  
}    
}
}
return 0;
}
