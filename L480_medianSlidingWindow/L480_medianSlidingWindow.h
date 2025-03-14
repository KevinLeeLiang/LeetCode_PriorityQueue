//
// Created by garen_lee on 2025/3/14.
/**
  ******************************************************************************
  * @file           : L480_medianSlidingWindow.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/14
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L480_MEDIANSLIDINGWINDOW_H
#define PRIORITYQUEUE_L480_MEDIANSLIDINGWINDOW_H

#include "util.h"
class L480_medianSlidingWindow : public LeetcodePriorityQueue {
private:
    vector<double> medianSlidingWindow(vector<int>& nums, int k);
public:
    L480_medianSlidingWindow() {}
    void test();
};


#endif //PRIORITYQUEUE_L480_MEDIANSLIDINGWINDOW_H
