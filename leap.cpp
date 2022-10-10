/*Programmer:Camilla Calle 
Instructor: Mandy Yu
CSCI 135
Lab 1C */

//This program tells user whether the year entered is a leap year or a common year.

#include <iostream>

using namespace std; 

int main (){

  int year;
  cout << "Enter year: "; 
  cin >> year; // Ask the user for the year: variable, prompt, input & store it in year

  /*
  if (year is not divisible by 4) then (it is a common year)
  else if (year is not divisible by 100) then (it is a leap year)
  else if (year is not divisible by 400) then (it is a common year)
  else (it is a leap year)
  */

  {if (year % 4 != 0)
    cout << "Common year";
  
  else if (year % 100!= 0)
    cout << "Leap year";

  else if (year % 400)
    cout << "Common year "; 

  else 
    cout <<"Leap year";
  }
   
  
  return 0; 
}
