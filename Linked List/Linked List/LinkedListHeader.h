#pragma once

struct  Node
{
    int val;
    Node* next;
    Node* prev;
    Node* Circle;
    Node()
    {

        next = 0;

    }
    Node(int element, Node* n = 0)
    {
        val = element;
        next = n;
    }
};


class clsLinkedList
{
public:
    clsLinkedList();
    bool IsEmpty()const;
    void print() const;
    void AddToLast(int element);
    void AddToFirst(int element);
    void InsertToPosition(int value, int pos);
    Node *  Search(int value) const;
    void AddElement(int el, int val);
    void DeleteFirst();
    void DeleteLast();  
    void DeleteElement(int Vlaue);

private:
    Node* head;
    Node* tail;

};


