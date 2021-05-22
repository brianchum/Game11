#include <iostream>
#ifndef COMP_H
#define COMP_H

class Comp {
    
    public:
        Comp();
        ~Comp();
        int setCompChoose(int temp_flags);
        int getCompChoose() const;

    private:
        int comp_choose;
};

#endif