/*
 * Insertion.h
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */

#ifndef INSERTION_H_
#define INSERTION_H_

#include "Sorter.h"

class Insertion: public Sorter {
public:
  Insertion();
  ~Insertion();
  void sort(std::vector<int>& vec);
};



#endif /* INSERTION_H_ */
