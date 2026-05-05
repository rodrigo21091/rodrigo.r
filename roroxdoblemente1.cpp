//Insertar Lista Doblemente Enlazada (El nodo actual debe reconocer al nuevo que llegó atrás).

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo *sig, *ant; // Dos punteros: adelante y atrás
};

void insertarDoble(Nodo*& lista, int n) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = n;
    nuevo->sig = lista; // Conecta hacia adelante
    nuevo->ant = nullptr; // Al insertar al inicio, no hay nadie antes
    
    /* DIFERENCIA: Si la lista ya tenía nodos, debemos decirle al 
       nodo que antes era el primero que ahora su "anterior" es el nuevo. */
    if (lista != nullptr) {
        lista->ant = nuevo; 
    }
    
    lista = nuevo;
    cout << "Insertado doble: " << n << endl;
}

int main() {
    Nodo* lista = nullptr;
    insertarDoble(lista, 50);
    insertarDoble(lista, 100);
    return 0;
}