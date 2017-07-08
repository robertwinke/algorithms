


//The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
//
//Find the sum of all the primes below two million.



#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int number)
{
  for(int i = 3; i <= sqrt(number); ++i)
  {
    if(number % i == 0 )
    {
      return false;
    }
  }
  return true;
}

int main() {
  long int sum = 2;

  long int number = 2000000;

  for (long int i = 3; i <= number; i += 2)
  {
    if(isPrime(i))
    {
      sum += i;
    }
  }

  cout << sum;
  return 0;
}
