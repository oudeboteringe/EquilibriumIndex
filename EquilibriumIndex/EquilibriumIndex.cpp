// EquilibriumIndex.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"

#include <iostream>
#include <vector>
using namespace std;

#include "Solution.h"

int main()
{

  // Declare the vector:
  vector<int> intVec;

  // Fill the vector with data from user input:
  int nextInt = 0;
  cout << "Enter next integer and press enter (press non-integer key after last entry)" << endl;
  bool continueReading = true;
  while (continueReading)
  {
    cin >> nextInt;
    if (!cin) // or if(cin.fail())
    {
      continueReading = false;
      // user didn't input a number
      cin.clear(); // reset failbit
      cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //skip bad input
    }
    else
    {
      intVec.push_back(nextInt);
    }
  }

  //intVec.push_back(-1);
  //intVec.push_back(3);
  //intVec.push_back(-4);
  //intVec.push_back(5);
  //intVec.push_back(1);
  //intVec.push_back(-6);
  //intVec.push_back(2);
  //intVec.push_back(1);

  int result = solution(intVec);
  cout << "Result: " << result << endl;

  // End of program
  cout << "Press any key to exit.";
  _getch();
  return 0;
}


