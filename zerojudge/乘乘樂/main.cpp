#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{

    int i,sum,l,p,k;
    char s[11];
    int n[11];
 while(cin>>p)
 {
              k=0;
              while(k<p)
              {
                        k++;
              cin>>s;
              l=strlen(s);

              for(i=0;i<l;i++)
              {
                              n[i]=s[i]-'0';
                              }

              sum=1;
              for(i=0;i<l;i++)
              {
                              sum*=n[i];
                              }
                              cout<<sum<<endl;
 }
              }
              return 0;
 
}


