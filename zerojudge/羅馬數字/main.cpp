#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) 
{
	char a[100];
	char e;
	int i;
	do
	{
		cout<<"請輸入字串"<<endl;
		getline(a);
		reverse(a);
		puts(a);
		
		printf("\n是否要繼續輸入(y/n)");
		fflush(stdin);
		cin>>e;
	}while(e=='y');
	return 0;
}
