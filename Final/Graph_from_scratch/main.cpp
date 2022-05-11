#include <iostream>
#include<queue>

using namespace std;
const int max_size = 13;
void print();
void print_parent();
void print_time();

int graph[max_size][max_size] = {0};
int nodes, edges;
int m, n;

void DFS(int source);
bool visited[max_size];
int tim[max_size];
int root_time = 0;
int parent[max_size];
void disjoints();

void BFS(int source);
void initialize();
int level[max_size];
void level_print();
int parent2[max_size];
void print_parent2();

int cur;



int main() {
    cin >> nodes >> edges;

    for (int i = 0; i < edges; i++){
        cin >> m >> n;
        graph[m][n] = 1;
        graph[n][m] = 1;
    }
    print();
    cout << endl;
    cout << "initiating DFS---         ";
    DFS(0);
    cout << endl;
//    print_parent();
//    print_time();

    initialize();


    cout << "initiating BFS---         ";
    BFS(0);

    cout << "printing levels----       ";
    level_print();

    cout << "checking disjoints----    " << endl;
    disjoints();

    print_parent2();

    cout << "Hello world!" << endl;
    return 0;
}

void print(){
    for (int i = 0; i < nodes; i++){
        for (int j = 0; j < nodes; j++){
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

void DFS(int source) {
    visited[source] = true;

    cout << source << "\t";
    //pre
    for (int i = 0; i < nodes; i++){
        if (graph[source][i] == 1 && visited[i] == false) {
            tim[i] = tim[source] + 5;
            parent[i] = source;
            DFS(i);
        }
    }
    //cout << source << "\t";
    //post

}

void disjoints(){
    initialize();
    int count = 0;
    for (int i = 0; i < nodes; i++){
        if (visited[i] == false){
            //cout << "i = "<< i << endl;
            count++;
            DFS(i);
            cout << endl;
        }

    }

    cout << "disjoints = " << count << endl;
}

void print_parent(){
    for (int i = 0; i< nodes; i++){
        cout << parent[i] << "\t";
    }
    cout << endl;
}

void print_time(){
    for (int i = 0; i < nodes; i++){
        cout << tim[i] << "\t";
    }


    cout << endl;
}

void initialize(){
    for (int i = 0; i < nodes; i++){
        visited[i] = false;
    }
}

void BFS(int source) {
    queue<int> q;
    visited[source] = true;
    q.push(source);

    while (!q.empty()){
        cur = q.front();
        cout << cur << "\t";
        q.pop();

        for (int i = 0; i < nodes; i++){
            if (graph[cur][i] == 1){
                if (visited[i] == false){
                    level[i] = level[cur] + 1;
                    visited[i] = true;
                    q.push(i);
                    parent2[i] = cur;
                }
            }
        }
    }

    cout << endl;
}

void level_print(){
    for (int i = 0; i < nodes; i++){
        cout << level[i] << "\t";
    }

    cout << endl;
}

void print_parent2(){
    for (int i = 0; i< nodes; i++){
        cout << i << " parent = " << parent2[i] << endl;
    }
    cout << endl;
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


/*
7 10
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
*/


/*
13 14
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
7 9
10 11
10 12
*/
