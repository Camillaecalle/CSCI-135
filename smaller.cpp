
/* 
Programmer: Camilla Calle
Instructor: Mandy Yu
CSCI 135
LAB 1A*/

// Intro to Linux and C++: This program asks user for two int inputs and prints the smaller of the two. 

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
    cin >> num2; {

    if (num1 < num2){
        cout << "The smaller of the two is" << num1;
    }
    if (num1 > num2)
        cout << "The smaller number is" << num2;
    }
    return 0;
}
