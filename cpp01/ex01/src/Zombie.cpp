#include "Zombie.hpp"

Zombie::Zombie() 
{
}

Zombie::~Zombie() 
{
	std::cout << name << " is dead, again!" << std::endl;
}

void	Zombie::set_name(std::string _name)
{
	this->name = _name;
}

std::string Zombie::getNameZombie(void)
{
	return(name);
}

void Zombie::announcement(void)
{
	std::cout << name  << ": BraiiiiiiinnnzzzZ..." << std::endl;
}