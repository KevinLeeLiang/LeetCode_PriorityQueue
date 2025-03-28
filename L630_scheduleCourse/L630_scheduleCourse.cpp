//
// Created by garen_lee on 2025/3/28.
/**
  ******************************************************************************
  * @file           : L630_scheduleCourse.cpp.cc
  * @author         : garen_lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/3/28
  ******************************************************************************
  */
//

#include "L630_scheduleCourse.h"

int L630_scheduleCourse::scheduleCourse(vector<vector<int>> &courses) {
    sort(courses.begin(), courses.end(), [](const auto& c0, const auto& c1) {
        return c0[1] < c1[1];
    });

    priority_queue<int> q;
    // 优先队列中所有课程的总时间
    int total = 0;

    for (const auto& course: courses) {
        int ti = course[0], di = course[1];
        if (total + ti <= di) {
            total += ti;
            q.push(ti);
        }
        else if (!q.empty() && q.top() > ti) {
            total -= q.top() - ti;
            q.pop();
            q.push(ti);
        }
    }

    return q.size();
}

void L630_scheduleCourse::test() {
    vector<vector<int>> courses = {{100, 200}, {200, 1300}, {1000, 1250}, {2000, 3200}};
    int res = scheduleCourse(courses);
    cout << "res: " << res << endl;
    courses = {{1, 2}};
    res = scheduleCourse(courses);
    cout << "res: " << res << endl;
    courses = {{3, 2}, {4, 3}};
    res = scheduleCourse(courses);
    cout << "res: " << res << endl;
}