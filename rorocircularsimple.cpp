//Insertar Lista Circular Simple (Mantiene el ciclo vivo).

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* sig;
};

void insertarCircular(Nodo*& cola, int n) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = n;
    
    if (cola == nullptr) {
        cola = nuevo;
        cola->sig = cola; // Se apunta a sí mismo para cerrar el círculo
    } else {
        /* DIFERENCIA: El nuevo nodo se mete entre la cola y el inicio.
           nuevo->sig apunta al primer nodo (cola->sig).
           Luego la cola apunta al nuevo. */
        nuevo->sig = cola->sig; 
        cola->sig = nuevo;
        cola = nuevo; // Movemos el puntero cola al nuevo nodo final
    }
    cout << "Insertado circular: " << n << endl;
}

int main() {
    Nodo* cola = nullptr;
    insertarCircular(cola, 1);
    insertarCircular(cola, 2);
    return 0;
}