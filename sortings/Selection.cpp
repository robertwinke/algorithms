/*
 * Selection.cpp
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */

#include "Selection.h"

Selection::Selection()
{
}

Selection::~Selection()
{
}
void Selection::sort(std::vector<int>& vec)
{
  for(unsigned int i = 0; i < vec.size(); i++)
  {
    int iMin = i;
    for(unsigned int j = i + 1; j < vec.size(); j++)
    {
      if (vec[j] < vec[iMin])
      {
        iMin = j;
      }
    }
    swap(vec,i,iMin);
  }
}
