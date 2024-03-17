#include "ElectronicDevice.h"

    ElectronicDevice::ElectronicDevice(std::string manuf, std::string mod, std::string ser) {
        manufacturerName = manuf;
        modelName = mod;
        serialNumber = ser;
    };

    std::string ElectronicDevice::getManufacturerName() {
        return manufacturerName;
    }

    std::string ElectronicDevice::getSerialNumber() {
        return serialNumber;
    }

    std::string ElectronicDevice::getModelName() {
        return modelName;
    }

    std::string ElectronicDevice::to_string() {
	    return "ElectronicDevice: " + getManufacturerName() + ", " + getModelName() + "," + getSerialNumber();
    }
