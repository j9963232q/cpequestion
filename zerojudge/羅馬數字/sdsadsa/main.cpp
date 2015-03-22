#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    string a,b;
    int t,i;
    while(cin>>a>>b)
    {
    int i,h,n,y,t;
    n=strlen(a);
    int r[n];
    for(i=0;i<n;i++)
    {
        if(a[i]=="I")r[i]=1;
        if(a[i]=="V")r[i]=5;
        if(a[i]=="X")r[i]=10;
        if(a[i]=="L")r[i]=50;
        if(a[i]=="C")r[i]=100;
        if(a[i]=="D")r[i]=500;
        if(a[i]=="M")r[i]=1000;
    }


    for(i=1;i<n;i++)
    {
        if(r[i]>r[i-1])r[i-1]=r[i]-r[i-1];
    }
    for(i=0;i<n;i++)y+=r[i];

    l=strlen(b);
    int e[l];
    for(i=0;i<n;i++)
    {
        if(b[i]=="I")e[i]=1;
        if(b[i]=="V")e[i]=5;
        if(b[i]=="X")e[i]=10;
        if(b[i]=="L")e[i]=50;
        if(b[i]=="C")e[i]=100;
        if(b[i]=="D")e[i]=500;
        if(b[i]=="M")e[i]=1000;
    }
    for(i=1;i<l;i++)
    {
        if(e[i]>e[i-1])e[i-1]=e[i]-e[i-1];
    }

    for(i=0;i<n;i++)h+=e[i];
    if(h>r)swap(h,r);
    t=r-h;


        for(i=0;i<t/1000;i++;)cout<<"M";
        t=t%1000;
        if(t/100<5)
        {
            if(t/100==4)cout<<"CD";
            else
            {
                for(i=0;i<t/100;i++;)cout<<"C";
            }
        }
        else
        {
            if(t/100==9)cout<<"CM";
            else
            {
                cout<<"D";
                for(i=0;i<t/100-5;i++;)cout<<"C";
            }
        }
        t=t%100;
        if(t/10<5)
        {
            if(t/10==4)cout<<"XL";
            else
            {
                for(i=0;i<t/10;i++;)cout<<"X";
            }
        }
        else
        {
            if(t/10==9)cout<<"XC";
            else
            {
                cout<<"L";
                for(i=0;i<t/10-5;i++;)cout<<"X";
            }
        }
        t=t%10;
        if(t<5)
        {
            if(t==4)cout<<"IV";
            else
            {
                for(i=0;i<t;i++;)cout<<"I";
            }
        }
        else
        {
            if(t==9)cout<<"IX";
            else
            {
                cout<<"V";
                for(i=0;i<t-5;i++;)cout<<"I";
            }
        }
    }
    return 0;
}
