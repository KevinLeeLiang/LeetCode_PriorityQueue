//
// Created by garen_lee on 2025/2/14.
/**
  ******************************************************************************
  * @file           : L264_nthUglyNumber.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/14
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L264_NTHUGLYNUMBER_H
#define PRIORITYQUEUE_L264_NTHUGLYNUMBER_H

#include "util.h"
class L264_nthUglyNumber : public LeetcodePriorityQueue{
private:
    int nthUglyNumber(int n);
public:
    L264_nthUglyNumber(){}
    void test();
};


#endif //PRIORITYQUEUE_L264_NTHUGLYNUMBER_H
