#include <iostream>
#define MAX 10
using namespace std;

class graphnode {
    int vertex, weight;
    graphnode *next;
    graphnode() {
        vertex = 0;
        weight = 0;
        next = NULL;
    }
};

class graph {
	graphnode* headnode[MAX];

};
