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
    void addNode(const string& aRecord, int nodeNumber);
    static void printList();
    void setHead(DemographicNode* head);
    DemographicNode* getHead();
    DemographicNode* setTail(DemographicNode* tail);
    DemographicNode* getTail();
private:
    DemographicNode* head{};
    DemographicNode* tail{};
}; // end

#endif //LESSON_9_DEMOGRAPHICLL_H