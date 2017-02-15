#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
	std::istringstream s1("hello,world");
	char c1=s1.peek();	//从输入流中读取一个字符，但并不提取出来
	char c2=s1.get();	//从输入流提取一个字符
	std::cout<<"c1="<<c1<<" c2="<<c2<<'\n';

	return 0;
}
