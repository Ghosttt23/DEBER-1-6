#include <iostream>
#include "ListaDobleCircular.h"

using namespace std;

int main() {
    ListaDobleCircular<int> lista;

    // Pruebas de insercion
    lista.insertarAlFinal(20);
    lista.insertarAlFinal(30);
    lista.insertarAlFinal(40);
    lista.insertarAlInicio(10);

    cout << "ESTADO INICIAL" << endl;
    lista.imprimir();
    cout << "Tamanio: " << lista.getTamanio() << endl;

    cout << "\nBUSCANDO EL 30" << endl;
    Nodo<int>* encontrado = lista.buscar(30);
    if (encontrado != nullptr)
        cout << "Elemento " << encontrado->getDato() << " encontrado." << endl;
    else
        cout << "Elemento no encontrado." << endl;

    cout << "\nELIMINANDO UN VALOR EN MEDIO (20)" << endl;
    lista.eliminar(20);
    lista.imprimir();

    cout << "\nELIMINANDO LA CABEZA (10)" << endl;
    lista.eliminar(10);
    lista.imprimir();

    cout << "\nELIMINANDO UN VALOR QUE NO EXISTE (99)" << endl;
    lista.eliminar(99);

    cout << "\nPRUEBA CON OTRO TIPO (string)" << endl;
    ListaDobleCircular<string> nombres;
    nombres.insertarAlFinal("Ana");
    nombres.insertarAlInicio("Luis");
    nombres.imprimir();

    cout << "\nOBTENER EN POSICION" << endl;
    ListaDobleCircular<int> nums;
    nums.insertarAlFinal(10);
    nums.insertarAlFinal(20);
    nums.insertarAlFinal(30);
    nums.insertarAlFinal(40);
    nums.insertarAlFinal(50);
    nums.imprimir();
    for (int i = 0; i < nums.getTamanio(); i++)
        cout << "Posicion " << i << ": " << nums.obtenerEnPosicion(i) << endl;

    try {
        nums.obtenerEnPosicion(7);
    } catch (out_of_range& e) {
        cout << "Posicion 7: " << e.what() << endl;
    }

    return 0;
}
