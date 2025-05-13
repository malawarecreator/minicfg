#include "minicfg.h"

CfgParser::CfgParser(std::string filename, std::vector<CfgLine> serializableLines) {
    this->filename = filename;
    this->lines = serializableLines;
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

    std::ifstream file(this->filename);
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            CfgLine newline(line);
            this->lines.push_back(newline);
        }
        file.close();

    } else {
        return 1;
    }
    return 0;
}

int CfgParser::serialize() {

    std::ofstream file(this->filename);
    // if the list is empty the data cannot be serializable
    if (this->lines.size() == 0) {
        return 1;
    }
    if (file.is_open()) {
        for (int i = 0; i < this->lines.size(); i++) {
            file << this->lines[i].line;
        }
    } else {
        return 1;
    }

    file.close();
    return 0;
}





CfgLine::CfgLine(std::string line) {
    this->line = line;
    std::vector<std::string> strs = splitString(line, '=');
    if (strs.empty() || strs.size() > 2) {
        return;
    }

    this->key = strs[0];
    this->value = strs[1];
}
