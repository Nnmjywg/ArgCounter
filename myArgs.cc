#include <iostream>

int main(int argc, char *argv[])
{
	std::cout << "There are " argc " arguments" << std::endl;
	for (int count = 0; count < argc; ++count) {
		std::cout << count << argv[count] << std::endl;
	}
	return 0;
}
