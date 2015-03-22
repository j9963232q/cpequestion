#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  int i,j,sum,p,k;
    int s[9][9];
    while(true)
    {   
     
          for(i=0;i<9;i++)
          {
                           for(j=0;j<9;j++)    
                           {
                                                cin>>s[i][j];
                           }
          }
              k=0;
          for(i=0;i<9;i++)
          {
                           sum=0;
                           for(j=0;j<9;j++)    
                           {
                                               sum+=s[i][j];
                           }
                           if(sum!=45)
                           {
                                      k++;
                                      break;
                           }
          }
          for(p=0;p<7;p+=3)
          {
          for(i=0+p;i<3+p;i++)
          {
                           sum=0;
                           for(j=0+p;j<3+p;j++)    
                           {
                                               sum+=s[i][j];
                           }
                           if(sum!=45)
                           {
                                      k++;
                                      break;
                           }
          }
          }
          if(k>0)
          {
          cout<<"no"<<endl;
          }
          else
          {
             cout<<"yes"<<endl; 
          }
          }
          return 0;
          
}
