//输入几个数字，空格隔开
//输出数字之和
//重点学习cin.peek()的用法。
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int sum=0,value;
	while(cin.peek()!='\n'){
		cin>>value;
		sum += value

	}
	cout<<"sum is "<<sum<<endl;

	return 0;
}
