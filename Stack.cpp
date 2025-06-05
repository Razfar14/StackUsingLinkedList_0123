#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(){
        next = NULL;
    }
};

class Stack{
private:
    Node *top; // Pointer to the top node of the stack

public:
    Stack(){
        top = NULL; // Initialize the stack with a null top
    }

    // Push operation: insert an element at the top of the stack
    int push(int value) {
        Node *newNode = new Node(); // 1. Allocate memory for a new node
        newNode->data = value;      // 2. Set the data of the new node
        newNode->next = top;        // 3. Set the next pointer of the new node to the current top
        top = newNode;              // 4. Update the top pointer to point to the new node
        cout << "Pushed value : " << value << endl;
        return value; 
    }

    // IsEmpty operation: check if the stack is empty

  


            
           
