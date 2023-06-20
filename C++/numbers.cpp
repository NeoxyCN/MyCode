#include <iostream>
#include <ctime>

int main(){
	//利用时间戳来设置种子
	srand((unsigned)time(NULL));
	
	std::cout<<rand()<<std::endl;
	
}
