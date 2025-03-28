//
// Created by garen_lee on 2025/3/28.
/**
  ******************************************************************************
  * @file           : L630_scheduleCourse.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/28
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L630_SCHEDULECOURSE_H
#define PRIORITYQUEUE_L630_SCHEDULECOURSE_H

#include "util.h"
class L630_scheduleCourse : public LeetcodePriorityQueue {
private:
    int scheduleCourse(vector<vector<int>>& courses);
public:
    L630_scheduleCourse() {}
    void test();
};


#endif //PRIORITYQUEUE_L630_SCHEDULECOURSE_H
