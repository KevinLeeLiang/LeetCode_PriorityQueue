//
// Created by garen_lee on 2025/2/14.
/**
  ******************************************************************************
  * @file           : L264_nthUglyNumber.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/14
  ******************************************************************************
  */
//

#include "L264_nthUglyNumber.h"
int L264_nthUglyNumber::nthUglyNumber(int n) {
    if (n == 1) {
        return 1;
    }
    priority_queue<int, vector<int>, greater<int>>pq;
    unordered_set<int>hash;
    hash.insert(1);
    pq.push(1);
    while (n > 1) {
        int top = pq.top();
        pq.pop();
        if (top < INT_MAX / 2) {
            if (hash.find(top * 2) ==  hash.end()) {
                pq.push(top*2);
            }
            hash.insert(top*2);
        }
        if (top < INT_MAX / 3) {
            if (hash.find(top*3) == hash.end()) {
                pq.push(top*3);
            }
            hash.insert(top*3);
        }
        if (top < INT_MAX / 5) {
            if (hash.find(top*5) == hash.end()) {
                pq.push(top*5);
            }
            hash.insert(top*5);
        }
        n--;
    }
    return pq.top();
}
void L264_nthUglyNumber::test(){
    int n = 10;
    cout << nthUglyNumber(n) << endl;
    n = 1;
    cout << nthUglyNumber(n) << endl;
    n = 1407;
    cout << nthUglyNumber(n) << endl;
    n = 2;
    cout << nthUglyNumber(n) << endl;
}