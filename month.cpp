/* Programmer: Camilla Calle
Instructor: Mandy Yu
CSCI 135
Lab 1D */

//This program prints the year and number of days in an inputted month.

#include <iostream>

using namespace std; 

int main (){
  int year;
  cout << "Enter year: "; 
  cin >> year; // Ask the user for the year: variable, prompt, input & store it in year

  int month; // Ask the user to input month and store month 
  cout << "Enter month: ";
  cin >> month;

  // if month is 2
    // if (year is not divisible by 4) then (print 28 days)
    // else if (year is not divisible by 100) then (print 29 days)
    // else if (year is not divisible by 400) then (print 28 days)
    // else (print 29 days)
    // return 0


if (month == 2)
  { if (year % 4 != 0)
    cout << " 28 days ";
  
  else if (year % 100 != 0)
    cout << " 29 days";

  else if (year % 400)
    cout << "28 days "; 

  else 
    cout <<" 29 days ";
    return 0;
  }

    // if month is 1-7 and month is not 2
    // if month is odd: print 31
    // else if month is even: print 30

   
  {if (month == 1) {
        cout << " 31 days " ;
    }


    if (month == 3) {
        cout << " 31 days " ;
    }

    if (month == 5) {
        cout << " 31 days " ;
    }
    
    if (month == 7) {
        cout << " 31 days " ;
    }
    if (month == 4) {
        cout << " 30 days " ;
    }

    {if (month == 6) 
        cout << " 30 days " ;
    }
}
  

    
  // if month is 8-12
  // if month is odd: 30
  // else if month is even: 31


   { 
    if (month == 8) {
        cout << " 31 days " ;
    }

    if (month == 10) {
        cout << " 31 days " ;
    }

    if (month == 10) {
        cout << " 31 days " ;
    }
    
    if (month == 12) {
        cout << " 31 days " ;
    }

    if (month == 9) {
        cout << " 30 days " ;
    }


    if (month == 11) {
        cout << " 30 days " ;
    }
 return 0;
 }}
