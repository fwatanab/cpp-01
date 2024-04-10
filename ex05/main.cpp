#include "Harl.hpp"

int	main() {
	Harl	harl;
	std::string	level[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		harl.complain(level[i]);
		std::cout << std::endl;
	}
	return 0;
}
