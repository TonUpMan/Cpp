#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap    bob("bob");
    ScavTrap    roger("roger");
    
    bob.attack("roger");
    roger.takeDamage(0);
    roger.attack("bob");
    bob.takeDamage(20);
    roger.guardGate();

}