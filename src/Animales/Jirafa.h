//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_JIRAFA_H
#define PROJECT_OOP_JIRAFA_H
#include "Animal.h"

class Jirafa: public Animal {
public:
    Jirafa() = default;
    void accion() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_JIRAFA_H
