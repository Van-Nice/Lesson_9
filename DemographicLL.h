#include "DemographicInfo.h"
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
    }
private:
    DemographicLL* head;
    DemographicLL* tail;
};


#endif //LESSON_9_DEMOGRAPHICLL_H
