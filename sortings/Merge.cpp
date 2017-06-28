/*
 * Merge.cpp
 *
 *  Created on: Jun 28, 2017
 *      Author: robertwinke
 */

#include "Merge.h"


Merge::Merge()
{
}

Merge::~Merge()
{
}

void Merge::merge(std::vector<int>& vec, std::vector<int>& leftVec, std::vector<int>& rightVec)
{
  unsigned int i, j, k;
  i = j = k = 0;

  while(i < leftVec.size() && j < rightVec.size())
  {
    if (leftVec[i] <= rightVec[j])
    {
      vec[k] = leftVec[i];
      ++i;
    }
    else
    {
      vec[k] = rightVec[j];
      ++j;
    }
    ++k;
  }
  while(i < leftVec.size())
  {
    vec[k] = leftVec[i];
    ++k;
    ++i;
  }
  while(j < rightVec.size())
  {
    vec[k] = rightVec[j];
    ++k;
    ++j;
  }
}

void Merge::sort(std::vector<int>& vec)
{
  int length = vec.size();
  if(length < 2) return;
  int middle = length / 2;

  std::vector<int> left;
  std::vector<int> right;

  for (int i = 0; i < middle; ++i)
  {
    left.push_back(vec[i]);
  }
  for (int i = middle; i < length; ++i)
  {
    right.push_back(vec[i]);
  }
  sort(left);
  sort(right);
  merge(vec, left, right);
}
