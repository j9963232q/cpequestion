#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
int a,b,c,d,e,f,i;
while(cin>>f)
{
for(i=0;i<f;i++)
{
cin>>a>>b>>c>>d;

if(a-b==c-d)
{
e=d+(d-c);
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
cout<<" "<<endl;
}
else
{
e=d*d/c;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
cout<<" "<<endl;
}
}
}
return 0;
}
