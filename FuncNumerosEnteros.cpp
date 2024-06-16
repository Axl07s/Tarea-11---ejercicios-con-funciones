// Autor: Axel Molineros
// Fecha: 2024-06-16
// 5) Una función recibe 3 números enteros.
// La función devuelve verdadero si uno de esos números es la suma de los otros 2.
#include <iostream>

bool esSumaDeOtrosDos(int num1, int num2, int num3) {
    return (num1 == num2 + num3) || (num2 == num1 + num3) || (num3 == num1 + num2);
}

int main() {
    int numero1, numero2, numero3;

    // Solicitar al usuario que ingrese los tres números enteros
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;
    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;
    std::cout << "Ingrese el tercer numero: ";
    std::cin >> numero3;

    // Verificar si alguno de los números es la suma de los otros dos
    if (esSumaDeOtrosDos(numero1, numero2, numero3)) {
        std::cout << "Verdadero: Uno de los numeros es la suma de los otros dos." << std::endl;
    } else {
        std::cout << "Falso: Ningun numero es la suma de los otros dos." << std::endl;
    }

    return 0;
}  