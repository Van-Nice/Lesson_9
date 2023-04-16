#include "DemographicInfo.h"
#include "DemographicNode.h"
#include <string>
#include <iostream>
#include <iomanip>

#ifndef LESSON_9_DEMOGRAPHICLL_H
#define LESSON_9_DEMOGRAPHICLL_H

class DemographicLL {
public:
    // Functions
    DemographicLL(){
        readDataFile();
    }
    void readDataFile();
    DemographicNode* addNode(string aRecord, int nodeNumber);
    void printList();
    DemographicNode* setHead(DemographicNode* head);
    DemographicNode* getHead();
    DemographicNode* setTail(DemographicNode* tail);
    DemographicNode* getTail();
//    DemographicNode* setTailNext(DemographicNode* next);
    void printForward(DemographicNode* head);
private:
    DemographicNode* head;
    DemographicNode* tail;
};

#endif //LESSON_9_DEMOGRAPHICLL_H