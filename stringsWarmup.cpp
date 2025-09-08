//stringWarmup
//Ajones - 9/3/25


#include <iostream>
#include<string>
#include<algorithm>
using namespace std;


//name reversing functions
string reverse(string name) {
    reverse(name.begin(),name.end());
    return name;
}


//main function where program begins
int main() {
    //declare varaibles

    string name;

    //get username
    cout<< "\n Please enter your name.";
    cin >> name;
    cout<< "\n Your name is: " << name;

    //call reversing function
    string rvname = reverse(name);
    cout<< "\n Reversed name is: " << rvname;




    //reversing the string using a for loop
    int n =  name.length();//length of str
//                          v----------------------------\
    //       control     length / by 2   control + 1   for Loops only halfway through the string
    for (int i = 0; i < n / 2; i++) {
        char temp = name[i];        //temp = name[i]	Temporarily saves the front character
        name[i] = name[n - 1 - i];  //name[i] = name[n - 1 - i]	Overwrites front with back
        name[n - 1 - i] = temp;     //name[n - 1 - i] = temp	Puts the original front character into the back
    }

    cout << "\n Reversed string using 4 loop is: " << name; // output

}

