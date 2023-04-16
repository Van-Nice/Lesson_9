//  Wilson Van Nice
#include "DemographicInfo.h"
#include "DemographicNode.h"
#include "DemographicLL.h"
#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    DemographicLL* demographicLl = new DemographicLL();
    demographicLl->printList();
    return 0;
}