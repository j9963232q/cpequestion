#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int x,y,i,j;
    int s[100][100];
    while(cin>>x>>y)
    {
          for(i=0;i<x;i++)
          {
                           for(j=0;j<y;j++)    
                           {
                                                cin>>s[i][j];
                           }
          }
             for(j=0;j<y;j++)
          {
                           for(i=0;i<x;i++)    
                           {
                                               if(i!=x-1)
                                              {
                                                         cout<<s[i][j]<<" ";
                                              }
                                              else
                                              {
                                                  cout<<s[i][j]<<" "<<endl;
                                              }
                           }
          }      
          }
          return 0;//不寫此行也可!! 
}
