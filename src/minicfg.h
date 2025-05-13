#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <fstream>

class CfgLine {
    public:
    std::string line;
    std::string key;
    std::string value;
    CfgLine(std::string line);
    
};

class CfgParser {
    public:
    std::vector<CfgLine> lines;
    std::string filename;
    CfgParser(std::string filename, std::vector<CfgLine> serializableLines = {});
    std::string get(std::string key);
    int deserialize();
    int serialize();
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