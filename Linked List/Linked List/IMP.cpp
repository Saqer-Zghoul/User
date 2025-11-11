
using namespace std;
#include "LinkedListHeader.h"
#include<iostream>

clsLinkedList::clsLinkedList()
{
    head = tail = 0;
}
bool clsLinkedList::IsEmpty() const
{
    return head == 0;
}

void clsLinkedList::print()const
{
    // every const function should be call just const function
    if (!IsEmpty())
    {
        Node* temp;
        for (temp = head ;temp != 0  ; temp = temp->next )

        {
            cout << temp->val << " " ;

        }
        cout << endl;

    }
    else {
        cout << "sorry , List is Empty" << endl;
    }
}

void clsLinkedList::AddToLast(int element) {
    if (!IsEmpty())
    {
        tail->next = new Node(element);
        tail = tail->next;

    }
    else
        head = tail = new Node(element);
}
void clsLinkedList ::AddToFirst(int element) {
    if (!IsEmpty())
    {
         head = new Node(element,head);
       

    }
    else
        head = tail = new Node(element);
}
Node * clsLinkedList::Search(int value) const
{
    Node* temp = head;
    while (temp != 0)
    {
        if (temp->val == value)
            return temp;
        temp = temp->next;
  }


    return temp;
}

/*
void cList::AddElement(int el, int val) {

    if (!IsFull())
    {
        int pos = Search(val);
        if (pos != -1)
        {
            for (int i = length; i > pos; i--)
            {
                list[i] = list[i - 1];
            }
            list[pos] = el;
            length++;
        }
        else
        {
            cout << "The value is not found " << endl;
        }

    }
    else
    {
        cout << "the List is full , sorry element cannot be inserted " << endl;
    }


}
void cList::DeleteLast()
{
    if (!IsEmpty())
    {
        cout << "Delete List element : " << list[length - 1] << endl; 

        length--;
    } 
    else
        cout << "sorry , List Is Empty ";
};
void cList::DeleteFirst()
{
    if (!IsEmpty())
    {
        cout << "Delete List First : " << list[0] << endl;
        for (int i = 0; i < length-1 ; i++)
        {
            list[i] = list[i + 1];
        }
        length--;
    }
    else
        cout << "sorry , List Is Empty ";
}
void cList::DeleteElement(int Value)
{
    if (!IsEmpty())
    {
        int pos = Search(Value);
        if (pos != -1)
        {

            for (int i = pos; i < length - 1; i++)
            {
                list[i] = list[i + 1];
            }
            length--;
        }
        else
        {
            cout << "sorry , Element Not Found " << endl;
        }
     
    }
    else
        cout << "sorry , List Is Empty ";

}
*/

