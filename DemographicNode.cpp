#include "DemographicInfo.h"
#include <string>
#include <iostream>
#include <iomanip>
#include "DemographicNode.h"
#include "DemographicLL.h"

// Print function
void DemographicNode::printNodeData() {
    getDemographic()->printInfoShort();
}
// Getters
DemographicNode *DemographicNode::getPrev() {
    return prev;
}
DemographicNode *DemographicNode::getNext() {
    return next;
}
DemographicInfo *DemographicNode::getDemographic() {
    return demographic;
}

// Setters
DemographicNode *DemographicNode::setPrev(DemographicNode* prevNode) {
    DemographicNode* tmpPrev = nullptr;
    tmpPrev = this->prev;
    this->prev = prevNode;
    prevNode->prev = tmpPrev;

}
DemographicNode *DemographicNode::setNext(DemographicNode* nextNode) {
    DemographicNode* tmpNext = nullptr;
    tmpNext = this->next;
    this->next = nextNode;
    nextNode->next = tmpNext;
}

DemographicInfo *DemographicNode::setDemographic(DemographicInfo demographicInfo) {
    this->demographic = &demographicInfo;
}
