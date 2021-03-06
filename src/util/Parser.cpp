#include "../../include/util/Parser.hpp"
#include "../../include/model/Structs.hpp"

#include <cstddef>
#include <string>
#include <cstdlib>
#include <iostream>
Parser::Parser() {

}

Parser::~Parser() {

}

std::string Parser::removeWhiteSpaces(std::string line) {
	if(line == "") return NULL;
	std::string tmpString = "";
	for(unsigned i = 0 ; i < line.size() ; i++) {
		if(line[i] != ' ') {
			tmpString += line[i];
		}else {
			continue;
		}
	}
	return tmpString;
}

std::vector<int>* Parser::getTokens(std::string line) {
	if(line == "") return NULL;
	std::vector<int> *array = new std::vector<int>();
	std::string tmpString;
	bool hasOcurrency = false;
	for(unsigned i = 0 ; i < line.size() ; i++) {
		if(line[i] != ' ') {
			if(!hasOcurrency) {
				array->push_back(atoi(tmpString.c_str()));
				tmpString = "";
			}
			hasOcurrency = true;
			tmpString += line[i];
		}else {
			hasOcurrency = false;
			continue;
		}
	}
	return array;
}
