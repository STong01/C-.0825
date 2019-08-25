#include <iostream>
using namespace std;//std::cout<<.....
#include "t1.h"
#include "t2.h"
using namespace t1;
using namespace t2;



namespace test{
	namespace n1{
		int add(int a, int b){
			cout << "1\n";
			return a + b;
		}
	}
	namespace n2{
		int add(int a, int b){
			cout << "2\n";
			return a + b;
		}
	}
}

namespace test{
	int add(int a, int b){
		cout << "3\n";
		return a + b;
	}
}


namespace n2{
	int add(int a, int b){
		cout << "4\n";
		return a - b;
	}
}

//int main(){
//	cout << t1::add(2, 3)<<endl;
//	system("pause");
//	return 0;
//}