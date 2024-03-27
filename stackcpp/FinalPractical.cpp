#include <bits/stdc++.h>
using namespace std;

#define V 4

void printSolution(int transitiveClosure[][V]);

void transitiveClosure(int graph[][V])
{
    int transitiveClosure[V][V], i, j, k;

    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            transitiveClosure[i][j] = transitiveClosure[i][j];

    for (k = 0; k < V; k++)
    {
        for (i = 0; i < V; i++)
        {
            for (j = 0; j < V; j++)
            {
                transitiveClosure[i][j] = transitiveClosure[i][j] ||
                                          (transitiveClosure[i][k] && transitiveClosure[k][j]);
            }
        }
    }
    printSolution(transitiveClosure);
}

void printSolution(int reach[][V])
{
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (i == j)
                cout << "1 ";
            else
                cout << reach[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int graph[V][V] = {{1, 1, 0, 1},
                       {0, 1, 1, 0},
                       {0, 0, 1, 1},
                       {0, 0, 0, 1}};

    transitiveClosure(graph);
    return 0;
}