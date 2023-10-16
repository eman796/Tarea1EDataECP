#include <iostream>
#include "Lista.h"

int main() {
    Lista lista;
    int opcion;
    int valor;
    while (opcion != 6) {
        std::cout << "Ingrese una opcion:\n"
                     "1.  Ãgregar al inicio de la lista\n"
                     "2.  Ãgregar al final de la lista\n"
                     "3.  Eliminar el primer elemento de la lista\n"
                     "4.  Eliminar el ultimo elemento de la lista\n"
                     "5.  Mostrar la lista\n"
                     "6. Salir \n";
        std::cin >> opcion;
        switch (opcion) {
            case 1:
                std::cout << "Ingrese el valor a agregar: ";
                std::cin >> valor;
                lista.AgregarAlInicio(valor);
                break;
            case 2:
                std::cout << "Ingrese el valor a agregar: ";
                std::cin >> valor;
                lista.AgregarAlFinal(valor);
                break;
            case 3:
                lista.EliminarAlInicio();
                break;
            case 4:
                lista.EliminarAlFinal();
                break;
            case 5:
                lista.lista();
                break;
            case 6:
                break;
            default:
                std::cout << "Opcion incorrecta";
                break;
        }
    }
    return 0;
}