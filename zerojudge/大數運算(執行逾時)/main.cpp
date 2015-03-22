#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    while(cin>>a>>b>>c)
    {
                       l=strlen(a);
                       k=strlen(c);
                       s=max(l,k);
                       y=min(l,k);
                       
                       for(i=0;i<l;i++)
                       {

                                       n[i]=a[i]-'0';
                                       }
                       
                       
                       for(i=0;i<k;i++)
                       {
                                       e[i]=c[i]-'0';
                                       }
                       
                                       if(b=="+")
                                       {
                                       for(i=0;i<s;i++)
                                       {
                                       g[i]=n[i]+e[i]+(n[i-1]+e[i-1])/10;
                                       g[i]=g[i]%10;
                                       }
                       u=strlen(g);
                                       for(i=u-1;i>-1;i--)cout<<g[i]<<endl;
                                       }
                                       
                                       else if(b=="-")
                                       {
                                       for(i=0;i<s;i++)
                                       {
                                       g[i]=n[i]-e[i]+(n[i-1]-e[i-1])/10;
                                       g[i]=g[i]%10;
                                       }

                                       for(i=u-1;i>-1;i--)cout<<g[i]<<endl;
                                       }
                                       
                                       else if(b=="*")
                                       {
                                         for(i=0;i<s;i++)
                                         {
                                                         g[i]=0;
                                                         for(j=0;j<i;j++)
                                                         {
                                                         g[i]+=n[i]*e[j];
                                                         }
                                                         }   
                                            
                                            }
                                            for(i=0;i<s;i++)
                                            {
                                                            g[i+1]+=g[i]/10;
                                                            }
                                                            g[0]=g[0]%10;
                                         for(i=u-1;i>-1;i--)cout<<g[i]<<endl;
                                       }
                                       else
                                       {
                                           
                                           }
                                       
                                       
                       }
    return 0;
}
