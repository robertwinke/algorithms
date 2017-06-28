/*
 * Quick.h
 *
 *  Created on: Jun 28, 2017
 *      Author: robertwinke
 */

#ifndef QUICK_H_
#define QUICK_H_

#include "Sorter.h"


class Quick: public Sorter {

public:
  Quick();
  ~Quick();
  void sort(std::vector<int>& vec);
  void sort(std::vector<int>& vec, int startIndex, int endIndex);
  int partition(std::vector<int>& vec, int startIndex, int endIndex);
};


#endif /* QUICK_H_ */
