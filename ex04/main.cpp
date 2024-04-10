#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv) {

	if (argc != 4) {
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}

	std::string	fileName = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];

	std::ifstream	ifs(fileName.c_str());
	if (!ifs) {
		std::cerr << "Error: Could not open file for reading." << std::endl;
		return 1;
	}

	std::string	newFileName = fileName + ".replace";
	std::ofstream	ofs(newFileName.c_str());
	if (!ofs) {
		std::cerr << "Error: Could not open file for writing." << std::endl;
		return 1;
	}

	std::string	line;
	while (getline(ifs, line)) {
		std::string	newLine;
		std::size_t	pos = 0;
		std::size_t	foundPos;
		while ((foundPos = line.find(s1, pos)) != std::string::npos) {
			newLine += line.substr(pos, foundPos - pos) + s2;
			pos = foundPos + s1.length();
		}
		newLine += line.substr(pos);
		ofs << newLine << '\n';
	}
	ifs.close();
	ofs.close();

	return 0;
}
