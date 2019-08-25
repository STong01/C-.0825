#include <iostream>
using namespace std;

void func(int a,int b = 20,int c = 30){//函数若没有指定值，那么缺省参数必须放在函数参数末尾
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}

void swapArgs(int * pa, int * pb){
	int tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void swapArgs(float * pa, float * pb){
	float tmp;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main(){

	/*func(11);
	func(11, 12);
	func(11, 12, 13);*/

	int a = 4, b = 7;
	float c = 3.14, d = 1.618;
	swapArgs(&a, &b);
	swapArgs(&c, &d);

	cout << a << "  " << b << endl;
	cout << c << "  " << d << endl;

	system("pause");
	return 0;
}