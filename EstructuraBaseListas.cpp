#include <iostream>
using namespace std;

template <typename T>
struct Nodo {
    T dato;
    Nodo<T>* siguiente;
    
    Nodo(T valor) : dato(valor), siguiente(nullptr) {}
};

friend ostream& operator<<(ostream& os, const Lista<T>& lis>
        Node<T>* actual = lista.head;
        os << "[ ";
        while (actual) {
            os << actual->data << " ";
            actual = actual->next;
        }
        os << "]";
        return os;
    }
