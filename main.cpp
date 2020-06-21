#include "linkedlist.cpp"



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
}
