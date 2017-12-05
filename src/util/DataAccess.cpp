/**
 * \file DataAccess.cpp
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
 * This files contains the DataAccess object implementation, used
 * for text data file information extraction and get informations
 * about it.
 */
#include "../../include/util/DataAccess.hpp"
#include "../../include/util/Parser.hpp"
#include "../../include/model/Structs.hpp"

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

DataAccess::DataAccess(std::string fileName) {
    this->inputFileName = fileName.c_str();
    this->outputFileName = "out.txt";
    this->parser = new Parser();
}

DataAccess::~DataAccess() {

}

int DataAccess::getEdgeSetCardinality() {

}

int DataAccess::getVerticeSetCardinality() {

}


std::vector<testCase*>* DataAccess::getTestCases() {
    testCase *tmpTestCase;
    cartesianPoint* tmpCartesianPoint;
    std::vector<int> *tokens = new std::vector<int>();
    std::vector<testCase*> *testCaseArray = new std::vector<testCase*>();
    this->inputFile.open(this->inputFileName.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);
    std::string tmpLine = "";
    std::string line = "";
    int counter = 0;
    bool begin = true;

    if(this->inputFile.is_open()) {
        while(getline(this->inputFile, line)) {
            if(line.size() == 0) {
                std::cout << "one";
                begin = true;
                continue;
            }else if(line.size() > 0 && begin) {
                begin = false;
                counter++;
                testCaseArray->push_back(new testCase);
                testCaseArray->back()->index = counter;
                testCaseArray->back()->points = new cartesianPoint;
                tokens = this->parser->getTokens(line);
                testCaseArray->back()->points->x = tokens->at(0);
                testCaseArray->back()->points->y = tokens->at(1);
                continue;
            }else if(line.size() > 0 && !begin) {
                tokens = this->parser->getTokens(line);
                testCaseArray->back()->columnAmount = tokens->size();
                int rowTmpCounter = 0;
                std::streampos position = this->inputFile.tellg();
                getline(this->inputFile, line);
                std::cout << std::endl << line << std::endl;
                while(line.size() > 0) {
                    rowTmpCounter++;
                    getline(this->inputFile, line);
                    std::cout << std::endl << line << std::endl;
                }
                this->inputFile.seekg(position);
                testCaseArray->back()->adjacencyMatrix = new int*[rowTmpCounter];
                for(unsigned row = 0 ; row < rowTmpCounter ; row++) {
                    testCaseArray->back()->adjacencyMatrix[row] = new int[testCaseArray->back()->columnAmount];
                    getline(this->inputFile, line);
                    tokens = this->parser->getTokens(line);
                    for(unsigned u = 0 ; u < tokens->size() ; u++) {
                        testCaseArray->back()->adjacencyMatrix[row][u] = tokens->at(u);
                    }
                }
                continue;
            }
            std::cout << "LIXO ";
        }

        return NULL;
    }else {
        this->inputFile.close();
        return NULL;
    }
}

cartesianPoint* DataAccess::getCartesianOriginPoint() {
    return NULL;
}
/*cartesianPoint* DataAccess::getCartesianOriginPoint() {
    cartesianPoint *point = new cartesianPoint;
    this->inputFile.open(this->inputFileName.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);
    std::string line = "";
    if(this->inputFile.is_open()) {
        getline(this->inputFile, line);
        while(line != "") {
            getline(this->inputFile, line);
        }
        getline(this->inputFile, line);
        std::vector<int> *tokens = this->parser->getTokens(line);
        point->x = tokens->at(0);
        point->y = tokens->at(1);
        this->inputFile.close();
        return point;
    }
    this->inputFile.close();
    return NULL;
    
}*/

int DataAccess::getTestCaseAmount() {
    this->inputFile.open(this->inputFileName.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);
    std::string firstLine = "";
    if(this->inputFile.is_open()) {
        getline(this->inputFile, firstLine);
        firstLine = this->parser->removeWhiteSpaces(firstLine);
        this->inputFile.close();
        return atoi(firstLine.c_str());
    }else {
        this->inputFile.close();
        return 0;
    }
    return 0;
}

