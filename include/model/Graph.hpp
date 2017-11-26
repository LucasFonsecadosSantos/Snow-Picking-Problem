/**
 * \file Graph.hpp
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
 * This files describes the graph data structure header with 
 * all methods prototypes and constants.
 */
#ifndef GRAPH_DATA_STRUCTURE_H
#define GRAPH_DATA_STRUCTURE_H 1

/**
 * \class Graph
 * 
 * \section CLASS DOCUMENTATION
 * 
 * This class describes a Graph data structure object. Into this, are
 * listed all methods and constructors prototypes with params and data returns.
 * It is used by the algorithm to solve the problem core producing by the object
 * a mathematical modeling with a graph. With the model, it is possible to apply
 * a lot of algorithms as Deep Search and others to solve the question 
 * with efficiency,
 */
class Graph {
    public:
        Graph();
        ~Graph();
        void setVerticeSetCardinality(int);
        void setEdgeSetCardinality(int);
        void setAdajacencyMatrix(int);
        inline int getVerticeSetCardinality();
        inline int getEdgeSetCardinality();
    private:
        int verticeSetCardinality;
        int edgeSetCardinality;
        int** adjacencyMatrix;
};

#endif