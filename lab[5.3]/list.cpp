#include<iostream>
#include<string>
#include "ln.h"

using namespace std;

List::List()
{
    first = new Node;
}

List::List(const List &lista)
{
    first = new Node;

    Node *p = lista.first->next;

    while(p)
    {
        addNode(p->data);
        p = p->next;
    }
}

List::~List()
{
    while(first) delNode();
}
void List::addNode(string d)
{
   // Node* p;
   // Node* e;

    Node* e = new Node;

    e->data = d;
    e->next = NULL;

    Node* p = first;

    if(p)
    {
        while(p->next) p = p->next;
        p->next = e;
    }
    else first = e;

}

void List::delNode()
{
    Node *p = first->next;

    if(p)
    {
        if(p->next)
        {
            while(p->next->next) p = p->next;
            delete p->next;
            p->next = NULL;
        }
        else
        {
            delete p;
        }
    }
}

void List::print()
{
    Node* o = first->next;

    while(o)
    {
        cout << "Dane: " <<o->data << endl;
        o = o-> next;
    }
}
