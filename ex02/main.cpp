#include <iostream>
#include <string>

int	main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string	*strPTR = &str;
	std::string	&strREF = str;

	std::cout << "pointer : " << &str << std::endl;
	std::cout << "pointer : " << strPTR << std::endl;
	std::cout << "pointer : " << &strREF << std::endl;

	std::cout << "value : " << str << std::endl;
	std::cout << "value : " << *strPTR << std::endl;
	std::cout << "value : " << strREF << std::endl;
	return 0;
}
