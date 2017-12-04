
#include "../../include/model/Graph.hpp"

Graph::Graph() {

}

Graph::~Graph() {

}

inline void Graph::setVerticeSetCardinality(int cardinality) {
	this->verticeSetCardinality = cardinality;
}

inline void Graph::setEdgeSetCardinality(int cardinality) {
	this->edgeSetCardinality = cardinality;
}