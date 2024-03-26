#include "Zombie.hpp"

Zombie::Zombie(std::string str) : name(str) {
}

Zombie::~Zombie() {
	std::cout << name << ": destruct" << std::endl;
}

void	Zombie::announce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name) {
	return new	Zombie(name);
}

void	randomChump(std::string name) {
	Zombie	zom(name);
	zom.announce();
}
