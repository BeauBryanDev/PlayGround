/*Spanning Treee By  ..
Prinn's Algorithm .*/

#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;
//make it be V : 6 SIZE .
#define V 6

typedef pair<int,pair<int,int>> p;
priority_queue<p,vector<p>,greater<p>> pq;  

vector<int> vis(V, 0);

void mst(int arr[V][V])
{
  
  pq.push({0,{0,-1}});
  
  int node, weight, parent;
  
  int sum = 0;
  
  while(!pq.empty())
  {
    auto temp = pq.top();
    pq.pop();
    
    node = temp.second.first;
    weight = temp.first;
    parent = temp.second.second;    
    
    if(!vis[node])
    {
      vis[node] = 1;
      
      for(int i = 0; i < V; i++)
      {
        if(!vis[i] && arr[node][i])
          pq.push({arr[node][i],{i,node}});    
      }
            
      if(parent != -1)
      {
        cout << "Edge : " << parent << "-" << node << endl;
        sum += weight;
      }  
    }
  }
  
  cout << "Sum of the edges in MST : " << sum << endl;
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

