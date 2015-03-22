#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double a,b,c,d,e,f,x,y;
    while(cin>>a>>b>>c>>d>>e>>f)
    {
        if(a/d==b/e&&b/e==c/f)
        {
            cout<<"Too many"<<endl;
        }

        else if((a!=0&&b!=0&&c!=0&&d!=0&&e!=0&&f!=0&&a/d==b/e&&b/e!=c/f)||(d==0&&e==0&&f!=0)||(a==0&&b==0&&c!=0)||(a==0&&d==0&&b!=0&&e!=0&&b/e!=c/f&&c!=0&&f!=0)||(b==0&&e==0&&a!=0&&d!=0&&a/d!=c/f&&c!=0&&f!=0))cout<<"No answer"<<endl;
        else if((a==0&&d==0&&b/e==c/f)||(b==0&&e==0&&a/d==c/f)||(c==0&&f==0&&a/d==b/e)||(a==0&&b==0&&c==0)||(d==0&&e==0&&f==0)||(a==0&&d==0&&b!=0&&c==0&&f==0)||(b==0&&e==0&&a!=0&&d!=0&&c==0&&f==0))cout<<"Too many"<<endl;
        else if(a/d==b/e&&b/e!=c/f)cout<<"No answer"<<endl;
        else
        {
            if(b!=0&&e!=0&&a!=0&&d!=0)
            {
                x=(e*c-b*f)/(a*e-b*d);
                y=(c-a*x)/b;
                cout << fixed << setprecision(2) << "x="<<x<<endl;
                cout << fixed << setprecision(2) << "y="<<y<<endl;
            }

            else
            {
                if(a==0&&e==0)
                {
                    x=f/d;
                    y=c/b;
                    cout << fixed << setprecision(2) << "x="<<x<<endl;
                    cout << fixed << setprecision(2) << "y="<<y<<endl;

                }
                else
                {
                    x=c/a;
                    y=f/e;
                    cout << fixed << setprecision(2) << "x="<<x<<endl;
                    cout << fixed << setprecision(2) << "y="<<y<<endl;
                }
            }
        }

    }
    return 0;
}
