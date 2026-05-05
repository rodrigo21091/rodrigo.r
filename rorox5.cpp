// Insertar Lista Simplemente Enlazada (Solo mira adelante).

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente; // Solo un puntero hacia adelante
};

void insertar(Nodo*& lista, int n) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = n;
    /* DIFERENCIA: Solo conectamos el nuevo nodo con el actual inicio.
       Es lineal y el último siempre apuntará a NULL. */
    nuevo->siguiente = lista; 
    lista = nuevo;
    cout << "Insertado: " << n << endl;
}

int main() {
    Nodo* lista = nullptr;
    insertar(lista, 10);
    insertar(lista, 20);
    return 0;
}