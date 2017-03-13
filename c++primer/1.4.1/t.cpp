#include <iostream>

int main(int argc, char *argv[])
{
	int sum=0;	//sum必须初始化，否则后面的 sum = sum + i，就会出错，因为sum的值还没有被定义。
	for(int i=50;i<=100;i++){
		sum += i;
		std::cout<<"sum= "<<sum<<std::endl; //通过它可以观察sum值是如何变化的，这个方法可用于调试。
	}
	std::cout<<"50...100之和为: "<<sum<<std::endl;

	return 0;
}
