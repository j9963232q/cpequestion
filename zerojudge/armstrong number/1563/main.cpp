#include <iostream>
#include <math.h>


using namespace std;

int main()
{
    int n,m,k,i,j,l,y,u,p,sum;


    while(cin>>n>>m)
    {
    k=0;
    for(i=n;i<=m;i++)
    {

        l=log10(i);


        sum=0;
        p=i;
        for(j=l;j>-1;j--)
        {
            y=pow(10,j);
            u=p/y;
            sum+=pow(u,l+1);
            p=p%y;

                    }
            if(sum==i)
            {
               cout<<i<<" ";
                k++;
                }


                }
            if(k==0)
            {
               cout<<"none";
                    }
                    cout<<""<<endl;
        }
    return 0;
}
