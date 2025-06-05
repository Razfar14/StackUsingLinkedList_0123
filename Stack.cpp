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
    bool isEmpty() {
        return top == NULL; // Return true if the top pointer is null, indicating the stack is empty
    }

    // Pop operation: remove and return the top element of the stack
    void pop(){
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            top = top->next; // If the stack is empty, print a message and return
            return;// Update the top pointer to the next node
        }
        cout << "Popped value: " << top->data << endl; // Print the value of the top node
        top = top->next; // Update the top pointer to the next node
    }

    // Peek or Top operation: return the top element of the stack without removing it
    void peek() {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            return; // If the stack is empty, print a message and return
        }
        else{
            Node * current = top;
            while (current != NULL) {
                cout << current->data << " " << endl; // Print the data of each node in the stack
                current = current->next; // Move to the next node
            }
        }// Return the value of the top node
    }
    
};


            
           
