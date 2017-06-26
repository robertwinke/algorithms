/*
 * Bubble.h
 *
 *  Created on: Jun 26, 2017
 *      Author: robertwinke
 */

#ifndef BUBBLE_H_
#define BUBBLE_H_

#include "Sorter.h"


class Bubble: public Sorter {
public:
  Bubble();
  void sort(std::vector<int>& vec);
  ~Bubble();
};




#endif /* BUBBLE_H_ */
