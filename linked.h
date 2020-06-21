template <typename T>
class LinkedList
{
    int sizee;
    Node<T> *head;
public:
    LinkedList();
    LinkedList(const LinkedList&);
    class iterato;
    iterato begin()
    {
        return iterato(head);
    }

    // End of LInkedList wrapped in Iterator type
    iterato end()
    {
        return iterato(nullptr);
    }
    class iterato
    {
        const Node<T> *nodo_c;
    public:
        iterato() noexcept :
        nodo_c (head) { }

        iterato(const Node<T>* pNode) noexcept :
        nodo_c (pNode) { }
            iterato& operator=(Node<T>* pNode)
            {
                this->nodo_c = pNode;
                return *this;
            }

            iterato& operator++()
            {
                if (nodo_c)
                    nodo_c = nodo_c->next;
                return *this;
            }

            iterato operator++(int)
            {
                iterato itera = *this;
                ++*this;
                return itera;
            }

            bool operator!=(const iterato& itera)
            {
                return nodo_c != itera.nodo_c;
            }
            int operator*()
        {
            return nodo_c->element;
        }


    };
    void show();
    void add(T);
    void del(T);
    ~LinkedList();
};
