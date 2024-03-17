#include "ElectronicDevice.h"

    std::string manufacturerName;
    std::string modelName;
    std::string serialNumber;

    ElectronicDevice::ElectronicDevice(std::string manuf, std::string mod, std::string ser) {
        manufacturerName = manuf;
        modelName = mod;
        serialNumber = ser;
    };

    std::string getManufacturerName() {
        return manufacturerName;
    }

    std::string getSerialNumber() {
        return serialNumber;
    }

    std::string getModelName() {
        return modelName;
    }
