#include "FragTrap.hpp"

//------- CONSTRUCTORS -------//
FragTrap::FragTrap()
	: ClapTrap()
{
	setLife(100);
	setEnergy(50);
	setEnergy(30);
	std::cout << "Constructor default de FragTrap llamado." << std::endl;
}

FragTrap::FragTrap(const std::string& name)
	: ClapTrap(name, 100, 100, 30)
{
	std::cout << "Constructor con parámetro 'name' de FragTrap llamado." << std::endl;
}

// Copia
FragTrap::FragTrap(const FragTrap& other)
{
	if (this != &other)
	{
		setName(other.getName());
		setLife(other.getLife());
		setEnergy(other.getEnergy());
		setAttack(other.getAttack());
		std::cout << "Constructor por copia de FragTrap llamado." << std::endl;

	}
}

//------- FUNCTIONS -------//
void FragTrap::attack(const std::string& target)
{
	if (getEnergy() < 1)
	{
		std::cout << "FragTrap " << getName() << " no tiene suficiente energía para atacar." << std::endl;
		return;
	} else if (getLife() < 1) {
		std::cout << "FragTrap " << getName() << " no puede atacar porque ha sido derrotado." << std::endl;
		return;
	}
	std::cout << "¡FragTrap " << getName() << " ataca a " << target << ", causando " << getAttack() << " puntos de daño!" << std::endl;
	int temp = getEnergy();
	setEnergy(temp - 1);
}

void FragTrap::highFivesGuys(void) {
     std::cout << "¡FragTrap " << getName() << " está pidiendo un High Five!" << std::endl;
}

//------- DESTRUCTOR -------//
FragTrap::~FragTrap() {
	std::cout << "Destructor de FragTrap llamado para " << getName() << "." << std::endl;
}