//
// Created by itsre on 26/03/2023.
//

#ifndef PROJECT_OOP_ACUATICO_H
#define PROJECT_OOP_ACUATICO_H
#include "Habitat.h"

class Acuatico : public Habitat{
private:
    int cantidadDeCorales;
    float profundidadDelAgua;
public:
    Acuatico() = default;
    Acuatico(int tamanio, float profundidad, int corales);
    void mostrarDetalles();
};


#endif //PROJECT_OOP_ACUATICO_H