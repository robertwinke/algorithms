/*
 * Merge.h
 *
 *  Created on: Jun 28, 2017
 *      Author: robertwinke
 */

#ifndef MERGE_H_
#define MERGE_H_

#include "Sorter.h"

class Merge: public Sorter {
public:
  Merge();
  ~Merge();
  void sort(std::vector<int>& vec);
  void merge(std::vector<int>& vec, std::vector<int>& leftVec, std::vector<int>& rightVec);
};



#endif /* MERGE_H_ */
