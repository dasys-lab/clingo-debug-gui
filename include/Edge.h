#pragma once

class Node;

class Edge{
public:
    Edge(std::String condition, std::string value);
    void addSource(Node* src);
    void addDestination(Node* dst);
    void setCondition(std::string condition);
    void setValue(std::string value);

    // Getters
    const Node* getSource();
    const Node* getDestination();
    std::string getCondition();
    std::string getValue();

private:
    std::string condition;
    std::string value;
    Node* source;
    Node* destination;
};