#include <iostream>
#pragma once
#ifndef ELECTRONICDEVICE_H
#define ELECTRONICDEVICE_H

class ElectronicDevice {

private:
    std::string manufacturerName;
    std::string modelName;
    std::string serialNumber;
    
public:
    ElectronicDevice(std::string manuf, std::string mod, std::string ser);

    std::string getManufacturerName();
    std::string getModelName();
    std::string getSerialNumber();
 
    std::string to_string();
};

#endif
