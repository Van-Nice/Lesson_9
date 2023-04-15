#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>

#ifndef LESSON_9_DEMOGRAPHICNODE_H
#define LESSON_9_DEMOGRAPHICNODE_H


class DemographicNode {
public:
    DemographicNode(DemographicInfo& object);
    void printNodeData();
private:
    DemographicNode* next;
    class demographicInfoObject;
    DemographicNode* prev;
};


#endif //LESSON_9_DEMOGRAPHICNODE_H
