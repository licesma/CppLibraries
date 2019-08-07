#pragma once
#include <vector>
using namespace std;
class GraphNode {
public:
	int val;
	bool visited;
	vector<GraphNode*>* adyacent;
public:
	GraphNode(int val) {
		this->val = val;
		visited = false;
		adyacent = new vector<GraphNode*>();
	}
	void add(GraphNode* nd) { //for undirected graphs
		adyacent->push_back(nd);
		nd->dirAdd(this);
	}
	void dirAdd(GraphNode* nd) { //for directed graphs
		adyacent->push_back(nd);
	}
	void printAdyacent() {
		cout << "["; GraphNode* pr = nullptr;
		for (GraphNode* gr : *adyacent) {
			if (pr != nullptr) {
				cout << pr->val<<", ";
			}
			pr = gr;
		}
		cout << pr->val << "]";
	}
};
class Graph {
public:
	vector<GraphNode*>* nodes;
public:
	Graph() {
		nodes = new vector<GraphNode*>();
	}
	void add(GraphNode* gr) {
		nodes->push_back(gr);
	}
	
};
