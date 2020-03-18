#pragma once

#include <vector>
#include "Edge.h"
#include "Node.h"

class wxDC;

class Graph{
public:
    Graph();
    void addNode()
    void draw(wxDC *dc);
private:
    std::vector<Node> nodes;
    std::vector<Edge> edges;
};