#include "linkedlist.cpp"
#include "point.h"


int main()
{
    LinkedList<int> *lista = new LinkedList<int>;
    int au = 0;
    int au2 = 0;
    bool c = false;
    std::cout << "bienvenido a linked list, aqui podras guardar y sacar tus numeros enteros, y lo mejor es que estaran ordenados para una busqueda mas comoda!!!\n";
    while(!c)
    {
        std::cout << "elige que quiere hacer: \n\n (0) salir\n (1)insertar numero\n (2)sacar numero\n";
        std::cin >> au2;
        switch(au2)
        {
        case 0:{
            std::cout << "gracias por el servicio";
            c = true;
            break;}
        case 1:{
            std::cout << "elige el numero: ";
            std::cin >> au;
            lista->add(au);
            break;}
        case 2:{
            std::cout << "que numero quieres remover?\n";
            std::cin >> au;
            lista->del(au);
            break;}
        }
        std::cout << " esta es su lista\n\n";
        lista->show();

    }
    LinkedList<int> *lista2 = new LinkedList<int>(*lista);
    lista2->show();
    lista2->del(5);
    lista->show();
    lista2->show();
    for ( LinkedList<int>::iterato it = lista->begin();
            it != lista->end(); it++)
    {
        std::cout << *it << " ";
    }
    LinkedList<char> *listac = new LinkedList<char>;
    char auc;
    au2 = 0;
    c = false;
    std::cout << "bienvenido a linked list, aqui podras guardar y sacar tus caracteres, y lo mejor es que estaran ordenados para una busqueda mas comoda!!!\n";
    while(!c)
    {
        std::cout << "elige que quiere hacer: \n\n (0) salir\n (1)insertar caracter\n (2)sacar caracter\n";
        std::cin >> au2;
        switch(au2)
        {
        case 0:{
            std::cout << "gracias por el servicio";
            c = true;
            break;}
        case 1:{
            std::cout << "elige el caracter: ";
            std::cin >> auc;
            listac->add(auc);
            break;}
        case 2:{
            std::cout << "que caracter\n";
            std::cin >> auc;
            listac->del(auc);
            break;}
        }
        std::cout << " esta es su lista\n\n";
        listac->show();

    }
    LinkedList<char> *lista2c = new LinkedList<char>(*listac);
    lista2c->show();
    lista2c->del('s');
    listac->show();
    lista2c->show();
    for ( LinkedList<char>::iterato it = listac->begin();
            it != listac->end(); it++)
    {
        std::cout << *it << " ";
    }

    LinkedList<Point> *listap = new LinkedList<Point>;
    Point aup;
    au2 = 0;
    c = false;
    std::cout << "bienvenido a linked list, aqui podras guardar y sacar tus Puntos, y lo mejor es que estaran ordenados para una busqueda mas comoda!!!\n";
    while(!c)
    {
        std::cout << "elige que quiere hacer: \n\n (0) salir\n (1)insertar Punto\n (2)sacar Punto\n";
        std::cin >> au2;
        switch(au2)
        {
        case 0:{
            std::cout << "gracias por el servicio";
            c = true;
            break;}
        case 1:{
            std::cout << "elige el Punto: ";
            std::cin >> aup;
            listap->add(aup);
            break;}
        case 2:{
            std::cout << "que Punto\n";
            std::cin >> aup;
            listap->del(aup);
            break;}
        }
        std::cout << " esta es su lista\n\n";
        listap->show();

    }
    LinkedList<Point> *lista2p = new LinkedList<Point>(*listap);
    lista2p->show();
    listap->show();
    lista2p->show();
    for ( LinkedList<Point>::iterato it = listap->begin();
            it != listap->end(); it++)
    {
        std::cout << *it << " ";
    }


}

