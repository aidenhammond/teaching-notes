#include <iostream>
#include <vector>

int main() {
  
	// condition based
	for (int i = 0; i < 5; i++) {
		std::cout << "Hello World\n";
	}

	std::vector<int> v = {8, 4, 5, 9};


	// range based
	for (int i: v) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
      
	int i = 1;
  
	// while
	while (i <= 5) {
		std::cout << i << " ";
		i++;
	}
	std::cout << std::endl;

	i = 1;
  
	// do while
	do {
		std::cout << i << " ";
		i++;
	} while (i <= 5);
	std::cout << std::endl;

	return 0;
}
