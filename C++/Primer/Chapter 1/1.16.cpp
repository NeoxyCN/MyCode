#include <iostream>

#define var auto

int main(){
	var input=0,i=0;
	while(std::cin>>input){
		i+=input;
	}
	std::cout<<i<<std::endl;
	return 0;
}
