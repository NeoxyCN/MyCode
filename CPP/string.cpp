#include <iostream>
#include <cstring>
#include <string>

int main() {
	// C style
	char str[] = "HelloWorld";
	// H e l l o W o r l d \0
	// 0 1 2 3 4 5 6 7 8 9 10
	std::cout << str[10] << std::endl;

	char str1[] = "This is a message";
	//strcpy(str, str1);//Warning
	//std::cout << str << std::endl;

	// C++ style
	std::string string1 = "he";
	std::string string2 = "llo";
	std::string string3 = string1 + string2;
	std::cout << string3 << std::endl;
	
}
