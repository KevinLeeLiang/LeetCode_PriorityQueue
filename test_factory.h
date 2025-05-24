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
#include "L502_findMaximizedCapital/L502_findMaximizedCapital.h"
#include "L506_findRelativeRanks/L506_findRelativeRanks.h"
#include "L621_leastInterval/L621_leastInterval.h"
#include "L630_scheduleCourse/L630_scheduleCourse.h"
#include "L632_smallestRange/L632_smallestRange.h"
#include "L658_findClosestElements/L658_findClosetElements.h"
#include "L659_isPossible/L659_isPossible.h"
#include "L675_cutOffTree/L675_cutOffTree.h"
#include "L692_topKFrequent/L692_topKFrequent.h"
#include "L703_KthLargest/L703_KthLargest.h"
#include "L743_networkDelayTime/L743_networkDelayTime.h"
#include "L767_reorganizeString/L767_reorganizeString.h"
#include "L778_swimInWater/L778_swimInWater.h"
#include "L786_kthSmallestPrimeFraction/L786_kthSmallestPrimeFraction.h"
#include "L787_findCheapestPrice/L787_findCheapestPrice.h"
#include "L855_ExamRoom/L855_ExamRoom.h"
#include "L857_mincostToHireWorkers/L857_mincostToHireWorkers.h"
#include "L862_shortestSubarray/L862_shortestSubarray.h"
#include "L871_minRefuelStops/L871_minRefuelStops.h"

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
        } else if (title == "L502") {
            std::shared_ptr<L502_findMaximizedCapital> tmp= std::make_shared<L502_findMaximizedCapital>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L506") {
            std::shared_ptr<L506_findRelativeRanks> tmp= std::make_shared<L506_findRelativeRanks>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L621") {
            std::shared_ptr<L621_leastInterval> tmp= std::make_shared<L621_leastInterval>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L630") {
            std::shared_ptr<L630_scheduleCourse> tmp= std::make_shared<L630_scheduleCourse>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L632") {
            std::shared_ptr<L632_smallestRange> tmp = std::make_shared<L632_smallestRange>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L658") {
            std::shared_ptr<L658_findClosetElements> tmp = std::make_shared<L658_findClosetElements>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L659") {
            std::shared_ptr<L659_isPossible> tmp = std::make_shared<L659_isPossible>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L675") {
            std::shared_ptr<L675_cutOffTree> tmp = std::make_shared<L675_cutOffTree>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L692") {
            std::shared_ptr<L692_topKFrequent> tmp = std::make_shared<L692_topKFrequent>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L703") {
            std::shared_ptr<L703_KthLargest> tmp = std::make_shared<L703_KthLargest>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L743") {
            std::shared_ptr<L743_networkDelayTime> tmp = std::make_shared<L743_networkDelayTime>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L767") {
            std::shared_ptr<L767_reorganizeString> tmp = std::make_shared<L767_reorganizeString>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L778") {
            std::shared_ptr<L778_swimInWater> tmp = std::make_shared<L778_swimInWater>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L786") {
            std::shared_ptr<L786_kthSmallestPrimeFraction> tmp = std::make_shared<L786_kthSmallestPrimeFraction>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L787") {
            std::shared_ptr<L787_findCheapestPrice> tmp = std::make_shared<L787_findCheapestPrice>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L855") {
            std::shared_ptr<L855_ExamRoom> tmp = std::make_shared<L855_ExamRoom>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L857") {
            std::shared_ptr<L857_mincostToHireWorkers> tmp = std::make_shared<L857_mincostToHireWorkers>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L862") {
            std::shared_ptr<L862_shortestSubarray> tmp = std::make_shared<L862_shortestSubarray>();
            solution_ = std::dynamic_pointer_cast<LeetcodePriorityQueue>(tmp);
        } else if (title == "L871") {
            std::shared_ptr<L871_minRefuelStops> tmp = std::make_shared<L871_minRefuelStops>();
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
