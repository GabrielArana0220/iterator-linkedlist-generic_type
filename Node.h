#include <iostream>
#include <bits/stdc++.h>
#include <string>

template <typename T>
class Node
{
    T element;
    Node<T> *next;
public:
    Node();
    Node(T element);
    template<typename T1>
    friend class LinkedList;
    ~Node();
};
