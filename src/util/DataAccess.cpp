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
#include <iostream>
DataAccess::DataAccess(std::string fileName) {
    this->inputFileName = fileName;
    this->outputFileName = "out.txt";
    //this->parser = new Parser();
}

DataAccess::~DataAccess() {

}

int DataAccess::getEdgeSetCardinality() {

}

int DataAccess::getVerticeSetCardinality() {

}

int** DataAccess::getGraphDescription() {

}

int DataAccess::getOriginCoordinate() {

}

int DataAccess::getTargetCoordinate() {

}

int DataAccess::getTestCaseAmount() {
    this->inputFile.open(this->inputFileName, std::fstream::in | std::fstream::out | std::fstream::app);
    std::string firstLine = "";
    if(this->inputFile.is_open()) {
        getline(this->inputFile, firstLine);
        return atoi(firstLine.c_str());
    }else {
        return 0;
    }
}

