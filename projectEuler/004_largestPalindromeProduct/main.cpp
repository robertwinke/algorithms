

//A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
//
//Find the largest palindrome made from the product of two 3-digit numbers.


#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int number)
{
  vector<int> digits;
  int temp;
  unsigned int lengthOfNumber;
  bool isPal = true;

  while(number > 0 )
  {
    temp = number % 10;
    number /= 10;
    digits.push_back(temp);
  }

  lengthOfNumber = digits.size();

  for(unsigned int i = 0; i < lengthOfNumber / 2; ++i)
  {
    if(digits[i] != digits[lengthOfNumber - 1 -i])
    {
      isPal = false;
    }
  }
  return isPal;
}


int greatestDivisor(const int number)
{
  int divisor = 999;
  while(divisor > 99)
  {
    if(number % divisor == 0 && number / divisor < 1000)
    {
      return divisor;
    }
    --divisor;
  }
  return -1;
}

int main() {
  int divisor = 0;
  int number = 998001;
  while(number > 0)
  {
    if(isPalindrome(number))
    {
      divisor = greatestDivisor(number);
      if(divisor > 99) break;
    }
    --number;
  }
  cout <<"palindrome: " << number<< " divisor1: " <<  divisor << "\n";
  return 0;
}
