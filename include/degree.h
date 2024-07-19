#pragma once

#include <string>
#include <map>

//Define an enumerated data type for degree  programs
enum DegreeProgram { SECURITY, NETWORK, SOFTWARE };

//Map to associate enum values with their string representations
const std::map<DegreeProgram, std::string> DegreeProgramStrings = {
    {SECURITY, "Security"},
    {NETWORK, "Network"},
    {SOFTWARE, "Software"}
};