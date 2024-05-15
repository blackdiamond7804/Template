#pragma once
#ifndef OPERACIONES_H
#define OPERACIONES_H

template <typename T>
class Operaciones {
public:
    Operaciones(T a, T b);
    T getSuma();
    T getResta();
    T getMultiplicacion();
    T getDivision();
    void ordenar();
private:
    T a, b;
};

#endif // OPERACIONES_H