#include <stdio.h>

#include "Sales_item.h"

int main(){
	Sales_item item,item2;
	
	while(std::cin>>item){
		item2+=item;
	}
	std::cout<<item2<<std::endl;
	return 0;
}
