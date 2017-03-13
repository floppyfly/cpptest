//执行过程：首先，由peek函数读一个字符看是否位回车符？
//如果是，停止循环，如果否，进入循环。
//继续检查是否到文件结尾？状态是否为bad？
//如果是，跳出循环，如果否，继续下一条语句。
//cin流是否发生可恢复错误？通常就是类型不对，要求int，却输入char
//如果是，unset状态位，并且忽略一个字符（提取并抛弃）。
//注意：如果流的状态位错误，必须首先cin.clear()来unset状态位，
//否则，cin的方法不能运行，比如cin.ignore()也不能运行。
//最后，由流输入值到value，如果报错，cin流停止运行，那么sum+=value
//的结果仍位0，然后程序跳转到第3行来检测和修复。
#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;
	int value=0,sum=0;
	while(cin.peek()!='\n'){
		if(cin.eof() or cin.bad()){
			break;
		}
		else if(cin.fail()){
			cin.clear();
			cin.ignore();
		}
		else{
			cin>>value;
			sum += value;
		}
	}
	cout<<"sum="<<sum<<endl;

	return 0;
}
