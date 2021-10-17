#include <iostream>
#include "data_factory.h"
#include "date_range.h"

using namespace std;

int main()
{
   cout << "Hello, Code Clinic! This the CPP implementation of Weather Statistics." << endl;

   //1. load data
   auto wd = EnvironmentalTextFolderDataFactory("..").get_data();
   //2. get date range from user
   DateRange dr;
   cout << "Please type range:";
   cin >> dr;
   //3. show barometric coefficient
   cout << std::endl << "Coefficient: " << wd->get_coefficient(dr) << std::endl;
}
