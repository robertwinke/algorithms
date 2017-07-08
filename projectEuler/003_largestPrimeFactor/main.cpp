

//The prime factors of 13195 are 5, 7, 13 and 29.
//
//What is the largest prime factor of the number 600851475143 ?


#include <iostream>
#include <vector>
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


bool isPrime(int number, vector<int>* primes)
{
  for(vector<int>::iterator it = primes->begin(); it != primes->end(); it++)
  {
    if(number % *it == 0)
    {
      return false;
    }
  }
  primes->push_back(number);
  return true;
}

int main() {

  vector<int>* primes = new vector<int>;
  primes->push_back(2);

  int maxPrime = 0;

  long int number = 600851475143;

  for (long int i = 3; i <= number; i += 2)
  {
    if(isPrime(i))
    {
      while(number % i == 0)
      {
        number /= i;
        maxPrime = i;
      }
    }
  }

  cout << maxPrime;

  delete primes;
  return 0;
}
