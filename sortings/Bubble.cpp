/*
 * Bubble.cpp
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */
#include "Bubble.h"


Bubble::Bubble()
{

}
Bubble::~Bubble()
{

}
void Bubble::sort(std::vector<int>& vec)
{
  for (unsigned int i = 0; i < vec.size() - 1; i++)
  {
    bool flag = false;
    for (unsigned int j = 0; j < vec.size() - 1; j++)
    {
      if (vec[j] > vec[j + 1])
      {
        swap(vec,j,j+1);
        flag = true;
      }
    }
    if (!flag)
    {
      break;
    }
  }
}
