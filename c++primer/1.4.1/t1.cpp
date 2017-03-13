#include <iostream>
int main(int argc, char *argv[])
{
	for(int i=10;i>=0;i--){  //当条件为真时，执行for循环，千万不要搞成i<0
		std::cout<<i<<std::endl;
	}

	return 0;
}
