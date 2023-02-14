#include <iostream>

int main(int argc, char *argv[]) {

	std::cout << "\n";
	
	for (int num = 1; num < argc; num++) {
		std::cout << num << ": " << argv[num] << "\n";
	}

	std::cout << "\n<------------>\n";
	std::cout << argc - 1 << " lines\n";
	std::cout << "<------------>\n\n";

	return 0;
}
