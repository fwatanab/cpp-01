#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}

	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ofstream	ofs(argv[1]);
	if (ofs.bad()) {
		std::cerr << "Error: Could not open file." << std::endl;
		ofs.close();
		return 1;
	}

	
	return 0;
}
