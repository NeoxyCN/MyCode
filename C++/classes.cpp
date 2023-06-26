#include <iostream>

class Square
{
public:
	double length;
	double height;

	double get(void);
};

double Square::get()
{
	return (length * height);
}

int main()
{
	Square box;
	box.height = 100.2;
	box.length = 20.5;
	double result = box.get();
	std::cout << result << std::endl;
}
