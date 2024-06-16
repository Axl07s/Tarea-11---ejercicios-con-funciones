// Autor: Axel Molineros
// Fecha: 2024-06-16
// 3) Diseñe la función que calcule el resultado de la ecuación cuadrática.
// Utilicé la actividad #10 como guía.
// Solo que está función debe retornar un string en lugar de un booleano
// como se muestra a continuación:
//  Cuando a vale 0, debe devolver "Error, división por cero"
// Cuando el discriminante es negativo
// debe devolver "No se puede calcular la raíz cuadrada de un número negativo"
// Si la ecuación no tiene errores, debe devolver "Correcto". 
// Además, los resultados x1 y  x2 se devuelven como referencias
// (tal como el ejercicio de la actividad #10).

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string EcuacionCuadratica(double a, double b, double c, double& x1, double& x2) {
    // Verificar si a es 0
    if (a == 0) {
        return "Error, división por cero";
    }

    // Calcular el discriminante
    double discriminante = b * b - 4 * a * c;

    // Verificar si el discriminante es negativo
    if (discriminante < 0) {
        return "No se puede calcular la raíz cuadrada de un número negativo";
    }

    // Calcular las dos raíces
    x1 = (-b + sqrt(discriminante)) / (2 * a);
    x2 = (-b - sqrt(discriminante)) / (2 * a);

    return "Correcto";
}

int main() {
    double a, b, c;
    double x1, x2;

    cout << "Ingrese los coeficientes a, b, y c de la ecuacion cuadratica: ";
    cin >> a >> b >> c;

    string resultado = EcuacionCuadratica(a, b, c, x1, x2);
    if (resultado == "Correcto") {
        cout << "Las raices de la ecuacion son: x1 = " << x1 << " y x2 = " << x2 << endl;
    } else {
        cout << resultado << endl;
    }

    return 0;
}

