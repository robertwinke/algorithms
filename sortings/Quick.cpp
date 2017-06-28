/*
 * Quick.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: robertwinke
 */

#include "Quick.h"

Quick::Quick()
{
}

Quick::~Quick()
{
}

void Quick::sort(std::vector<int>& vec)
{
  sort(vec, 0, vec.size() - 1);
}

int Quick::partition(std::vector<int>& vec, int startIndex, int endIndex)
{
  int pivot = vec[endIndex];
  int partitionIndex = startIndex;

  for (int i = startIndex; i < endIndex; ++i)
  {
    if(vec[i] <= pivot)
    {
      swap(vec, i, partitionIndex);
      ++partitionIndex;
    }
  }
  swap(vec, partitionIndex, endIndex);
  return partitionIndex;
}

void Quick::sort(std::vector<int>& vec, int startIndex, int endIndex)
{
  if (startIndex < endIndex)
  {
    int partitionIndex;

    partitionIndex = partition(vec, startIndex, endIndex);
    sort(vec, startIndex, partitionIndex - 1);
    sort(vec, partitionIndex + 1, endIndex);
  }
}
