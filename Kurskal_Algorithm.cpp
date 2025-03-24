/*Spanning Tree by  ...
Kruskal'S Algorithm */

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

#define V 6

vector<int> disjoint_set(V,-1);

int find(int u)
{
    int x = u;

    while(disjoint_set[x] > 0)
    {
        x = disjoint_set[x];
    }

    return x;
}

void weighted_union(int u, int v)
{
    int parent_of_u = find(u);
    int parent_of_v = find(v);

    if(disjoint_set[parent_of_u] < disjoint_set[parent_of_v])
    {
        disjoint_set[parent_of_u] += disjoint_set[parent_of_v];
        disjoint_set[parent_of_v] = u;
    }
    else
    {
        disjoint_set[parent_of_v] += disjoint_set[parent_of_u];
        disjoint_set[parent_of_u] = v;
    }
}

void mst(int arr[V][V])
{
    vector<pair<int,pair<int,int>>> graph;
    
    for(int i = 0; i < V; i++)
    {
        for(int j = 0; j < V; j++)
        {
            if ( arr[i][j] )
                graph.push_back( { arr[i][j], {i,j} } );
        }
    }
    
    sort(graph.begin(),graph.end());
    
    int u, v;
    
    for(int i = 0; i < graph.size(); i++)
    {
        u = find(graph[i].second.first);
        v = find(graph[i].second.second);
        
        
        if(u != v) 
        {
            cout << "Edges : " << graph[i].second.first << "-" << graph[i].second.second << "; Weight : " << graph[i].first << endl;
            weighted_union(u, v);
        }
    }
}

int main()
{
    int arr[V][V] = {
                        {0, 8, 9, 0, 0, 0},
                        {8, 0, 3, 6, 0, 0},
                        {9, 3, 0, 4, 3, 0},
                        {0, 6, 4, 0, 2, 10},
                        {0, 0, 3, 2, 0, 2},
                        {0, 0, 0, 10, 2, 0}
                    };
    
    mst(arr);
    
    return 0;
    
}


