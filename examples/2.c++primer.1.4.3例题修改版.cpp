#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int value=0,sum=0;
	while(cin>>value){
		sum += value;
		char ch=cin.peek();
		if(ch=='\n' or ch==EOF)
			break;
	}
	cout<<"sum="<<sum<<endl;

	return 0;
}
