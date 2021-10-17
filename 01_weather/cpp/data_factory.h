#ifndef __DATA_FACTORY_H
#define __DATA_FACTORY_H

#include <memory>
#include <string>
#include "weather_data.h"

class EnvironmentalTextFolderDataFactory {
    std::string _path;
public:
    /**
     * Initialize this instance.
     * 
     * The instance will serch the specified path for text files from which to
     * populate the data.
     * 
     * @param path Folder containing environmental data text files.
     **/
    EnvironmentalTextFolderDataFactory(const std::string &path) : _path(path){};

    /**
     * Gets the weather data.
     * 
     * @return populated WeatherData.
     **/
    std::unique_ptr<WeatherData> get_data() {return std::make_unique<WeatherData>();}
};

#endif // __DATA_FACTORY_H
