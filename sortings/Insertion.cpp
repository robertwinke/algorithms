/*
 * Insertion.cpp
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */

#include "Insertion.h"

Insertion::Insertion()
{

}
Insertion::~Insertion()
{

}
void Insertion::sort(std::vector<int>& vec)
{
  for(unsigned int i = 1; i < vec.size(); i++)
  {
    int value = vec[i];
    int index = i;
    while(index > 0 && vec[index - 1] > value)
    {
      vec[index] = vec[index - 1];
      index--;
    }
    vec[index] = value;
  }
}
