#ifndef DICTIONARYLOOKUP_H
#define DICTIONARYLOOKUP_H

#include <string>
#include <unordered_set>

bool importFromFile(std::unordered_set<std::string> &dict, std::string fileName);
bool isWordValid(std::unordered_set<std::string> &dict, const std::string &word);
std::string isAnyValid(std::unordered_set<std::string> &dict, std::string input);

#endif // DICTIONARYLOOKUP_H
