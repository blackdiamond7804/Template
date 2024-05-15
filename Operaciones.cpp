#include "Operaciones.h"
#include <algorithm>
#include <iostream>

template <typename T>
Operaciones<T>::Operaciones(T a, T b) : a(a), b(b) {}

template <typename T>
T Operaciones<T>::getSuma() {
    return a + b;
}

template <typename T>
T Operaciones<T>::getResta() {
    return a - b;
}

template <typename T>
T Operaciones<T>::getMultiplicacion() {
    return a * b;
}

template <typename T>
T Operaciones<T>::getDivision() {
    if (b != 0) {
        return a / b;
    }
    else {
        std::cout << "Error: División por cero." << std::endl;
        return 0;
    }
}

template <typename T>
void Operaciones<T>::ordenar() {
    if (a > b) {
        std::swap(a, b);
    }
}

// Explicit instantiation
template class Operaciones<int>;