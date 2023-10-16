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
    if(ultimo==NULL) {//Comprueba si existe el ultimo elemento de la lista. De ser así, se pasa al else, pero si la lista esta vacia, salta este mensaje
        std::cout<<"No se puede agregar al final de una lista vacia"<<std::endl;
    }
    else {//No voy a comentar nada aqui, ya que es lo mismo que las lineas 31 a 34
        Auxiliar = new (Nodo);
        Auxiliar->dato = dato;
        ultimo->siguiente = Auxiliar;
        primero = Auxiliar;
    }
    primero->siguiente=NULL;//Hace que el primer nodo del primer nodo sea nulo
}
void Lista::EliminarAlFinal() {
    if (primero == NULL) {//Linea 37
        std::cout << "No se puede eliminar al inicio de una lista vacia" << std::endl;
    } else {
        if (Auxiliar == ultimo) {//Si mel puntero auxiliar es igual al ultimo
            if (Auxiliar == primero) {// Si mel puntero auxiliar es igual al primero
                delete primero;// Elimina el primer nodo de la lista
                primero = NULL;// Hace que el primer nodo del primer nodo sea nulo
                ultimo = NULL;// Hace que el ultimo nodo del primer nodo sea nulo
                std::cout << "valor eliminado en la ultima posicion";
            } else {//Si el dato auxiliar no es el primero

                delete ultimo;// Elimina el ultimo dato de la lista
                ultimo = Aux2;//El ultimo valor se asigna al dato auxiliar
                ultimo->siguiente = NULL;// Hace que el ultimo nodo del ultimo nodo sea nulo
                std::cout << "Valor de la ultima posicion eliminada";
            }
        }
    }
}
void Lista::EliminarAlInicio() {
    if (primero == NULL) {//Linea 37
        std::cout << "Antes de eliminar algun dato, debe haber un dato, estúpido" << std::endl;
    } else {//Si el primer nodo no es nulo
        if (Auxiliar == primero) {// Si el puntero auxiliar es igual al primero
                delete primero;// Elimina el primer nodo de la lista
                primero = NULL;// Hace que el primer nodo del primer nodo sea nulo
                ultimo = NULL;// Hace que el ultimo nodo del primer nodo sea nulo
                std::cout << "valor eliminado en la primera posicion";
            } else {// Si el dato auxiliar no es el primero
                delete ultimo;// Elimina el ultimo dato de la lista
                ultimo = Aux2;// El ultimo valor se asigna al dato auxiliar2
                ultimo->siguiente = NULL;// Hace que el ultimo nodo del ultimo nodo sea nulo
                std::cout << "Valor de la ultima posicion eliminada";
            }
        }
    }
void Lista::lista() {
    if (primero == NULL) { // Si el primer dato no existe, la lista está vacía.
        std::cout << "No hay datos en la lista" << std::endl;
    } else {
        Auxiliar = primero;
        std::cout << "Este es el primer elemento de la lista: " << Auxiliar->dato << std::endl;
        while (Auxiliar != NULL) {
            if (Auxiliar->siguiente == NULL) {
                std::cout << "Este es el último elemento de la lista: " << Auxiliar->dato << std::endl;
            }
            Auxiliar = Auxiliar->siguiente;
        }
    }
}



