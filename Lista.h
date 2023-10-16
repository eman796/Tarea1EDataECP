//
// Created by emanu on 11/10/2023.
//

#include <cstring>
#include <iostream>

class Lista {

    struct Nodo *Anterior,*Medio, *Siguiente;// Declaramos la estructura de la lista.
    public:
    Lista();// Esta es la declaracion del constructor de la clase Lista.
    ~Lista();//Esta  es la declaracion del destructor de la clase Lista.
    void AgregarAlInicio(int dato);// Metodo AgregarAlInicio de la clase Lista.
    void AgregarAlFinal(int dato);//  Metodo AgregarAlFinal de la clase Lista.
    void EliminarAlInicio();// Metodo EliminarAlInicio de la clase Lista.
    void EliminarAlFinal();// Metodo EliminarAlFinal de la clase Lista.
    void lista();// Metodo lista de la clase Lista.
};
Lista::Lista() {// Constructor

}
Lista::~Lista() {// Destructor

}
struct Nodo {// Esto lo que hace es almacenar valores
    int dato; //Almacena el dato actual
    struct Nodo *siguiente;} ;//Almacena el siguiente dato
struct Nodo *primero,*Auxiliar, *ultimo,*Aux2;// Estructura noda
void Lista::AgregarAlInicio(int dato) {
    Auxiliar=new Nodo;// Crea un nuevo nodo , almacenando  el dato en Auxiliar
    Auxiliar->dato=dato;//Asigna el valor "dato" al campo "dato" del nuevo modo
    Auxiliar->siguiente=primero;// El campo siguiente apuntará al primer nodo de la lista
    primero=Auxiliar;//El primer nodo de la lista es asignado al nodo Auxiliar
}
void Lista::AgregarAlFinal(int dato) {

    Auxiliar = new (Nodo);
    Auxiliar->dato = dato;
    Auxiliar->siguiente = ultimo;
    primero = Auxiliar;
}
void Lista::EliminarAlFinal() {
    if (primero == NULL) {
        std::cout << "No hay datos en la lista" << std::endl;
    } else {
        if (Auxiliar == primero) {
            if (Auxiliar == primero) {
                delete primero;
                ultimo = NULL;
                ultimo = NULL;
                std::cout << "Adios valor de la última posicion";
            } else {
                delete ultimo;
                ultimo = Aux2;
                ultimo->siguiente = NULL;
                std::cout << "Este es el último valor eliminado" << std::endl;
                Aux2 = Auxiliar;
                Auxiliar = Auxiliar->siguiente;
            }

        }
        Auxiliar = primero->siguiente;
        delete primero;
        primero = Auxiliar;
        std::cout << "Se va a eliminar el dato #1 de la lista";
        return;
    }
}
void Lista::EliminarAlInicio() {
    if (ultimo == NULL) {
        std::cout << "No hay datos en la lista" << std::endl;
    } else {
        if (Auxiliar == ultimo) {
            if(Auxiliar==ultimo) {
                delete ultimo;
                ultimo = NULL;
                ultimo = NULL;
                std::cout << "Adios valor de la última posicion";
            }else {
                delete ultimo;
                ultimo = Aux2;
                ultimo->siguiente = NULL;
                std::cout << "Este es el último valor eliminado" << std::endl;
                Aux2 = Auxiliar;
                Auxiliar = Auxiliar->siguiente;
            }

        }
        Auxiliar = ultimo->siguiente;
        delete ultimo;
        ultimo = Auxiliar;
        std::cout << "Se va a eliminar el dato #1 de la lista";
        return;
    }


    Auxiliar = ultimo->siguiente;
}



void Lista::lista() {
    if (primero == NULL) { // Si el primer dato no existe, la lista está vacía.
        std::cout << "No hay datos en la lista" << std::endl;
    } else {
        Auxiliar = primero;
        while (Auxiliar != NULL) {//Mientras el dato auxiliar no este nulo
            std::cout << "Elemento: " << Auxiliar->dato << std::endl;//Se imprimen los elementos
            Auxiliar = Auxiliar->siguiente;//
        }
    }
}




