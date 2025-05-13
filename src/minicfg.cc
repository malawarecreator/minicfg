#include "minicfg.h"

CfgReader::CfgReader(std::string filename) {
    this->filename = filename;
}

CfgLine::CfgLine(std::string line) {
    std::vector<std::string> strs = splitString(line, '=');
    if (strs.empty() || strs.size() > 2) {
        return;
    }

    this->key = strs[0];
    this->key = strs[1];
}