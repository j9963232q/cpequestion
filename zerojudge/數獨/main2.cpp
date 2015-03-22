#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
  int i,j,sum,k,x,u,p;
    int s[9][9];
    while(cin>>x)
    {   
       
       s[0][0]=x;
          for(i=0;i<9;i++)
          {
                if(i==0)
                {
                           for(j=1;j<9;j++)    
                           {
                                                cin>>s[i][j];
                           }

                }
                else
                {
                           for(j=0;j<9;j++)    
                           {
                                                cin>>s[i][j];
                           }

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
          
          if(k>0)
          {
          cout<<"no\n"<<endl;
          }
          else
          {
          for(j=0;j<9;j++)
          {
                          sum=0;
                           for(i=0;i<9;i++)    
                           {
                                               sum+=s[i][j];
                           }
                           if(sum!=45)
                           {
                                      k++;
                                      break;
                           }
          }
          for(u=0;u<7;u+=3)
          {
          for(p=0;p<7;p+=3)
          {
                           sum=0; 
          for(i=0+p;i<3+p;i++)
          {
                               
                           for(j=0+u;j<3+u;j++)    
                           {
                                               sum+=s[i][j];
                           }
                  

          }
                   if(sum!=45)
                           {
                                      k++;
                                      break;
                           }
          }
          }
          if(k==0)
          {
          cout<<"yes\n"<<endl;
          }
          else
          {
              cout<<"no\n"<<endl;
          }
          }
          
          }
          return 0;
          
}
