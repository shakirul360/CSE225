#include <iostream>
using namespace std;
#include <queue>
#define max_size  8

struct node{
    int x;
    int y;
};

int graph[max_size][max_size] = {0};
// U, D, L, R, DUL, DUR, DDL, DDR
int dx[8] = {0, 0, -1, 1, -1, 1, -1, 1};
int dy[8] = {1, -1, 0, 0, 1, 1, -1, -1};
bool visited[max_size][max_size];

void DFS(int x, int y);
bool is_valid(int x, int y);
int cur_time = 0;
int time[max_size][max_size];
void print_time();
int nx, ny;


void initialize();
void BFS(int x, int y);
int level[max_size][max_size];
void print_level();

int main() {
    cout << "BFS" << endl;
    BFS(0,0);
    print_level();

    initialize();
    cout << "DFS" << endl;
    DFS(0,0);
    print_time();
    cout << "Hello World!" << endl;
}


void DFS(int x, int y){

    visited[x][y] = true;
    time[x][y] = cur_time;
    cur_time++;

    for (int i = 0; i < 4; i++){
        nx = x + dx[i];
        ny = y + dy[i];

        if (is_valid(nx, ny) == true){
            DFS(nx, ny);
        }
    }
}


void print_time(){
    for (int i = 0; i < max_size; i++){
        for (int j = 0; j < max_size; j++){
            cout << time[i][j] << "\t";
        }
        cout << endl;
    }
}


bool is_valid(int x, int y){
        if(x >= 0 && y >= 0 && x < max_size && y < max_size && visited[x][y] == false)
            return true;
        else
            return false;
}


void BFS(int x, int y){
    int new_x, new_y;
    int next_x, next_y;

    queue<node>q;
    node cur;

    visited[x][y] = true;

    cur.x = x;
    cur.y = y;
    q.push(cur);

    while(!q.empty()){

        new_x = q.front().x;
        new_y = q.front().y;
        q.pop();

        for (int i = 0; i < 4; i++){
            next_x = new_x + dx[i];
            next_y = new_y + dy[i];

            if (is_valid(next_x, next_y) == true){
                visited[next_x][next_y] = true;

                cur.x = next_x;
                cur.y = next_y;

                q.push(cur);
                level[next_x][next_y] = level[new_x][new_y] + 1;
            }
        }

    }

}


void print_level(){
    for (int i = 0; i < max_size; i++){
        for (int j = 0; j < max_size; j++){
            cout << level[i][j] << "\t";
        }
        cout << endl;
    }
}

void initialize(){

    for (int i = 0; i < max_size; i++){
        for (int j = 0; j < max_size; j++){
            visited[i][j] = false;
        }
    }
}
