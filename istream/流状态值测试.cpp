//通过该程序我们了解如果正确输入后，流的四种状态值是什么？
//比如输入数字5,结果是good位=1,bad,fail,eof位均位0。
//如果输入错误，比如输入字符t，结果为fail位为1,good,bad,eof位均为0。
//如果输入流终止符Ctrl+D，那么eof,fail位为1,good,bad位为0。
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int a;
	cin>>a;
	cout<<"cin.good: "<<cin.good()<<endl;
	cout<<"cin.bad: "<<cin.bad()<<endl;
	cout<<"cin.fail: "<<cin.fail()<<endl;
	cout<<"cin.eof: "<<cin.eof()<<endl;
	cout<<a<<endl;
	return 0;
}
