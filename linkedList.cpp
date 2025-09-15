//linkedList
//AJones 9-15-25

// Goal: create and print a linked list

#include<iostream>
using namespace std;


struct Node {//Struct = custom datatype for grouping related variables Node = represents a node in each list
    public:// only necessary if using Class instead of Struct
    char data;//creates a spot for the data
    Node* next;// creates a spot for the pointer to next element
};

void printList(Node*n) {// function to print list
    while (n != nullptr) {//while node does not equal nullprt ... iterate
        cout << n->data; //outputs data
        n = n->next; // moves to the next node
    }
}

 int main() {// Start of Program
     //Node* = memory location of node
     Node* phead = new Node();//create entrypoint to first element of linked list
     Node* psecond = new Node();//points to the third element
     Node* pthird = new Node();//point to the fourth element or null in our case

 //assigning values and linking the list
    //     * dereferences address of node
     phead->data = *"A";//value of element
     phead->next = psecond;//pointer to the next element

     psecond->data = *"B";
     psecond->next = pthird;

     pthird->data = *"C";
     pthird->next = nullptr;//ending point to our list

//Printing the list
    printList(phead);// calls the printlist function passing it the Node of the first list
}

