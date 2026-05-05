//Insertar Lista Circular Doble (Mantiene el ciclo por ambos lados, eliminando la necesidad de buscar el final).

#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo *sig, *ant;
};

void insertarCircularDoble(Nodo*& inicio, int n) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = n;
    
    if (inicio == nullptr) {
        inicio = nuevo;
        inicio->sig = inicio;
        inicio->ant = inicio; // Todos los punteros vuelven a él mismo
    } else {
        /* DIFERENCIA: Usamos inicio->ant para llegar al último nodo sin recorrer.
           Conectamos el nuevo nodo con el último y con el inicio simultáneamente. */
        Nodo* ultimo = inicio->ant; 
        
        nuevo->sig = inicio;    // Nuevo apunta adelante al inicio
        nuevo->ant = ultimo;    // Nuevo apunta atrás al último
        ultimo->sig = nuevo;    // El viejo último apunta adelante al nuevo
        inicio->ant = nuevo;    // El inicio apunta atrás al nuevo (que es el nuevo último)
    }
    cout << "Insertado circular doble: " << n << endl;
}

int main() {
    Nodo* inicio = nullptr;
    insertarCircularDoble(inicio, 300);
    insertarCircularDoble(inicio, 400);
    return 0;
}