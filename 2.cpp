//介绍ignore,eof,bad,fail的用法
//http://zh.cppreference.com/w/cpp/io/basic_istream/ignore
//改变ignore的第一个参数，看看输出有什么变化？
#include <iostream>
#include <sstream>
#include <limits>
using namespace std;

int main(int argc, char *argv[])
{
	istringstream input("1\n"
			"some non-numric input\n"
			"2\n");
	for(;;){
		int n;
		input>>n;
		if(input.eof()||input.bad())
			break;
		else if(input.fail()){
			input.clear();
			input.ignore(100,'\n');
			cout<<"I comming"<<endl;
		} else
			cout<<n<<endl;
	}

	return 0;
}
