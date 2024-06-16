// Autor: Axel Molineros
// Fecha: 2024-06-16
// 2) Diseña la función que imprima las 52 cartas de un mazo de naipes.
// (Parcialmente realizado en clases)
// La función recibe como parámetro un entero que representa el número de la carta
// y también recibe una cadena(string) que representa el tipo o símbolo de la carta.

#include <iostream>
using namespace std;

void ImprCartas(int cartas, string simbolo){
    if(cartas==1 && simbolo=="brillo"){
        cout<<"╔═════════════╗"<<endl;
        cout<<"║             ║"<<endl;
        cout<<"║             ║"<<endl;
        cout<<"║      A♦     ║"<<endl;
        cout<<"║             ║"<<endl;
        cout<<"║             ║"<<endl;
        cout<<"╚═════════════╝"<<endl;

    }
    else if (cartas == 111 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "brillo") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "brillo") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "brillo") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 1 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    // Agrega condiciones para las cartas de "picas"
    else if (cartas == 3 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "picas") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "picas") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "picas") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 1 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
        else if (cartas == 10 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "corazones") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "corazones") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "corazones") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 1 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "trebol") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "trebol") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "trebol") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else {
        cout << "La carta o simbolo que ingresaste no es correcto" << endl;
    }
}

int main() {
    cout << endl;
    ImprCartas(1, "brillo");
    ImprCartas(2, "picas");
    ImprCartas(3, "corazones");
    ImprCartas(4, "trebol");
    return 0;
}