#ifndef GRAPH_H
#define GRAPH_H

#define MAX_SIZE 10

class Graph
{
    public:
        Graph();
        //Graph(int nodes);

    protected:

    private:
        int nodes;
        int graph[nodes][nodes];
        int nodes, edge;
        bool visited[nodes];
};

#endif // GRAPH_H
