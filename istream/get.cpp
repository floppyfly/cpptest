#include <iostream>
#include <sstream>

int main(int argc, char *argv[])
{
	using namespace std;
	istringstream s1("hello,world.");
	char c1=s1.get();	//得到字符'h'
	cout<<"读取后"<<c1<<",gcount()=="<<s1.gcount()<<'\n';	//gcout()函数返回移动几个字符数
	char c2;
	s1.get(c2);		//读取字符的另一种写法
	char str[5];	//字符数组，有5个元素，如果包含字符串，只能包含4个字符和一个'\0'结束符。
	s1.get(str,5);	//得到"llo,"和一个'\0'共5个字符。
	cout<<"读取后"<<str<<",gcount()=="<<s1.gcount()<<endl;
	cout<<c1<<c2<<str<<endl;
	s1.get(*cout.rdbuf());	//注意星号，cout的函数rdbuf,读取剩余字符，不包括'\n'
	cout<<"\n读取后,gcount()=="<<s1.gcount()<<endl;
	return 0;
}
