#include <iostream>
using namespace std;

int main() {
	auto var = 1000;
	int var2 = 1000;

	int *p = &var;
	cout << &var << endl;
	cout << p << endl;
	int & ref = var2;
	cout << &ref << endl;
	//0x5e2d9ff9c8
	//0x5e2d9ff9cc
	// 为什么变量的地址和这个变量引用的地址不一样?
}
