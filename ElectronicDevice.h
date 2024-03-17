#include <iostream>
#ifndef ElectronicDevice_H
#define ElectronicDevice_H

class ElectronicDevice {

public:
    std::string manufacturerName;
    std::string modelName;
    std::string serialNumber;
  
    std::string getManufacturerName();
    std::string getModelName();
    std::string getSerialNumber();
 
    std::string to_string();
    ElectronicDevice(std::string manuf, std::string mod, std::string ser);
};

#endif
