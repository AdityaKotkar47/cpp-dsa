#include <bits/stdc++.h>

using namespace std;

void solveMazeUtil(int maze[][4], int x, int y, string sol, int N, vector<vector<bool>> vis)
{
    // if the rat reaches the bottom right corner, print the solution
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1)
    {
        cout << sol << "\n";
        return;
    }
    // if the rat can move up, move up
    if (x - 1 >= 0 && !vis[x - 1][y] && maze[x - 1][y] == 1)
    {
        vis[x][y] = true;
        solveMazeUtil(maze, x - 1, y, sol + "U", N, vis);
        vis[x][y] = false;
    }
    // if the rat can move down, move down
    if (x + 1 < N && !vis[x + 1][y] && maze[x + 1][y] == 1)
    {
        vis[x][y] = true;
        solveMazeUtil(maze, x + 1, y, sol + "D", N, vis);
        vis[x][y] = false;
    }
    // if the rat can move right, move right
    if (y + 1 < N && !vis[x][y + 1] && maze[x][y + 1] == 1)
    {
        vis[x][y] = true;
        solveMazeUtil(maze, x, y + 1, sol + "R", N, vis);
        vis[x][y] = false;
    }
    // if the rat can move left, move left
    if (y - 1 >= 0 && !vis[x][y - 1] && maze[x][y - 1] == 1)
    {
        vis[x][y] = true;
        solveMazeUtil(maze, x, y - 1, sol + "L", N, vis);
        vis[x][y] = false;
    }
}
void solveMaze(int maze[][4], int N)
{
    string sol = "";

    vector<vector<bool>> vis(N, vector<bool>(N, false));
    // if the initial position allows, move the rat
    if (maze[0][0] == 1)
    { // only move if the initial position allows
        solveMazeUtil(maze, 0, 0, sol, N, vis);
    }
}

int main()
{
    int maze[4][4] = {{1, 0, 0, 0},
                      {1, 1, 0, 1},
                      {1, 1, 0, 0},
                      {0, 1, 1, 1}};
    solveMaze(maze, 4);
}
