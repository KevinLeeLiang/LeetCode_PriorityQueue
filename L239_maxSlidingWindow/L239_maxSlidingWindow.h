//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L239_maxSlidingWindow.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L239_MAXSLIDINGWINDOW_H
#define PRIORITYQUEUE_L239_MAXSLIDINGWINDOW_H

#include "util.h"
class L239_maxSlidingWindow : public LeetcodePriorityQueue{
private:
    vector<int> maxSlidingWindow(vector<int>& nums, int k);
public:
    L239_maxSlidingWindow() {}
    void test();
};


#endif //PRIORITYQUEUE_L239_MAXSLIDINGWINDOW_H
