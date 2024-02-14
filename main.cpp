#include <iostream>
#include "lista.hpp"
#include "empleado.hpp"

using namespace std;

int main() {
    lista<empleado, 1> miLista;

    int opcion;
    do {
        system("cls");
        cout << "----- MENU -----" << endl;
        cout << "1. Agregar" << endl;
        cout << "2. Buscar" << endl;
        cout << "3. Eliminar" << endl;
        cout << "4. Insertar" << endl;
        cout << "5. Mostrar" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                {
                    if (miLista.Llena()) {
                        cout << "La lista esta llena." << endl;
                        break;
                    }else{
                        empleado nuevoEmpleado;
                        cout << "Ingresa los datos del empleado:" << endl;
                        cin >> nuevoEmpleado;
                        miLista.Agrega(nuevoEmpleado);
                    }
                }
                break;
            case 2:
                {
                    if (miLista.Vacia()) {
                        cout << "La lista esta vacia." << endl;
                        break;
                    }
                    else{
                        empleado empleadoBuscar;
                        cout << "Ingresa al empleado a buscar: ";
                        cin>>empleadoBuscar;
                        miLista.Busca(empleadoBuscar);
                    }
                }
                break;
            case 3:
                {
                    if (miLista.Vacia()) {
                        cout << "La lista esta vacia." << endl;
                        break;
                    }else{
                        int pos;
                    empleado empleadoEliminar;
                    cout << "Ingresa la posicion del empleado que quieras eliminar: ";
                    cin>>pos;
                    miLista.Elimina(pos);
                    }
                }
                break;
            case 4:
                {
                    if (miLista.Llena()) {
                        cout << "La lista esta llena." << endl;
                        break;
                    }else{
                        int pos;
                        empleado empleadoInserta;
                        cout << "Ingresa el empleado: " << endl;
                        cin>>empleadoInserta;
                        cout << "Ingresa la posicion a insertar: ";
                        cin >> pos;
                        miLista.Inserta(empleadoInserta, pos);
                    }
                }
                break;
            case 5:
                miLista.Muestra();
                break;
            case 6:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, ingrese una opcion valida." << endl;
                break;
        }
        system("PAUSE");
    } while (opcion != 6);

    return 0;
}
