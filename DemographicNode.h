#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>

#ifndef LESSON_9_DEMOGRAPHICNODE_H
#define LESSON_9_DEMOGRAPHICNODE_H


class DemographicNode {
public:
    // Functions
    DemographicNode(string aRecord){
        DemographicInfo(aRecord).setAll(aRecord);
    }
    void printNodeData();
    // getters and setters
    DemographicNode* getPrev();
    DemographicNode* setPrev(DemographicNode* prevNode);

    DemographicNode* getNext();
    DemographicNode* setNext(DemographicNode* nextNode);

    DemographicInfo* getDemographic();
    DemographicInfo* setDemographic(DemographicInfo demographicInfo);
private:
    DemographicNode* prev;
    DemographicInfo* demographic;
    DemographicNode* next;
};


#endif //LESSON_9_DEMOGRAPHICNODE_H
