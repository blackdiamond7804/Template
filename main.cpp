#include <iostream>
#include "Operaciones.h"

int main() {
    Operaciones<int> opInt(20, 10);
    std::cout << "La suma de 20 y 10 es: " << opInt.getSuma() << std::endl;
    std::cout << "La resta de 20 y 10 es: " << opInt.getResta() << std::endl;
    std::cout << "La multiplicaci�n de 20 y 10 es: " << opInt.getMultiplicacion() << std::endl;
    std::cout << "La divisi�n de 20 y 10 es: " << opInt.getDivision() << std::endl;

    opInt.ordenar();
    std::cout << "Los n�meros ordenados de menor a mayor son: " << opInt.getSuma() << ", " << opInt.getResta() << std::endl;

    return 0;
}
