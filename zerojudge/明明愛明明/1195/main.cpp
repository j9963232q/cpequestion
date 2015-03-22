#include <iostream>
#include <string.h>


using namespace std;

int main()
{
    int k,i,l,j,y,u,r;
    int s[1000];
    char x[1000];
    while(cin>>x)
    {
        l=strlen(x);
        char p[l];
        for(i=0;i<l;i++)
        {
             if(x[i]>=65&&x[i]<=90)p[i]=x[i];
             else if(x[i]>=97&&x[i]<=122)p[i]=x[i]-'a'+'A';
             else
             {
                continue;
             }
        }
        for(i=0;i<l;i++)
        {
            k=0;
            for(j=0;j<l;j++)
            {
                if(p[i]==p[j])
                {
                    k++;

                }
            }
            y=0;
            if(i>0)
            {
                for(u=0;u<i;u++)
                {
                    if(p[i]==p[u])
                    {
                    y++;
                    break;
                    }
                }
            }
            if(y==0)s[i]=k;
        }
        r=0;
        for(i=0;i<l;i++)
        {
            if(s[i]%2==1)r++;
        }
        if(r<2)
        {
            cout<<"yes !"<<endl;
        }
        else
        {
           cout<<"no..."<<endl;
        }
    }

    return 0;
}

