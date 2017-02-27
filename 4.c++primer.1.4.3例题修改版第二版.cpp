#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int value=0,sum=0;
	while(cin.peek()!='\n' and cin.peek()!=EOF){
		cin>>value;
		sum += value;
	}
	cout<<"sum="<<sum<<endl;

	return 0;
}
