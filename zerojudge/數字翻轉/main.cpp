#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i,l;
    char s[10];
    int n[10];
    while(cin>>s)
    {
                 l=strlen(s);
                 for(i=0;i<l;i++)
                 {
                  n[i]=s[i]-'0';
                                 }
                 for(i=l-1;i>-1;i--)
                 {
                                    cout<<n[i]<<endl;
                                    }
                                    
                 
                 }
    return 0;
}
