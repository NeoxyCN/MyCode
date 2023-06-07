#include <iostream>

int main(){
	int i1,i2;
	std::cout<<"输入两个整数"<<std::endl;
	std::cin>>i1>>i2;
	std::cout<<"i1:"<<i1<<"  i2:"<<i2<<std::endl;
	int i=i1;
	while(i<=i2){
		std::cout<<i<<std::endl;
		i++;
	}
	return 0;
}
