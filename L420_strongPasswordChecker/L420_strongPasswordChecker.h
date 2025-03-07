//
// Created by garen_lee on 2025/3/7.
/**
  ******************************************************************************
  * @file           : L420_strongPasswordChecker.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/7
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L420_STRONGPASSWORDCHECKER_H
#define PRIORITYQUEUE_L420_STRONGPASSWORDCHECKER_H

#include "util.h"
class L420_strongPasswordChecker : public LeetcodePriorityQueue {
private:
    int strongPasswordChecker(string password);
public:
    L420_strongPasswordChecker() {}
    void test();
};


#endif //PRIORITYQUEUE_L420_STRONGPASSWORDCHECKER_H
