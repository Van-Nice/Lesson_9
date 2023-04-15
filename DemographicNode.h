#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>

#ifndef LESSON_9_DEMOGRAPHICNODE_H
#define LESSON_9_DEMOGRAPHICNODE_H


class DemographicNode {
public:
    // Functions
    void printNodeData();
    // getters and setters
    DemographicNode* getPrev();
    DemographicNode* setPrev(DemographicNode prevNode);
    DemographicNode* getNext();
    DemographicNode* setNext(DemographicNode nextNode);
    DemographicInfo* getDemographic();
private:
    DemographicNode* next;
    DemographicInfo* demographic;
    DemographicNode* prev;
};


#endif //LESSON_9_DEMOGRAPHICNODE_H
