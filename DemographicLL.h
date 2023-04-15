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
        DemographicLL* head = nullptr;
        DemographicLL* tail = nullptr;
        readDataFile();
    }
    void readDataFile();
    void addNode(string aRecord);
    void printList();
private:
    DemographicLL* head;
    DemographicLL* tail;
};


#endif //LESSON_9_DEMOGRAPHICLL_H
