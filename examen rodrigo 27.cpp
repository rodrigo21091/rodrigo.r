#include <iostream>
#include <string>

using namespace std;

struct Producto {
    int id;
    string descripcion;
    int cantidad;
    float precio;
};


void intercambiar(Producto* &a, Producto* &b) {
    Producto* temp = a;
    a = b;
    b = temp;
}

int main() {
    int maxProductos, totalActual = 0;

    cout << "--- CONFIGURACION INICIAL ---" << endl;
    cout << "Capacidad maxima del inventario: ";
    cin >> maxProductos;

    
    Producto** inventario = new Producto*[maxProductos];

    int opcion;
    do {
        cout << "\n--- MENU GESTION DE INVENTARIO ---" << endl;
        cout << "1. Agregar Producto" << endl;
        cout << "2. Eliminar Producto por ID" << endl;
        cout << "3. Ordenar y Listar (por Descripcion)" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: 
                if (totalActual < maxProductos) {
                    inventario[totalActual] = new Producto;
                    cout << "\nNuevo Producto [" << totalActual + 1 << "]" << endl;
                    cout << "ID (Codigo): "; cin >> inventario[totalActual]->id;
                    cin.ignore(); 
                    cout << "Descripcion: "; getline(cin, inventario[totalActual]->descripcion);
                    cout << "Cantidad: "; cin >> inventario[totalActual]->cantidad;
                    cout << "Precio: "; cin >> inventario[totalActual]->precio;
                    totalActual++;
                } else {
                    cout << "\nError: Inventario lleno." << endl;
                }
                break;

            case 2: 
                if (totalActual == 0) {
                    cout << "\nInventario vacio." << endl;
                } else {
                    int idEliminar;
                    bool encontrado = false;
                    cout << "Ingrese el ID del producto a eliminar: ";
                    cin >> idEliminar;

                    for (int i = 0; i < totalActual; i++) {
                        if (inventario[i]-> id == idEliminar) {
                            delete inventario[i]; 
                            
                            
                            for (int j = i; j < totalActual - 1; j++) {
                                inventario[j] = inventario[j + 1];
                            }
                            
                            totalActual--;
                            encontrado = true;
                            cout << "Producto eliminado con exito." << endl;
                            break;
                        }
                    }
                    if (!encontrado) cout << "ID no encontrado." << endl;
                }
                break;

            case 3: 
                if (totalActual == 0) {
                    cout << "\nNo hay productos para mostrar." << endl;
                    break;
                }
                
                for (int i = 0; i < totalActual - 1; i++) {
                    for (int j = 0; j < totalActual - i - 1; j++) {
                        if (inventario[j]->descripcion > inventario[j + 1]->descripcion) {
                            intercambiar(inventario[j], inventario[j + 1]);
                        }
                    }
                }

                cout << "\nLISTADO ACTUALIZADO:" << endl;
                cout << "ID\tCANT\tPRECIO\tDESCRIPCION\t[DIR. RAM]" << endl;
                for (int i = 0; i < totalActual; i++) {
                    cout << inventario[i]->id << "\t" 
                         << inventario[i]->cantidad << "\t" 
                         << inventario[i]->precio << "\t" 
                         << inventario[i]->descripcion << "\t[" 
                         << inventario[i] << "]" << endl;
                }
                break;

            case 4:
                cout << "Saliendo..." << endl;
                break;

            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 4);

   
    for (int i = 0; i < totalActual; i++) {
        delete inventario[i];
    }
    delete[] inventario;

    cout << "\nMemoria liberada. Fin del programa." << endl;
    return 0;
}