
#include "Node.h"
#include "linked.h"
template <typename T>
Node<T>::Node(T element)
{
    this->element = element;
    this->next = nullptr;
}
template <typename T>
Node<T>::Node()
{

    this->next = nullptr;
}
template <typename T>
Node<T>::~Node()
{
    delete next;
}

template <typename T>
LinkedList<T>::LinkedList()
{
    this->head = nullptr;
}
template <typename T>
LinkedList<T>::LinkedList(const LinkedList &o)
{
    this->sizee = o.sizee;
    Node<T> *a = nullptr;
    Node<T> *c = nullptr;
    if (o.head == nullptr)
        this->head =nullptr;
    else
    {
        this ->head = new Node<T>;
        head ->element = o.head->element;

        a = head;
        c = o.head->next;
    }
    while (c != nullptr)
    {
        a ->next = new Node<T>;
        a = a->next;
        a->element = c->element;
        c = c->next;
    }
    if (a!= nullptr)
        a -> next = nullptr;
}

template <typename T>
void LinkedList<T>::add(T elem)
{
    Node<T> *node = new Node<T>(elem);
    if (head == nullptr){
        head = node;
        sizee++;
        return;
    }
    Node<T> *ctrl=head;
    Node<T> *c = nullptr;
    while (ctrl != nullptr)
    {
        if(ctrl->element > node->element)
            break;
        else{
            c = ctrl;
            ctrl = ctrl->next;
        }
    }
    if(ctrl == head)
    {
        node->next = head;
        head = node;
    }
    else
    {
            node->next = ctrl;
            c->next = node;
    }
    sizee++;

}
template <typename T>
void LinkedList<T>::del(T num)
{
    if (head == nullptr){
        std::cout << "lista vacia, sin elementos\n";
        return;}
    Node<T> *ctrl = head;
    Node<T> *c = nullptr;
    while(ctrl!=0){
			if(ctrl->element==num)
				break;
			else{
				c=ctrl;
				ctrl=ctrl->next;
			}
		}
    if(ctrl == nullptr)
    {
        std::cout <<"no se encontro el elemento\n";
    }
    else{
        if (head==ctrl)
            head = head->next;
        else
            c->next = ctrl->next;
        delete ctrl;
        sizee--;
    }
}

template <typename T>
void LinkedList<T>::show()
{
    Node<T> *iter = head;
    while(iter != nullptr)
    {
        std::cout <<  iter->element << " ";
        iter = iter->next;
    }
    std::cout <<"\n";
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    Node<T> *iter = head;
    Node<T> *c = nullptr;
    while(iter != nullptr)
    {
        c = iter->next;
        delete iter;
        iter = c;
    }
}
