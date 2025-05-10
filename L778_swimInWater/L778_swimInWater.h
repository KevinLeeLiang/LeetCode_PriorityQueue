//
// Created by garen-lee on 2025/5/3.
/**
  ******************************************************************************
  * @file           : L778_swimInWater.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/3
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L778_SWIMINWATER_H
#define PRIORITYQUEUE_L778_SWIMINWATER_H

#include "util.h"
namespace L778 {
    struct Entry {
        int i;
        int j;
        int val;
        bool operator<(const Entry& other) const {
            return this->val > other.val;
        }
        Entry(int ii, int jj, int val): i(ii), j(jj), val(val) {}
    };
}
class L778_swimInWater : public LeetcodePriorityQueue {
private:
    int find(vector<int>& f, int x) {
        if (f[x] == x) {
            return x;
        }
        int fa = find(f, f[x]);
        f[x] = fa;
        return fa;
    }

    void merge(vector<int>& f, int x, int y) {
        int fx = find(f, x), fy = find(f, y);
        f[fx] = fy;
    }

    int swimInWater(vector<vector<int>>& grid);
public :
    L778_swimInWater() {}
    void test();
};


#endif //PRIORITYQUEUE_L778_SWIMINWATER_H
