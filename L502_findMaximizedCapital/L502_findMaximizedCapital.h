//
// Created by garen_lee on 2025/3/21.
/**
  ******************************************************************************
  * @file           : L502_findMaximizedCapital.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/21
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L502_FINDMAXIMIZEDCAPITAL_H
#define PRIORITYQUEUE_L502_FINDMAXIMIZEDCAPITAL_H

#include "util.h"
typedef pair<int, int> pii;
class L502_findMaximizedCapital : public LeetcodePriorityQueue {
private:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital);
public:
    L502_findMaximizedCapital() {}
    void test();
};


#endif //PRIORITYQUEUE_L502_FINDMAXIMIZEDCAPITAL_H
