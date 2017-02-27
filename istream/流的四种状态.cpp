//本节重点：
//1、流共有4个状态位：goodbit,eofbit,failbit,badbit，可弄过good(),eof(),fail(),bad()这四个函数调用他们。
//2、如果流处于错误的状态，那么只有clear()函数可以使用。也就是说，只有清除了流的错误状态，流内的函数才可以执行。
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	while(1){
		cin>>n;
		if(cin.eof() || cin.bad()){
			break;
		}
		else if(cin.fail()){
			//clear重置流的状态，使之有效。
			cin.clear();	
			//注意：如果流处于错误状态，cin.ignore是不会执行的，所以，必须首先重置流的状态，其次才能使用ignore()函数。
			cin.ignore(100,'\n');	
		}
		else if(n==111){
			break;
		}
//不能省略else，否则，无论对错，程序都会输出n的值，即使输入错误，也会输出n的值。
		else{	
			cout<<n<<'\n';
		}	

	}
	return 0;
}
