/*
 * Sorter.h
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */
#include <vector>

#ifndef SORTER_H_
#define SORTER_H_

class Sorter {
public:
  Sorter();
  void swap(std::vector<int>& vec, int i, int j);
  virtual void sort(std::vector<int>& vec) = 0;
  virtual ~Sorter();
};



#endif /* SORTER_H_ */
