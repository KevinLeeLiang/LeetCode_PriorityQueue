//
// Created by garen_lee on 2025/6/21.
/**
  ******************************************************************************
  * @file           : L912_sortArray.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/21
  ******************************************************************************
  */
//

#include "L912_sortArray.h"

void L912_sortArray::mergeSort(vector<int> &nums, int l, int r) {
    if (l >= r) return;
    int mid = (l + r) >> 1;
    mergeSort(nums, l, mid);
    mergeSort(nums, mid + 1, r);
    int i = l, j = mid + 1;
    int cnt = 0;
    while (i <= mid && j <= r) {
        if (nums[i] <= nums[j]) {
            tmp[cnt++] = nums[i++];
        } else {
            tmp[cnt++] = nums[j++];
        }
    }
    while (i <= mid) {
        tmp[cnt++] = nums[i++];
    }
    while (j <= r) {
        tmp[cnt++] = nums[j++];
    }
    for (int i = 0; i < r - l + 1; ++i) {
        nums[l + i] = tmp[i];
    }
}

vector<int> L912_sortArray::sortArray(vector<int> &nums) {
    tmp.resize((int)nums.size(), 0);
    mergeSort(nums, 0, (int)nums.size() - 1);
    return nums;
}

void L912_sortArray::test() {
    vector<int> nums = {5, 2, 3, 1};
    vector<int> ans = sortArray(nums);
    print_vector(ans);
    nums = {5, 1, 1, 2, 0, 0};
    ans = sortArray(nums);
    print_vector(ans);
}