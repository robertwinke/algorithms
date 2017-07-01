

//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
//


#include <iostream>
#include <map>
#include <cmath>

using namespace std;

bool isPrime(int number, map<int,int>& primes)
{
  for(map<int,int>::iterator it = primes.begin(); it != primes.end(); it++)
  {
    if(number % (it->first) == 0)
    {
      return false;
    }
  }
  primes.insert(make_pair(number,0));
  return true;
}

void findPrimes(int limit, map<int,int>& primes)
{
  for (int i = 3; i <= limit; ++i)
  {
    isPrime(i, primes);
  }
}

void countPowers(int limit, map<int,int>& primes)
{
  for (int i = 2; i <= limit; ++i)
  {
    int tempNum = i;
    int counter = 0;
    for(map<int,int>::iterator it = primes.begin(); it != primes.end(); it++)
    {
      while(tempNum % it->first == 0 && tempNum / it->first > 0)
      {
        tempNum /= it->first;
        ++counter;
        if(counter > it->second)
        {
          it->second = counter;
        }
      }
      counter = 0;
    }
  }
}

long calculateSmallestMultiple(map<int,int>& primes)
{
  long result = 1;

  for(map<int,int>::iterator it = primes.begin(); it != primes.end(); it++)
  {
    int temp = pow(it->first,it->second);
    cout << it->first << " ^  " <<it->second << " = " << temp << "\n";
    result = result * temp;
  }
  return result;
}

int main() {

  long result;
  map<int,int> primes;

  primes.insert(make_pair(2,0));

  findPrimes(20, primes);

  countPowers(20, primes);

  result = calculateSmallestMultiple(primes);
  cout << result;
  return 0;
}
