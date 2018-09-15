/*
 Singly linked list class
 */

#ifndef SLL_h
#define SLL_h

struct node{
    node *next;
    int data;
};

class List{
private:
    node *head, *tail;
    
public:
    List()
    {
        head = NULL;
        tail = NULL;
    }
    void createNode(int value)
    {
        node *temp = new node;
        temp -> data = value;
        temp -> next = NULL;
        
        if(head == NULL)   //if empty list
        {
            head = temp;
            tail = temp;
            temp = NULL;
        }
        else        //add to the end of the list
        {
            tail -> next = temp;
            tail = temp;
        }
    }
    
    void display()
    {
        node *temp = new node;
        temp = head;
        while(temp != NULL)
        {
            cout << temp -> data << endl;
            temp = temp -> next;
        }
    }
    
    void AddToFront(int value)      //add to front
    {
        node *temp = new node;
        temp -> data = value;
        temp -> next = head;
        head = temp;
    }
    
    void AddToEnd(int value)        //add to end
    {
        node *temp = new node;
        temp -> data = value;
        tail -> next = temp;
        tail = temp;
    }
};

#endif /* SLL_h */
