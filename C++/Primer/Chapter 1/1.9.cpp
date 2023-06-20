#include <iostream>

int main(){
	int i=0,sum=0,start=50;
	
	//50
	while(i<51){
		sum+=start;
		++start;
		++i;
	}
	std::cout<<sum<<std::endl;
}
