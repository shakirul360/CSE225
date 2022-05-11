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
void oppo_pos();

void DFS(int x, int y);
bool is_valid(int x, int y);
int cur_time = 0;
int time[max_size][max_size];
void print_time();
int nx, ny;


void initialize();
void BFS(int x, int y);
void BFS2(int x, int y);
int level1[max_size][max_size];
int level2[max_size][max_size];
//int level[max_size][max_size];
void print_level();
void print_level2();
void print_graph();


int main() {

    //knight1 = [7][1], [5][5]
    initialize();

    print_graph();

    BFS(7, 1);
    cout << " *********************" << endl;
    print_level();


    cout << "Hello World!" << endl;
    initialize();
    BFS2(5,5);
    cout << "*****************************" << endl;
    print_level2();

    cout << "Knight 1 takes " << level1[2][1] << " Steps" << endl;
    cout << "Knight 2 takes " << level2[2][1] << " Steps" << endl;

    int winner;
    int steps;

    if (level1[2][1] < level2[2][1]){
        winner = 1;
        steps = level1[2][1];
    } else {
        winner = 2;
        steps = level2[2][1];
    }

    cout << "therefore, shortest number of moves required is " << steps << " and by knight " << winner;

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
        if(x >= 0 && y >= 0 && x < max_size && y < max_size && visited[x][y] == false && graph[x][y] >= 0 && graph[x][y] != 99)
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

        for (int i = 0; i < 8; i++){
            next_x = new_x + dx[i];
            next_y = new_y + dy[i];

            if (is_valid(next_x, next_y) == true){
                visited[next_x][next_y] = true;

                cur.x = next_x;
                cur.y = next_y;

                q.push(cur);
                level1[next_x][next_y] = level1[new_x][new_y] + 1;
            }
        }
    }
}

void BFS2(int x, int y){
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

        for (int i = 0; i < 8; i++){
            next_x = new_x + dx[i];
            next_y = new_y + dy[i];

            if (is_valid(next_x, next_y) == true){
                visited[next_x][next_y] = true;

                cur.x = next_x;
                cur.y = next_y;

                q.push(cur);
                level2[next_x][next_y] = level2[new_x][new_y] + 1;
            }
        }
    }
}


void print_level(){
    for (int i = 0; i < max_size; i++){
        for (int j = 0; j < max_size; j++){
            cout << level1[i][j] << "\t";
        }
        cout << endl;
    }
}


void print_level2(){
    for (int i = 0; i < max_size; i++){
        for (int j = 0; j < max_size; j++){
            cout << level2[i][j] << "\t";
        }
        cout << endl;
    }
}

void print_graph(){
    for (int i = 0; i < max_size; i++){
        for (int j = 0; j < max_size; j++){
            cout << graph[i][j] << "\t";
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
    //king
    graph[0][2] = 10;

    //bishops
    graph[0][3] = 51;
    graph[0][5] = 52;

    //pawns
    graph[1][0] = 61;
    graph[1][1] = 62;
    graph[2][4] = 63;
    graph[2][7] = 64;
    graph[3][3] = 65;

    //queen
    graph[2][1] = 2;

    //knights
    graph[2][2] = 31;
    graph[1][5] = 32;

    //rooks
    graph[4][1] = 41;
    graph[1][3] = 42;

    //own team

    graph[7][0] = 99;
    graph[7][1] = -3; //knights
    graph[7][3] = 99;
    graph[7][7] = 99;
    graph[6][0] = 99;
    graph[6][2] = 99;
    graph[6][5] = 99;
    graph[6][6] = 99;
    graph[5][1] = 99;
    graph[5][4] = 99;
    graph[5][5] = -4; //knight
    graph[4][3] = 99;
    graph[4][7] = 99;

}



