//
// Created by Joshua Geese on 18.11.20.
//

#include <string>

#ifndef UNTITLED_PATIENT_H
#define UNTITLED_PATIENT_H


class Patient {
    int id = 1 ;
    std::string name = "Max Mustermann";
    int gender = 1;
    bool pregnant = 0;
    int BMI = 28;
    bool MetalTransplant = 1;
    std::string ImagingMethod = "MRI";
    int MedicalImagingDeviceID = 1;

};


#endif //UNTITLED_PATIENT_H
