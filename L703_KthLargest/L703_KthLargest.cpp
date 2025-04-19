//
// Created by garen-lee on 2025/4/19.
/**
  ******************************************************************************
  * @file           : L703_KthLargest.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/4/19
  ******************************************************************************
  */
//

#include "L703_KthLargest.h"

using namespace L703;

KthLargest::KthLargest(int k, vector<int> &nums) {
    this->k = k;
    for (auto num : nums) {
        pq.push(num);
        if (pq.size() > k) {
            pq.pop();
        }
    }
}

int KthLargest::add(int val) {
    pq.push(val);
    if (pq.size() > k) {
        pq.pop();
    }
    return pq.top();
}

void L703_KthLargest::test() {
    int k = 3;
    vector<int>nums = {4, 5, 8, 2};
    KthLargest kth_largest(k, nums);
    cout << kth_largest.add(3) << endl;
    cout << kth_largest.add(5) << endl;
    cout << kth_largest.add(10) << endl;
    cout << kth_largest.add(9) << endl;
    cout << kth_largest.add(4) << endl;
    cout << "__________" << endl;
    k = 4;
    nums = {7, 7, 7, 7, 8, 3};
    kth_largest = KthLargest(k, nums);
    cout << kth_largest.add(2) << endl;
    cout << kth_largest.add(10) << endl;
    cout << kth_largest.add(9) << endl;
    cout << kth_largest.add(9) << endl;

}