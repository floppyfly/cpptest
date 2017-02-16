//小p现在上三年级，9年后如果去国外留学，至少需要50万元，而他的爸爸只有
//10万，问银行的利率至少是多少，才能保证9年后有50万元以上？
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	double benjin,lixi=0.01,benxi,mubiao=500000.0;
	int nian=9;
	cin>>benjin;
	while(1){
		benxi=benjin*pow((1+lixi),nian);
		cout<<"benxi: "<<benxi<<" "<<"lixi: "<<lixi*100<<"%"<<endl;
		if(benxi>mubiao) break;
		lixi=lixi+0.01;
	}
	cout<<"need lixi: "<<lixi<<endl;
	cout<<"benxi: "<<benxi<<endl;

	return 0;
}
