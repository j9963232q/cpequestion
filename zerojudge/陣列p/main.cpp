#include <iostream>
#include <math.h>
#define X 3
#define Y 3
using namespace std;

int main()
{
    while(true)
    {
        int i,j;
        char a[X];
        int b[Y];
        for(i=0;i<X;i++)
        {
            cin>>a[i]>>b[i];
        }

        int u;
        char f;


for(int w=0;w<X-1;w++){
                for(int r=w;r<X;r++)
                    {
                        if(b[r]<b[r+1])
                            {
                                u=b[r];
                                b[r]=b[r+1];
                                b[r+1]=u;

                            }

                    }
                }

            for(i=0;i<X;i++)
            {
                cout<<a[i]<<"  "<<b[i]<<endl;
            }



        cout<<"exit?"<<endl;
        string A;
        cin>>A;
        if(A=="yes")
        {
            break;
        }

    }
    return 0;
}
