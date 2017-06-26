/*
 * Sorter.cpp
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */


#include "Sorter.h"

Sorter::Sorter()
{
}
Sorter::~Sorter()
{
}

void Sorter::swap(std::vector<int>& vec, int i, int j)
{
  int temp = vec[i];
  vec[i] = vec[j];
  vec[j] = temp;
}

