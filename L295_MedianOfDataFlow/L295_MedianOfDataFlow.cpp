//
// Created by garen_lee on 2025/2/14.
/**
  ******************************************************************************
  * @file           : L295_MedianOfDataFlow.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/14
  ******************************************************************************
  */
//

#include "L295_MedianOfDataFlow.h"

using namespace L295;

MedianFinder::MedianFinder() {
    this->queMin_ = priority_queue<int, vector<int>, less<int>>();
    this->queMax_ = priority_queue<int, vector<int>, greater<int>>();
}

void MedianFinder::addNum(int num) {
    if (this->queMin_.size() == this->queMax_.size()) {
        this->queMin_.push(num);
        this->queMax_.push(this->queMin_.top());
        this->queMin_.pop();
    } else {
        this->queMax_.push(num);
        this->queMin_.push(this->queMax_.top());
        this->queMax_.pop();
    }
}

double MedianFinder::findMedian() {
    if (this->queMin_.size() == this->queMax_.size()) {
        return (this->queMin_.top() + this->queMax_.top()) / 2.0;
    } else {
        return this->queMax_.top();
    }
}

void L295_MedianOfDataFlow::test() {
    this->medianFinder_.addNum(1);
    this->medianFinder_.addNum(2);
    cout << this->medianFinder_.findMedian() << endl;
    this->medianFinder_.addNum(3);
    cout << this->medianFinder_.findMedian() << endl;
}