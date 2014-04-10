#include <iostream>
#include <Windows.h>


using namespace std; //tells the program to use the "Standard Definition Library" this is where the computer is told how to preform all the syntax

int main() //Main Structure of the program
{
    double a; //creating variables to hold place for numbers
    double b;
    long d = 1;

    cout << "Enter a number to start on." << endl; //This Line prints out the selected text
    cin >> a; //This Line receives user input and sets Variable 'a' to the number that was input
    b = a; //This Line Sets 'b' equal to 'a'
    system("CLS");


    cout << d << ". " << a << endl; //This Line says the line number, then lists the value 'a' currently holds
    d++; // 'd++' simply add 1 to the value of 'd'
    Sleep(250);
    cout << d << ". " << b << endl; //This Line says the line number, then lists the value 'b' currently holds
    d++;
    Sleep(250);
    while(1){ //'while' is a basic "true, false" statement; This one says "1 (which in computer terms is the sign for true),
            //then repeat this code." This effectively creates an infinite loop by telling the computer that it's always true
        a = a + b; //This line takes the Value of 'a' and the value of 'b' amd adds them together, then sets the sum to the new value of 'a'
        cout << d << ". " << a << endl;
        d++;
    Sleep(250);
        b = a + b; //This line takes the Value of 'a' and the value of 'b' amd adds them together, then sets the sum to the new value of 'b'
        cout << d << ". " << b << endl;
        d++;
    Sleep(250);
    }
}
