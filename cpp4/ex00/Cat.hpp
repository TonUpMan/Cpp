#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

    public:
        Cat(void);
        Cat(const Cat & cpy);
        virtual ~Cat();
        Cat & operator=(Cat const & cpy);
        
        std::string     getType(void) const;
        virtual void    makeSound(void) const; 
};

#endif