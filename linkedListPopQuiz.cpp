//linkedListPopQuiz
//AJones 9-15-25

// Goal: create a linked list of a string and output it in natural order and reversed

#include<iostream>
using namespace std;

//creates the structure
struct Node {
    char data;
    Node* next;
};


//outputs the list
void printListFoward(Node*n) {
    while (n != nullptr) {// while n does not equal null ... iterate
        cout << n->data; //outputs data of node
        n = n->next; // moves to next node
    }
    cout << endl;// ends the line
}


//outputs the reversed of list
void printListReverse(Node* n) {
    if (n == nullptr) return;// if n-> null ... iterate return prevents a recursive call
    printListReverse(n->next);//calls the function to move forwrad through the list until it reaches the end
    cout << n->data;// ouputs the data of each node
}


int main() {
    //our string to work with
    string myStr = "abcDefg";

    //creates a pointer node to char[0] of mySTR, next points to null or end of list
    Node* phead = new Node{myStr[0], nullptr};
    //creates a temp node that can move through the list as we want phead to stay as the entry point
    Node* current = phead;
        //control I = 1 The loop continues as long as the character at index i in myStr is NOT the null terminator '\0'
    for (int i = 1; myStr[i] != '\0'; i++) {
    // creates a new node and links it as the next node pointed to by current
    current->next = new Node{myStr[i], nullptr};
    //moves the node current to the next node in the list
        current = current->next;
        //repeats these two steps working its way through the list 1 at a time like a worm
    }


printListFoward(phead);
printListReverse(phead);

}
