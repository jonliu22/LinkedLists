#include <iostream>
using namespace std;

class Node
{
public:
    Node* next;
    int data;
};

class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList();
    ~LinkedList();
    void addFront(int data);
    void addBack(int data);
    void addIndex(int data, int index);
    void deleteFront(int data);
    void deleteBack(int data);
    void deleteIndex(int data, int index);
    void printList();
    void printNode(int index);
};


