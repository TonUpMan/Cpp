#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain{

    public :
        Brain();
        Brain(const Brain & cpy);
        ~Brain();
        Brain & operator=(Brain const & cpy);

        std::string getIdeas(int i) const;
        void        setIdea(std::string idea, int index);
    
    private :
        std::string ideas[100];
};

#endif