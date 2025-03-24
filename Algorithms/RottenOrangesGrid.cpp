#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>

using namespace std;

vector<pair<int, int>> foundRottingOranges(vector<vector<int>> &grid)
{
    vector<pair<int, int>> rottenOranges;
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 2)
            {
                rottenOranges.push_back({i, j});
            }
        }
    }
    return rottenOranges;
}

int rottingOranges(vector<vector<int>> &grid)
{
    vector<pair<int, int>> origins = foundRottingOranges(grid);

    if (origins.empty()) // No hay naranjas podridas
    {
        return -1;
    }
    queue<pair<int, int>> q;
    for (const auto &origin : origins)
    {
        q.push(origin);
    }

    unordered_set<int> visited;

    int days = 0;
    for (const auto &origin : origins)
    {
        visited.emplace(origin.first * grid[0].size() + origin.second);
    }

    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            pair<int, int> current = q.front();
            q.pop();

            int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
            for (const auto &dir : directions)
            {
                int newRow = current.first + dir[0];
                int newCol = current.second + dir[1];
                int newPosition = newRow * grid[0].size() + newCol;

                if (newRow >= 0 && newRow < grid.size() && newCol >= 0 && newCol < grid[0].size() &&
                    grid[newRow][newCol] == 1 && visited.find(newPosition) == visited.end())
                {
                    q.push({newRow, newCol});
                    grid[newRow][newCol] = 2;
                    visited.insert(newPosition);
                }
            }
        }
        if (!q.empty())
        {
            days++;
        }
    }

    for (const auto &row : grid)
    {
        for (int cell : row)
        {
            if (cell == 1)
            {
                return -1;
            }
        }
    }

    return days;
}

int main()
{
    vector<vector<int>> grid{{2, 1, 1}
                            ,{1, 1, 0},
                             {0, 1, 2}};
                             
    vector<vector<int>> grid2{{ 2,2,2,1,1,1,0,0 }, {1,1,1,0,0,0,1,0},{0,0,0,2,1,0,1,0},{0,0,0,0,0,1,1,1},{0,0,0,0,1,1,0,0},{0,0,0,0,1,0,2,1,0},{0,0,0,1,1,1,0,0},{0,1,0,0,0,1,1,1 } };
                             
    cout << rottingOranges(grid2) << endl;
    
    return 0;
}














