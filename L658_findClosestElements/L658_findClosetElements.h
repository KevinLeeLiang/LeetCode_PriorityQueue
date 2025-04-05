//
// Created by garen-lee on 2025/4/5.
/**
  ******************************************************************************
  * @file           : L658_findClosetElements.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/5
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L658_FINDCLOSETELEMENTS_H
#define PRIORITYQUEUE_L658_FINDCLOSETELEMENTS_H

#include "util.h"
class L658_findClosetElements : public LeetcodePriorityQueue {
private:
    vector<int> findClosestElements(vector<int>& arr, int k, int x);
public:
    L658_findClosetElements() {}
    void test();
};


#endif //PRIORITYQUEUE_L658_FINDCLOSETELEMENTS_H
