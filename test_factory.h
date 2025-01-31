//
// Created by garen-lee on 2025/1/31.
/**
  ******************************************************************************
  * @file           : test_factory.h
  * @author         : garen-lee
  * @brief          : None
  * @attention      : None
  * @date           : 2025/1/31
  ******************************************************************************
  */
//

#ifndef PRIORITYQUEUE_TEST_FACTORY_H
#define PRIORITYQUEUE_TEST_FACTORY_H
#include <memory>
#include "L23_mergeKLists/L23_mergeKLists.h"
#include "L215_findKthLargest/L215_findKthLargest.h"
class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L23") {
            std::shared_ptr<L23_mergeKLists> tmp= std::make_shared<L23_mergeKLists>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L215") {
            std::shared_ptr<L215_findKthLargest> tmp= std::make_shared<L215_findKthLargest>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        }
    }
public:
    test_factory(string title) {
        cout << "test " << title << endl;
        buildSolution(title);
    }
    void test() {
        solution_->test();
    }
    ~test_factory() {}

private:
    std::shared_ptr<LeetcodePriorityQueue> solution_;
};
#endif //PRIORITYQUEUE_TEST_FACTORY_H
