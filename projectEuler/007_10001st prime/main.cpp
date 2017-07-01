


//By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
//
//What is the 10 001st prime number?


#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int numberToCheck, vector<int>& primes)
{
  for(vector<int>::iterator it = primes.begin(); it != primes.end(); it++)
  {
    if(numberToCheck % *it == 0)
    {
      return false;
    }
  }
  primes.push_back(numberToCheck);

  return true;
}


//calculates a given number of primes
void calculatePrimes(const int numberOfPrimes, vector<int>& primes)
{
  int num = 3;
  int counter = 1;
  while(counter < numberOfPrimes)
  {
    if(isPrime(num, primes))
    {
      ++counter;
    }
  ++num;
  }
}

int main() {
  vector<int> primes;
  primes.push_back(2);

  calculatePrimes(10001, primes);

  cout << primes[10000];

  return 0;
}
