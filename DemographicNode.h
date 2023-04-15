#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>

#ifndef LESSON_9_DEMOGRAPHICNODE_H
#define LESSON_9_DEMOGRAPHICNODE_H


class DemographicNode {
public:
    DemographicNode(string aRecord){

    }
    void printNodeData();
    DemographicNode* getPrev(DemographicNode prevNode);
    void setPrev();
    DemographicNode* getNext(DemographicNode nextNode);
    void setNext();
private:
    DemographicNode* next;
    class demographicInfoObject;
    DemographicNode* prev;
};


#endif //LESSON_9_DEMOGRAPHICNODE_H
