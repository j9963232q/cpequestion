#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i,l,k;
    char s[10];
    int n[10];
    while(cin>>s)
    {
                 l=strlen(s);
                 for(i=0;i<l;i++)
                 {
                  n[i]=s[i]-'0';
                                 }
                        k=0;
                 for(i=l-1;i>-1;i--)
                 {

                    if(i==0)
                    {
                       cout<<n[i]<<endl;
                       break;
                        }
                        if(k==0&&n[i]==0)
                        {
                        continue;
                        }
                                    cout<<n[i];
                                    k++;
                                    }


                 }
    return 0;
}
