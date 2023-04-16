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
        DemographicNode* head = nullptr;
        DemographicNode* tail = nullptr;
        readDataFile();
    }
    void readDataFile();
    DemographicNode* addNode(string aRecord);
    void printList();
    DemographicNode* setHead(DemographicNode* head);
    DemographicNode* getHead();
    DemographicNode* setTail(DemographicNode* tail);
    DemographicNode* getTail();

private:
    DemographicNode* head;
    DemographicNode* tail;
};


#endif //LESSON_9_DEMOGRAPHICLL_H
