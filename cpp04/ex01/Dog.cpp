#include "Dog.hpp"

//----- Constructor -----// 
Dog::Dog() : Animal(), _brain() {
    _type = "Dog";
	std::cout << "Constructor default de Dog llamado." << std::endl; 
}

Dog::Dog(const Dog& other) : Animal(other), _brain(other._brain) {
	std::cout << "Constructor por copia de Dog llamado." << std::endl;
}

//----- Assign operator -----//
Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        Animal::operator=(other);
        _brain = other._brain;
    }
    std::cout << "Operador de asignación ('=') de Dog llamado." << std::endl;
    return *this;
}

//----- Destructor -----//
Dog::~Dog() {
	std::cout << "Destructor de Dog llamado." << std::endl; 
}

//----- Member function -----//
void Dog::makeSound(void) const {
    std::cout << "Dog🐶: ¡Guau guau!" << std::endl;
}
