cmake_minimum_required(VERSION 3.17)
project(PriorityQueue)

set(CMAKE_CXX_STANDARD 17)
include_directories(util)
add_executable(PriorityQueue main.cpp util/util.h test_factory.h L23_mergeKLists/L23_mergeKLists.cpp L23_mergeKLists/L23_mergeKLists.h L215_findKthLargest/L215_findKthLargest.cpp L215_findKthLargest/L215_findKthLargest.h)