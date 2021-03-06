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
#ifndef DATA_ACCESS_H
#define DATA_ACCESS_H 1

#include "Parser.hpp"
#include "../model/Structs.hpp"

#include <string>
#include <fstream>

/**
 * \class DataAccess
 * 
 * \section CLASS DOCUMENTATION
 * 
 * This class describes the DataAccess object. This object is responsible
 * for provides the access and all manipulations of the data files. It
 * loads and writes data text files.
 * 
 */
class DataAccess {

    public:

        /**
         * \brief DataAccess object constructor.
         * 
         */
        DataAccess(std::string);

        /**
         * \brief a DataAccess object destructor.
         * 
         */
        ~DataAccess();

        /**
         * \brief getEdgesSetCardinality
         * 
         * \return int A integer edge set cardinality.
         */
        int getEdgeSetCardinality();

        /**
         * \brief getVertexsSetCardinality
         * 
         * \return int A integer vertex set cardinality.
         */
        int getVerticeSetCardinality();

        std::vector<testCase*>* getTestCases();

        cartesianPoint* getCartesianOriginPoint();

        int getTestCaseAmount();

    private:
        
        Parser *parser;
        /**
         * \var inputFile This is a input file of data access object.
         */
        std::fstream inputFile;

        /**
         * \var outputFile This is a output file of data access object.
         */
        std::fstream outputFile;
        std::string outputFileName;

        /**
         * \var inputFileName Input data text file name.
         */
        std::string inputFileName;

        /**
         * \var pharser A pharser object for information extraction of strings.
         * 
         */
        //Parser* parser;

        /**
         * \brief fast_atoi
         * 
         * \return int A integer converted by const char type.
         */
        int fast_atoi(const char*);

        int** dynamicMatrixSimpleFactory(int, int);
};

#endif