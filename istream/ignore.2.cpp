#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	char first,last;
	cout<<"Please, enter your first name followed by your surname: ";
	first=cin.get();
	cin.ignore(256,' ');
	last=cin.get();
	cout<<"Your initials are "<<first<<last<<'\n';

	return 0;
}
