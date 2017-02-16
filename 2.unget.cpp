#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
	std::istringstream s1("Hello,world.");
	char c1=s1.get();
	if(s1.unget()){  //想一想为啥要用if语句
		char c2=s1.get();
		std::cout<<"得到:"<<c1<<"再次得到: "<<c2<<'\n';
	}

	return 0;
}
