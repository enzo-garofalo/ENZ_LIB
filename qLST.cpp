/*
    No contexto do código, o lst.cpp contém as implementações das funções, 
    mostrando exatamente como elas funcionam, 
    assim como na cozinha você executa as etapas da receita.
*/

#include "qLST.h"
#include "iostream"
using namespace std;

namespace enzo_lib{
    void qLST::display(Queue* q)
    {
        if (q->first == NULL)
        {
            cout << "Empty Queue!" << endl;
            return;
        }
        Node *current = q->first;
        while (current != NULL)
        {
            cout << current->data << "->";
            current = current->next;
        }
        cout << "End of the queue!";
    }

    void qLST::insert(Queue* q, int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;

        if(q->first == NULL)
        {
            q->first = newNode;
        }else{
            q->last->next = newNode;
        }    
        q->last = newNode;
    }

    void qLST::remove(Queue* q)
    {
        if (q->first == NULL)
        {
            cout << "Empty Queue!" << endl;
            return;
        }
        Node *temp = q->first;
        delete temp;
        q->first = q->first->next;
        if(q->first == NULL) q->last = NULL;
    }








}