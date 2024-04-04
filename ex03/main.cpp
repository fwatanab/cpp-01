#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main() {
	Weapon	AR("Flatline");
	Weapon	SG("Peacekeeper");

	HumanA	hal("Hal", AR);
	hal.attack();

	HumanB	jen("Jen");
	jen.attack();

	AR.setType("R-301");
	hal.attack();

	jen.setWeapon(SG);
	jen.attack();

	SG.setType("Mastiff");
	jen.attack();
	return 0;
}
