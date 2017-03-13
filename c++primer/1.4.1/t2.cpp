#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n1,n2;
	for(;;){
		cout<<"Please enter two number: ";
		cin>>n1>>n2;
		if(cin.fail()){
			cin.clear();
/*cin.ignore根据参数的不同，共有3种写法，
 * cin.ignore(),
 * cin.ignore(int count),
 * cin.ignore(int count=1,int delim=EOF)
 * 前2种为忽略某个参数改用默认值的写法。
 * 这里重点说明的是第二种写法，即默认为EOF(end of file)时。
 * 如果下句写为: cin.ignore(100),则输入：t 8
 * 则继续出现输入提示符，要求输入数据，因为cin.ignore(100)，
 * 这个时候，既没有遇见文件终止符EOF，也没有满100个字符，
 * 所以，出现输入提示符，要求你继续输入，然后它在忽略够100个，或者
 * 遇见文件终止符，cin.ignore函数才会停止。所以，这时我们一般要加上'\n'，
 * 表示遇见回车后停止。或者直接用第一种形式，但是，这样会多次执行该循环，
 * 造成一些的废话输出，所以在这里，最好的还是: cin.ignore(100,'\n')
 */
			cin.ignore(100,'\n');
			cout<<"Error Enter,retry it\n";
		}
		else{
			break;
		}
	}
	if(n1>n2){
		int tmp;
		tmp=n1;
		n1=n2;
		n2=tmp;
	}
	for(int i=n1;i<=n2;i++){
		cout<<i<<endl;
	}

	return 0;
}
