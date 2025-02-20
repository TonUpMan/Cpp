#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:
        FragTrap(void);
        FragTrap(std::string & name);
        FragTrap(FragTrap & cpy);
        ~FragTrap();
        FragTrap & operator=(const FragTrap & cpy);

        void    attack(const std::string &target);
        void    highFivesGuys(void);
};

#endif