#pragma once

#include <vector>

class Edge;

class Node{
public:
    Node(std::string name, std::string type, std::vector<std::string> tags);
    void setPos(int x, int y);
    void addTag(std::string tag);
    void addEdge(Edge *edge);
    void setName(std::string name);
    void setType(std::string type);

    // Getters
    int getXPos();
    int getYPos();
    const std::vector<std::string> &getTags();
    const std::vector<Edge*> &getEdges();
    std::string getName();
    std::string getType();

private:
    int xPos;
    int yPos;
    std::string name;
    std::string type;
    std::vector<std::string> tags;
    std::vector<Edge*> edges;
};