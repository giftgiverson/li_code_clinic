#ifndef __WEATHER_DATA_H
#define __WEATHER_DATA_H

#include "date_range.h"

class WeatherData
{
public:
    float get_coefficient(DateRange &dr) const { return 0; }
};

#endif // __WEATHER_DATA_H