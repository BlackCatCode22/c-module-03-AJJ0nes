//pointerPractice
//Ajones 9/10
#include <iostream>
using namespace std;

int main() {

    int n = 5;
    cout << n << endl; //outputs value
    cout << &n << endl;// & displays the storage location in memory
    int* ptr = &n; //int pointer == memory location of n
    *ptr = 10;// changes memory location of n from 5 to 10
    cout << *ptr << endl;// outputs vaule of memory location
    //in order to output the value of the memory location the pointer must be dereferenced with an *
    cout << n << endl; //outputs new value of n


    return 0;
}