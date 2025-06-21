//
// Created by garen_lee on 2025/6/21.
/**
  ******************************************************************************
  * @file           : L973_kClosest.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/6/21
  ******************************************************************************
  */
//

#include "L973_kClosest.h"

void L973_kClosest::random_select(vector<vector<int>> &points, int left, int right, int k) {
    int pivot_id = uniform_int_distribution<int>(left, right)(gen);
    int pivot = points[pivot_id][0]*points[pivot_id][0] + points[pivot_id][1]*points[pivot_id][1];
    swap(points[right], points[pivot_id]);
    int i = left - 1;
    for (int j = left; j < right; ++j) {
        int dist = points[j][0] * points[j][0] + points[j][1] * points[j][1];
        if (dist <= pivot) {
            i++;
            swap(points[i], points[j]);
        }
    }
    ++i;
    swap(points[i], points[right]);
    if (k < i - left + 1) {
        random_select(points, left, i - 1, k);
    } else if (k > i - left + 1)  {
        random_select(points, i + 1, right, k - (i - left + 1));
    }
}

vector<vector<int>> L973_kClosest::kClosest(vector<vector<int>> &points, int k) {
    int n = points.size();
    random_select(points, 0, n - 1, k);
    return {points.begin(), points.begin() + k};
}

void L973_kClosest::test() {
    vector<vector<int>> nums = {{1, 3}, {-2, 2}};
    int k = 1;
    vector<vector<int>> res = kClosest(nums, k);
    print_vector_vector( res);
    nums = {{3, 3}, {5, -1}, {-2, 4}};
    k = 2;
    res = kClosest(nums, k);
    print_vector_vector( res);
}