/*
 * Helper.cpp
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */


#include "Helper.h"

Helper::Helper()
{

}
Helper::~Helper()
{

}
void Helper::print(std::vector<int>& vec)
{
  for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
  {
    std::cout << *it << "  ";
  }
  std::cout << "\n";
}
