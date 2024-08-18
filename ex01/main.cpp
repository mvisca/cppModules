#include "GlobalHeader.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main(void) {

	bool		isEsp = true;
	PhoneBook	phoneBook;
	std::string	option;

	displayTitle();

	for (bool execution = true; execution;) {

		option = displayMenuGetValue(isEsp);
		option = toUppercase(option);

		if (option == "EXIT") {
			if (isEsp)
				std::cout << "Saliendo de PhoneBook!\n";
			else
				std::cout << "Leaving PhoneBook!\n";
			execution = false;
		}

		else if (option == "ADD") {
			displayTitle();
			if (isEsp)
				std::cout << "Agregando Contacto\n";
			else {
				std::cout << "Adding Contact\n";
			}
			inputContact(phoneBook, isEsp);
		}

		else if (option == "SEARCH") {
			displayTitle();
			if (isEsp)
				std::cout << "Buscando Contacto\n";
			else
				std::cout << "Searching Contact\n";
			// Función de SEARCH
		}

		else if (option == "ENG" && isEsp)
		{
			isEsp = false;
			displayTitle();
			std::cout << "Switch to English\n";
		}

		else if (option == "ESP" && !isEsp)
		{
			isEsp = true;
			displayTitle();
			std::cout << "Cambio a Español\n";
		}
		else {
			displayTitle();
			if (isEsp)
				std::cout << "Comando inválido\n";
			else	
				std::cout << "Invalid command\n";
		}

		for (int i = 0; i < phoneBook.getContactsCount(); i++) {
			std::cout << "Nombre: " << phoneBook.getIndexContacts(i).getFirstName();

		}
	}	
	return (0);
}