
//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number?


#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number)
{
  for(int i = 2; i <= sqrt(number); ++i)
  {
    if(number % i == 0 )
    {
      return false;
    }
  }
  return true;
}


//calculates a given number of primes
int calculatePrimes(const int numberOfPrimes)
{
  int num = 2;
  int counter = 1;
  while(counter <= numberOfPrimes)
  {
    if(isPrime(num))
    {
      ++counter; 
    }
  ++num;
  }
  return num - 1;
}

int main() {

  cout << calculatePrimes(10001);

  return 0;
}
