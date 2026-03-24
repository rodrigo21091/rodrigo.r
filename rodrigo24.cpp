#include <iostream>
#include <string>

using namespace std;

// Estructura de los productos
struct Producto {
    int id;
    string descripcion;
    int cantidad;
    float precio;
};

// Función para intercambiar los punteros durante el ordenamiento
void intercambiar(Producto* &a, Producto* &b) {
    Producto* temp = a;
    a = b;
    b = temp;
}

int main() {
    int n;

    cout << "--- GESTION DE INVENTARIO ---" << endl;
    cout << "Indique la cantidad de productos: ";
    cin >> n;

    Producto** inventario = new Producto*[n];

    // Entrada de datos
    for (int i = 0; i < n; i++) {
        inventario[i] = new Producto; // Reserva de memoria para cada producto

        cout << "\nProducto [" << i + 1 << "]" << endl;
        cout << "ID (Codigo): "; cin >> inventario[i]->id;
        cin.ignore(); 
        cout << "Descripcion: "; getline(cin, inventario[i]->descripcion);
        cout << "Cantidad: "; cin >> inventario[i]->cantidad;
        cout << "Precio: "; cin >> inventario[i]->precio;
    }
    
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (inventario[j]->descripcion > inventario[j + 1]->descripcion) {
                
                intercambiar(inventario[j], inventario[j + 1]);
            }
        }
    }

    
    cout << "\nLISTADO ORDENADO POR DESCRIPCION:" << endl;
    cout << "ID\tCANT\tPRECIO\tDESCRIPCION\t[DIRECCION RAM]" << endl;
    cout << "---------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++) {
        cout << inventario[i]->id << "\t" 
             << inventario[i]->cantidad << "\t" 
             << inventario[i]->precio << "\t" 
             << inventario[i]->descripcion << "\t[" 
             << inventario[i] << "]" << endl; 
    }

    
    for (int i = 0; i < n; i++) {
        delete inventario[i]; 
    }
    delete[] inventario; 

    cout << "\nMemoria liberada correctamente. Fin del programa." << endl;

    return 0;
}