/**
 * \file DataAccess.hpp
 * \date 26/11/2017
 * \author Lucas Fonseca dos Santos
 * \copyright GNU-3 Public License.
 * 
 * \section FILE DOCUMENTATION
 * 
 * FEDERAL UNIVERSITY OF LAVRAS - Algorithms in Graphs Discipline
 * PROFESSOR: MAYRON MOREIRA.
 * TOUR GUIDE PROBLEM SOLUTION SOFTWARE.
 * WRITTEN BY: LUCAS FONSECA DOS SANTOS (201712078).
 * 
 * This files describes ...
 */
#ifndef PARSER_H
#define PARSER_H 1

#include <string>
#include <vector>

class Parser {
	
	public:
		Parser();
		~Parser();
		std::string removeWhiteSpaces(std::string);
		std::vector<int>* getTokens(std::string);
};

#endif