
#include <iostream>

using namespace std;
#define max_size 10
void print();


int graph[max_size][max_size];
int arrival[max_size] = {0};
int depart[max_size] = {0};

void DFS(int source);
bool visited[max_size];
void disjoint();

int dis = 0;
int cost = 0;
int nodes, edges;

void initialize(){
    cost = 0;
    for (int i = 0; i < nodes; i++){
        visited[i] = false;
    }
}



int main() {
    int a, b;
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++){
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    print();

    DFS(0);


    disjoint();

    for (int i = 0; i < nodes; i++){
        cout << i << " " << arrival[i] << " " << depart[i] << endl;
    }
    cout << dis << endl;
    cout << "Hello world!" << endl;
    return 0;
}


void DFS(int source){

    visited[source] = true;

    //cout << source << " ";
    arrival[source] = cost;
    cost++;
    for (int i = 0; i < nodes; i++){
        if (graph[source][i] == 1){
            if (visited[i] == false){
                DFS(i);
            }
        }
    }
    depart[source] = cost;
    cost++;
}

void print(){
    for (int i = 0; i < nodes; i++){
        for (int j = 0; j < nodes; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

void disjoint(){
    initialize();
    for (int i = 0; i < nodes; i++){
        if (visited[i] == false){
            dis++;
            DFS(i);
        }
    }
}


/*
10 12
0 1
0 2
1 3
1 5
2 5
3 4
4 5
4 6
5 6
3 6
7 8
8 9
*/

/*
8 6
0 1
0 2
2 3
2 4
3 5
6 7
*/



