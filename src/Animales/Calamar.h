//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_CALAMAR_H
#define PROJECT_OOP_CALAMAR_H

#include "Animal.h"

class Calamar : public Animal{
public:
    Calamar() = default;
    void accion() override;
    std::string getEspecie() override;
};


#endif //PROJECT_OOP_CALAMAR_H
