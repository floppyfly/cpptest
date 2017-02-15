#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[])
{
	istringstream input("12abcde\n");	//使用istringstream类在库文件<sstream>
	for(;;){
		int n;
		input>>n;
		if(input.eof() || input.bad())
			break;
		else if(input.fail()){
			input.clear();
			input.ignore(2,'\n');	//每次1个字符，循环5编，每次2个字符，则循环3次，因为共5个字符，一次2个，最后一次1个。
			cout<<n<<'\n';
		}else
			cout<<n+1<<'\n';	//input提取的数字字符串直接转存为数字格式.
	}

	return 0;
}
