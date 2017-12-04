/**
 * \file SnowPickingProblem.cpp
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
#include "../../include/model/Graph.hpp"
#include "../../include/model/Structs.hpp"
#include "../../include/util/DataAccess.hpp"

#include <iostream>

int main(int argc, char* argv[]) {

    DataAccess *data = new DataAccess(argv[1]);
    std::cout << data->getTestCaseAmount();
    //cartesianPoint point = data->getCartesianOriginPoint();
    return 0;
}