// Autor: Axel Molineros
// Fecha: 2024-06-16
// 4) Una función recibe como parámetro un entero que indica las filas de una figura.
// Adicionalmente, recibe como parámetro un string que indica el relleno de la figura a dibujar. 
// Por ejemplo, si filas es 4 y el relleno es '+', la figura sería:
// +
// ++
// +++
// ++++

#include <iostream>
#include <string>

void dibujarFigura(int filas, std::string relleno) {
    for (int i = 1; i <= filas; ++i) {
        // Crear una cadena con i veces el caracter de relleno
        std::string linea = std::string(i, relleno[0]);
        // Imprimir la línea
        std::cout << linea << std::endl;
    }
}

int main() {
    int filas;
    std::string relleno;

    // Solicitar al usuario que ingrese el número de filas
    std::cout << "Ingrese el número de filas: ";
    std::cin >> filas;

    // Solicitar al usuario que ingrese el caracter de relleno
    std::cout << "Ingrese el caracter de relleno: ";
    std::cin >> relleno;

    // Llamar a la función para dibujar la figura
    dibujarFigura(filas, relleno);

    return 0;
}
