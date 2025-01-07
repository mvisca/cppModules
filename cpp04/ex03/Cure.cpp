/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvisca <mvisca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:20:20 by mvisca            #+#    #+#             */
/*   Updated: 2025/01/07 13:01:32 by mvisca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
    : AMateria("cure") 
{
    // std::cout << "+ Cure llama a constructor _type de AMateria." << std::endl;
}

Cure::Cure(const Cure& other)
    : AMateria(other) 
{
    // std::cout << "+ Cure llama a constructor &other de AMateria." << std::endl;
}

Cure& Cure::operator=(const Cure& other) 
{
    if (this != &other) {
        AMateria::operator=(other);
        // std::cout << "= Cure materia assigned." << std::endl;
    }
    return *this;
}

Cure::~Cure() 
{
    // std::cout << "- Cure destructor llamado." << std::endl;
}

AMateria* Cure::clone() const
{
    // std::cout << "! Clone Cure llamado." << std::endl;
    return new Cure(*this);
}

void Cure::use(ICharacter& target) 
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}