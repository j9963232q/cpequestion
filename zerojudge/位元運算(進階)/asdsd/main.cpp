#include <iostream>

using namespace std;

int main()
{
    while(cin>>s[0])
    {
        for(i=1;i<5;i++)
        {
            cin>>s[i];
        }
        cin>>a;
        for(i=0;i<a;i++)
        {
            k=0;
            for(j=0;j<5;j++)
            {
                h=0;
                cin>>d[j];
                if(s[j]==d[j])
                {
                    k++;
                    h++;
                }
                if(h==0)
                {
                    r[j]=d[j];
                    t[j]=s[j];
                }

            }

            for(j=0;j<5;j++)
            {
                y=0;
                for(u=0;u<5;u++)
                {
                    if(==w[u])y++;
                }

                for(u=0;u<5;u++)
                {
                    if(r[j]==t[u])
                    {
                        g++;
                        if(g==1)a==u;
                    }
                }
            }



        }
    }
    return 0;
}
