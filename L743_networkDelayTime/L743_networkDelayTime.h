//
// Created by garen-lee on 2025/4/26.
/**
  ******************************************************************************
  * @file           : L743_networkDelayTime.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/26
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L743_NETWORKDELAYTIME_H
#define PRIORITYQUEUE_L743_NETWORKDELAYTIME_H

#include "util.h"
class L743_networkDelayTime : public LeetcodePriorityQueue {
private:
    int networkDelayTime(vector<vector<int>>& times, int n, int k);
public:
    L743_networkDelayTime() {}
    void test();
};


#endif //PRIORITYQUEUE_L743_NETWORKDELAYTIME_H
