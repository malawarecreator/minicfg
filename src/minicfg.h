#include <string>
#include <vector>
#include <sstream>
#include <iostream>

class CfgLine {
    public:
    std::string line;
    std::string key;
    std::string value;
    CfgLine(std::string line);
    
};

class CfgReader {
    public:
    std::vector<CfgLine> lines;
    std::string filename;
    CfgReader(std::string filename);

};



std::vector<std::string> splitString(const std::string& str, char delimiter) {
    std::vector<std::string> tokens;
    std::stringstream ss(str);
    std::string token;

    while (std::getline(ss, token, delimiter)) {
        tokens.push_back(token);
    }

    return tokens;
}