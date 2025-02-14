//
// Created by garen_lee on 2025/2/14.
/**
  ******************************************************************************
  * @file           : L295_MedianOfDataFlow.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/14
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L295_MEDIANOFDATAFLOW_H
#define PRIORITYQUEUE_L295_MEDIANOFDATAFLOW_H

#include "util.h"
namespace L295 {
    class MedianFinder {
    private:
        priority_queue<int, vector<int>, less<int>> queMin_;
        priority_queue<int, vector<int>, greater<int>> queMax_;

    public:
        MedianFinder();

        void addNum(int num) ;

        double findMedian() ;
    };
}
class L295_MedianOfDataFlow: public LeetcodePriorityQueue{
private:
    L295::MedianFinder medianFinder_;
public:
    L295_MedianOfDataFlow(){}
    void test();
};


#endif //PRIORITYQUEUE_L295_MEDIANOFDATAFLOW_H
