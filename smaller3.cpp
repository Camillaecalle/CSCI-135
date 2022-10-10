/* 
Programmer: Camilla Calle
Instructor: Mandy Yu
CSCI 135
Lab 1B */


//This program asks user for two int input and prints the smaller of the two.

  // Ask for three integers: variable, prompt, input


  // Option 2: Use && (and) statements
  // if (num1 < num2 && num1 < num3) {
  //   cout << "The smallest of the three is " << num1 << endl;
  // } ...

#include <iostream>
#include <string>
using namespace std;

int main (){
      // Option 1: Check num1 and num2 and compare smaller with num3
  // if (num1 < num2) { 
  //   if (num1 < num3) {
  //     cout << "The smallest of the three is " << num1 << endl;
  //   } else if (num3 < num1) {
  //     cout << "The smallest of the three is " << num3 << endl;
  //   }
  // } ...

    int num1;
    cout <<"Enter the first number: ";
    cin >> num1;

    int num2;
    cout << "Enter the second number: ";
    cin >> num2;
    
    int num3;
    cout << "Enter the third number: ";
    cin >> num3; 

    if (num1 < num2 && num1 < num3) {
        cout << "The smaller of the three is " << num1;
    }
    else if (num2 < num1 && num2 < num3) {
        cout << "The smaller of the three is " << num2;

    }
    else
    {
        cout << "The smaller of the three is " << num3;
    }
    
    return 0;

}
