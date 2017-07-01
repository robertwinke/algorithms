

//
//
//The sum of the squares of the first ten natural numbers is,
//1^2 + 2^2 + ... + 10^2 = 385
//
//The square of the sum of the first ten natural numbers is,
//(1 + 2 + ... + 10)^2 = 552 = 3025
//
//Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.
//
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.


#include <iostream>
#include <cmath>

using namespace std;

int sumOfNumbersUntil(int limit)
{
  return (limit + 1) * limit / 2;
}

int sumOfSquaredNumbersUntil(int limit)
{
  int sum = 0;
  for (int i = 1; i <= limit; ++i)
  {
    sum += pow(i,2);
  }
  return sum;
}

int main() {
  long int sumOfSquaredNums = sumOfSquaredNumbersUntil(100);
  long int sumOfNumsSquared = pow(sumOfNumbersUntil(100),2);
  cout << "diff: " << sumOfSquaredNums - sumOfNumsSquared;
  return 0;
}
