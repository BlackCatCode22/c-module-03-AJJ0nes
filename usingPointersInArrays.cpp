//usingPointersInArrays
//AJones 9/10/25
#include <iostream>
using namespace std;

//Goal is to use a pointer to pass the value of an element in an array to a function to be changed.


string pointer(string& ptr1) {
    ptr1 = "Toyota";//changes value of element 1
    return ptr1;//returns element 1
}


int main() {
    string Cars[]{"Ford","Dodge","BMW"};//create array
    string n = Cars[0];// set N to element 1 of array
    string* ptr1 = &n; //sets pointer1 to memory location of n/element 1
    cout << "\n the original string of element 1 is: " << *ptr1 << endl;//outputs original value of element 1

    pointer(*ptr1);//calls function to action
    Cars[1] = *ptr1;//Changes element 1 of array to new value of pointer

    cout << "The modified element is: " << Cars[1] << endl;//outputs modified element
}