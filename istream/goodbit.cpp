//该例题作为good()的一个应用来保存。
//只有当不为回车符且cin状态位good时，循环才运行。
//优点：代码简洁。
//缺点：不能很好的处理“t1 2 3"或"1 2 t 3"这样的序列。
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int value=0,sum=0;
	while(cin.peek()!='\n' and cin.good()){
		cin>>value;
		sum += value;
	}
	cout<<"sum="<<sum<<endl;

	return 0;
}
