#ifndef __LISTA_H__
#define __LISTA_H__

#include <iostream>

using namespace std;

template<typename T, int MAX>

class lista {
private:
    T Datos[MAX];
    int Tam;
    int ultimo;
public:
    lista();
    void Inicializa(T dato, int ultimo);
    void Inserta(T dato, int posicion);
    void Agrega(T dato);
    void Busca(T dato);
    void Elimina(int posicion);
    T recupera(int posicion);
    bool Vacia() const;
    bool Llena() const;
    void Muestra();

    int ultimo_() const;
};

template<typename T, int MAX>
lista<T, MAX>::lista() : Tam(MAX), ultimo(-1) {
}

template<typename T, int MAX>
void lista<T, MAX>::Inserta(T dato, int posicion)
{
    if(Llena() || posicion < 0 || posicion > ultimo + 1) {
        std::cout << "\nError de insercion";
    } else {
        int i = ultimo + 1;
        while(i > posicion) {
            Datos[i] = Datos[i - 1];
            i--;
        }
        Datos[posicion] = dato;
        ultimo++;
        std::cout << "\nElemento insertado";
    }
}

template<typename T, int MAX>
void lista<T, MAX>::Agrega(T dato)
{
     if (Llena()) {
        cout << "No se pudo agregar el empleado porque la lista esta llena." << endl;
    } else {
        Datos[++ultimo] = dato;
        cout << "Empleado agregado exitosamente." << endl;
    }
}

template<typename T, int MAX>
void lista<T, MAX>::Busca(T dato)
{
    bool encontrado = false;
    for (int i = 0; i <= ultimo; ++i) {
        if (Datos[i] == dato) {
            encontrado = true;
            cout << "El elemento " << dato << " se encontro en la posicion " << i << "." << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "El elemento " << dato << " no se encontro en la lista." << endl;
    }
}

template<typename T, int MAX>
void lista<T, MAX>::Elimina(int posicion)
{
    if(Vacia() || posicion < 0 || posicion > ultimo) {
        cout << "Error de eliminacion";
    } else {
        int i = posicion;
        while(i < ultimo) {
            Datos[i] = Datos[i + 1];
            i++;
        }
        ultimo--;
        cout << "Elemento eliminado";
    }
}

template<typename T, int MAX>
T lista<T, MAX>::recupera(int posicion)
{
    if(Vacia() || posicion < 0 || posicion > ultimo) {
        cout << "\nInsuficiencia datos";
        return T();
    } else {
        return Datos[posicion];
    }
}

template<typename T, int MAX>
bool lista<T, MAX>::Vacia() const
{
    if(ultimo==-1)
        return true;
    return false;
}

template<typename T, int MAX>
bool lista<T, MAX>::Llena() const
{
    return (ultimo == Tam - 1);
}

template<typename T, int MAX>
void lista<T, MAX>::Muestra()
{
    if (Vacia()) {
        std::cout << "La lista esta vacia." << std::endl;
        return;
    }
    cout << endl;
    std::cout << "Elementos de la lista:" << std::endl;
    for (int i = 0; i <= ultimo; ++i) {
        cout << "Elemento #" << i << ":  "<< endl;
        cout << Datos[i] << endl;
    }
}

template<typename T, int MAX>
int lista<T, MAX>::ultimo_() const
{
    return ultimo;
}

#endif // __LISTA_H__