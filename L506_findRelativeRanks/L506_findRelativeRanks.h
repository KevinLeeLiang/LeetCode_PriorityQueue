//
// Created by garen_lee on 2025/3/21.
/**
  ******************************************************************************
  * @file           : L506_findRelativeRanks.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/21
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L506_FINDRELATIVERANKS_H
#define PRIORITYQUEUE_L506_FINDRELATIVERANKS_H

#include "util.h"
typedef pair<int, int> pii;
class L506_findRelativeRanks : public LeetcodePriorityQueue {
private:
    vector<string> findRelativeRanks(vector<int>& score);
public:
    L506_findRelativeRanks() {}
    void test();
};


#endif //PRIORITYQUEUE_L506_FINDRELATIVERANKS_H
