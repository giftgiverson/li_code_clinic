#include <stdexcept>

#include "date_range.h"

void DateRange::set_range(time_t &start, time_t &end){
    if (start > end) throw std::invalid_argument("The range's end must be equal or greater than its start");
    _start = start;
    _end = end;
}

std::ostream& DateRange::dump(std::ostream& output) {
    return output << "Range [" << _start << " - " << _end << "]";
}

std::ostream& operator<<(std::ostream &output, DateRange &dr) {
    return dr.dump(output);
}

time_t verbose_read_time_t_from_istream(std::istream &input) {
    struct tm tm_time;
    std::cout << "\tYear: "; std::cin >> tm_time.tm_year; tm_time.tm_year -= 1900;
    std::cout << "\tMonth: "; std::cin >> tm_time.tm_mon; tm_time.tm_mon -= 1;
    std::cout << "\tDay: "; std::cin >> tm_time.tm_mday;
    std::cout << "\tHour (24): "; std::cin >> tm_time.tm_hour;
    std::cout << "\tMinute: "; std::cin >> tm_time.tm_min;
    std::cout << "\tSecond: "; std::cin >> tm_time.tm_sec;

    return mktime(&tm_time);
}

std::istream& operator>>(std::istream &input, DateRange &dr) {
    std::cout << "Range Start: " << std::endl;
    time_t start_time = verbose_read_time_t_from_istream(input);
    std::cout << "Range End: " << std::endl;
    time_t end_time = verbose_read_time_t_from_istream(input);
    dr.set_range(start_time, end_time);
    return input;
}
