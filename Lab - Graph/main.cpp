#include<iostream>
using namespace std;
#define max_size 10
int graph[max_size][max_size] = {0};
int node, edge;
bool visited[max_size];

void AdjacentNode(int source)
{
    for(int i= 0 ; i<node; i++)
    {
        if(graph[source][i] == 1)
        {
            cout<<i<<" ";
        }
    }
}
void Initialize()
{
    for(int i= 0 ; i<node; i++)
    {
        visited[i] = false;
    }
}
void DFS(int source)
{
    visited[source] = true;

    //cout << source << "\t"; //pre - order

    for(int i= 0 ; i < node; i++) {

        if(graph[source][i] == 1) {
            if(visited[i] == false) {
                DFS(i);
            }
        }
    }
    cout << source << "\t"; //post-order

}
int main()
{
    cin>>node>>edge;
    for(int i=0 ; i <edge; i++)
    {
        int m,n;
        cin>>m>>n;
        graph[m][n] = 1;
        graph[n][m] = 1;
    }
    for(int i= 0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    DFS(0);
    return 0;
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
