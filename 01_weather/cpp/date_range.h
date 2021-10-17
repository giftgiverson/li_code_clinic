#ifndef __DATE_RANGE_H
#define __DATE_RANGE_H

#include <iostream>
#include <time.h>

class DateRange
{
    time_t _start;
    time_t _end;
public:
    void set_range(time_t &start, time_t &end);

    std::ostream& dump(std::ostream& output);

    time_t get_start() const {return _start;}

    time_t get_end() const {return _end;}
};

std::ostream& operator<<(std::ostream &output, DateRange &dr) {
    return dr.dump(output);
}

std::istream& operator>>(std::istream &input, DateRange &dr);


#endif // __DATE_RANGE_H