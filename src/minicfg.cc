#include "minicfg.h"

CfgParser::CfgParser(std::string filename, std::vector<CfgLine> serializableLines) {
    this->filename = filename;
}

std::string CfgParser::get(std::string key) {
    if (this->lines.empty()) {
        return "";
    }

    for (int i = 0; i < this->lines.size(); i++) {
        if (this->lines[i].key == key) {
            return this->lines[i].value;
        }
    }
    return "";
}

int CfgParser::deserialize() {
    // TODO: implement reading file line by line to get data
}

CfgLine::CfgLine(std::string line) {
    std::vector<std::string> strs = splitString(line, '=');
    if (strs.empty() || strs.size() > 2) {
        return;
    }

    this->key = strs[0];
    this->key = strs[1];
}