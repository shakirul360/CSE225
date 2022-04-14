#include <iostream>
#import <queue>

using namespace std;
#define max_size 10

int graph[max_size][max_size] = {0};
int node, edges;
void DFS(int i);
bool visited[max_size];

void initialize();
void BFS(int source);
void print();

int main() {

    cin >> node >> edges;
    print();
    int a, b;
    for (int i = 0; i < edges; i++){
        cin >> a >> b;

        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    print();

    //DFS(0);

    cout << "Hello world!" << endl;
    BFS(0);
    return 0;
}

void print(){
    for (int i = 0; i < node; i++){
        for (int j = 0; j < node; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;

    }
}

void DFS(int source){
    visited[source] = true;

    cout << source << "\t";
    for (int i = 0; i < node; i++){
        if (graph[source][i] == 1 && visited[i] == false){
            visited[i] = true;
            DFS(i);
        }
    }
}

void BFS(int source) {
    queue<int> q;
    visited[source] = true;
    q.push(source);
    int cur;

    while (!q.empty()){
        cur = q.front();
        cout << cur << "\t";
        q.pop();

        for (int i = 0; i < node; i++){
            if (graph[cur][i] == 1){
                if (visited[i] == false){
                    //level[i] = level[cur] + 1;
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }
    cout << endl;
}



void initialize(){
    for (int i = 0; i < node; i++){
        visited[i] = false;
    }
}



/*
8 10
0 1
0 2
1 2
1 3
2 3
2 4
3 4
3 5
5 6
6 7
*/
