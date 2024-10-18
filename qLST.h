/*
    um arquivo .h contém a declaração de funções, classes e variáveis, 
    informando o que a biblioteca ou módulo pode fazer, 
    mas não fornece a implementação (o "como" fazer).
*/

//Peerguntar para o PC!!
#ifndef LST_H
#define LST_H

struct Node {
    int data;
    Node* next;
};

struct Queue {
    Node* first;
    Node* last;
};

namespace enzo_lib {
    class qLST {
    public:
        void display(Queue* q);
        void insert(Queue* q, int value);
        void remove(Queue* q);
    };
}

#endif