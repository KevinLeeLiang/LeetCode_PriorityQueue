//
// Created by garen-lee on 2025/1/31.
/**
  ******************************************************************************
  * @file           : L215_findKthLargest.cpp.cc
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/31
  ******************************************************************************
  */
//

#include "L215_findKthLargest.h"
void L215_findKthLargest::test(){
    vector<int>nums;
    int k;
    nums = {3,2,1,5,6,4};
    k = 2;
    cout<<findKthLargest(nums,k)<<endl;
    nums = {3,2,3,1,2,4,5,5,6};
    k = 4;
    cout<<findKthLargest(nums,k)<<endl;
}

void L215_findKthLargest::maxHeapify(vector<int>& a, int i, int heapSize) {
    int l = i * 2 + 1, r = i * 2 + 2, largest = i;
    if (l < heapSize && a[l] > a[largest]) {
        largest = l;
    }
    if (r < heapSize && a[r] > a[largest]) {
        largest = r;
    }
    if (largest != i) {
        swap(a[i], a[largest]);
        maxHeapify(a, largest, heapSize);
    }
}

void L215_findKthLargest::buildMaxHeap(vector<int>& a, int heapSize) {
    for (int i = heapSize / 2 - 1; i >= 0; --i) {
        maxHeapify(a, i, heapSize);
    }
}

int L215_findKthLargest::findKthLargest(vector<int>& nums, int k) {
    int heapSize = nums.size();
    buildMaxHeap(nums, heapSize);
    for (int i = nums.size() - 1; i >= nums.size() - k + 1; --i) {
        swap(nums[0], nums[i]);
        --heapSize;
        maxHeapify(nums, 0, heapSize);
    }
    return nums[0];
}