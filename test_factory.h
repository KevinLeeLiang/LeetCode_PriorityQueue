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
#include "L218_getSkyline/L218_getSkyline.h"
#include "L239_maxSlidingWindow/L239_maxSlidingWindow.h"
#include "L264_nthUglyNumber/L264_nthUglyNumber.h"
#include "L295_MedianOfDataFlow/L295_MedianOfDataFlow.h"
#include "L347_topKFrequent/L347_topKFrequent.h"
#include "L355_Twitter/L355_Twitter.h"
#include "L373_kSmallestPairs/L373_kSmallestPairs.h"
#include "L378_kthSmallest/L378_kthSmallest.h"
#include "L407_trapRainWater/L407_trapRainWater.h"
#include "L420_strongPasswordChecker/L420_strongPasswordChecker.h"
#include "L451_frequencySort/L451_frequencySort.h"
#include "L480_medianSlidingWindow/L480_medianSlidingWindow.h"

class test_factory {
private:
    void buildSolution(string title) {
        if (title == "L23") {
            std::shared_ptr<L23_mergeKLists> tmp= std::make_shared<L23_mergeKLists>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L215") {
            std::shared_ptr<L215_findKthLargest> tmp= std::make_shared<L215_findKthLargest>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L218") {
            std::shared_ptr<L218_getSkyline> tmp= std::make_shared<L218_getSkyline>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L239") {
            std::shared_ptr<L239_maxSlidingWindow> tmp= std::make_shared<L239_maxSlidingWindow>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L264") {
            std::shared_ptr<L264_nthUglyNumber> tmp= std::make_shared<L264_nthUglyNumber>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L295") {
            std::shared_ptr<L295_MedianOfDataFlow> tmp= std::make_shared<L295_MedianOfDataFlow>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L347") {
            std::shared_ptr<L347_topKFrequent> tmp= std::make_shared<L347_topKFrequent>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L355") {
            std::shared_ptr<L355_Twitter> tmp= std::make_shared<L355_Twitter>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L373") {
            std::shared_ptr<L373_kSmallestPairs> tmp= std::make_shared<L373_kSmallestPairs>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L378"){
            std::shared_ptr<L378_kthSmallest> tmp= std::make_shared<L378_kthSmallest>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L407") {
            std::shared_ptr<L407_trapRainWater> tmp= std::make_shared<L407_trapRainWater>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L420") {
            std::shared_ptr<L420_strongPasswordChecker> tmp= std::make_shared<L420_strongPasswordChecker>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L451") {
            std::shared_ptr<L451_frequencySort> tmp= std::make_shared<L451_frequencySort>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L480") {
            std::shared_ptr<L480_medianSlidingWindow> tmp= std::make_shared<L480_medianSlidingWindow>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else {
            cout << "no solution" << endl;
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
