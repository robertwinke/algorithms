//============================================================================
// Name        : sortings.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <vector>

#include "Helper.h"
#include "Selection.h"
#include "Bubble.h"
#include "Insertion.h"
#include "Merge.h"
#include "Quick.h"

int main() {
  std::vector<int> myVec = {2,7,3,9,10,1,4,7,8,32,45};

  Helper* myHelper = new Helper;

  Selection* mySelection = new Selection;
  Bubble* myBubble = new Bubble;
  Insertion* myInsertion = new Insertion;
  Merge* myMerge = new Merge;
  Quick* myQuick = new Quick;

  //mySelection->sort(myVec);
  //myBubble->sort(myVec);
  //myInsertion->sort(myVec);
  //smyMerge->sort(myVec);
  myQuick->sort(myVec);

  myHelper->print(myVec);

  delete myHelper;
  delete mySelection;
  delete myBubble;
  delete myInsertion;
  delete myMerge;

  return 0;
}
