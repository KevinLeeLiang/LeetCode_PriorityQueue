//
// Created by garen_lee on 2025/5/10.
/**
  ******************************************************************************
  * @file           : L855_ExamRoom.h
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/5/10
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_L855_EXAMROOM_H
#define PRIORITYQUEUE_L855_EXAMROOM_H

#include "util.h"
namespace L855 {
    struct Comp {
        bool operator()(const pair<int, int> &p1, const pair<int, int> &p2) {
            int d1 = p1.second - p1.first, d2 = p2.second - p2.first;
            return d1 / 2 < d2 / 2 || (d1 / 2 == d2 / 2 && p1.first > p2.first);
        }
    };

    class ExamRoom {
    public:
        ExamRoom(int n) : n_(n) {

        }

        int seat() {
            if (seats_.empty()) {
                seats_.insert(0);
                return 0;
            }
            int left = *seats_.begin(), right = n_ - 1 - *seats_.rbegin();
            while (seats_.size() >= 2) {
                auto p = pq_.top();
                if (seats_.count(p.first) > 0 && seats_.count(p.second) > 0 &&
                    *next(seats_.find(p.first)) == p.second) { // 不属于延迟删除的区间
                    int d = p.second - p.first;
                    if (d / 2 < right || d / 2 <= left) { // 最左或最右的座位更优
                        break;
                    }
                    pq_.pop();
                    pq_.push({p.first, p.first + d / 2});
                    pq_.push({p.first + d / 2, p.second});
                    seats_.insert(p.first + d / 2);
                    return p.first + d / 2;
                }
                pq_.pop(); // leave 函数中延迟删除的区间在此时删除
            }
            if (right > left) { // 最右的位置更优
                pq_.push({*seats_.rbegin(), n_ - 1});
                seats_.insert(n_ - 1);
                return n_ - 1;
            } else {
                pq_.push({0, *seats_.begin()});
                seats_.insert(0);
                return 0;
            }

        }

        void leave(int p) {
            if (p != *seats_.begin() && p != *seats_.rbegin()) {
                auto it = seats_.find(p);
                pq_.push({*prev(it), *next(it)});
            }
            seats_.erase(p);
        }
    private:
        int n_;
        set<int> seats_;
        priority_queue<pair<int, int>, vector<pair<int, int>>, Comp> pq_;

    };
}
class L855_ExamRoom : public LeetcodePriorityQueue {
public:
    L855_ExamRoom() {};
    void test();
};


#endif //PRIORITYQUEUE_L855_EXAMROOM_H
