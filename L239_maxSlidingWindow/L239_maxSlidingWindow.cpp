//
// Created by garen_lee on 2025/2/8.
/**
  ******************************************************************************
  * @file           : L239_maxSlidingWindow.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/2/8
  ******************************************************************************
  */
//

#include "L239_maxSlidingWindow.h"

vector<int> L239_maxSlidingWindow::maxSlidingWindow(vector<int> &nums, int k) {
    vector<int>ans;
    deque<int> dq;
    for (int i = 0; i < nums.size(); i++) {
        while (!dq.empty() && nums[dq.back()] <= nums[i]) {
            dq.pop_back();
        }
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }
        dq.push_back(i);
        if (i >= k - 1) {
            ans.push_back(nums[dq.front()]);
        }
    }
    return ans;
}
void L239_maxSlidingWindow::test() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    vector<int> result = maxSlidingWindow(nums, k);
    print_vector(result);
    cout << "++++" << endl;
    nums = {1};
    k = 1;
    result = maxSlidingWindow(nums, k);
    print_vector(result);
    cout << "++++" << endl;
}