#include "stdafx.h"

#include "Solution.h"


int CalcSum(vector<int> &A, int iStart, int iEnd) {
  int sum = 0;
  for (int iSum = iStart; iSum <= iEnd; iSum++)
  {
    sum = sum + A.at(iSum);
  }
  return sum;
}

int solution(vector<int> &A) {
  // write your code in C++14 (g++ 6.2.0)

  int sizeOfA = A.size();
  vector<int> results;

  for (int iEq = 0; iEq <= (sizeOfA-1); iEq++)
  {
    int sumLeft = CalcSum(A, 0, iEq-1);
    int sumRight = CalcSum(A, (iEq +1), (sizeOfA - 1));
    if (sumLeft == sumRight)
    {
      results.push_back(iEq);
    }
  }
  if (results.size() > 0)
  {
    return results.at(0);
  }
  else
  {
    return -1;
  }
  
}
