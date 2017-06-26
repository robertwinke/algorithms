/*
 * Selection.h
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */

#ifndef SELECTION_H_
#define SELECTION_H_

#include "Sorter.h"

class Selection: public Sorter {
public:
  Selection();
  void sort(std::vector<int>& vec);
  ~Selection();
};


#endif /* SELECTION_H_ */
