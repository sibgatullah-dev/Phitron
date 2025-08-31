#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid;
bool visit[1005][1005]; // visited matrix

// Directions: up, down, left, right
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool is_valid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && !visit[x][y] && (grid[x][y] == '.' || grid[x][y] == 'A' || grid[x][y] == 'B'));
}

bool bfs(int sx, int sy, int ex, int ey) {
    queue<pair<int,int>> q;
    q.push({sx, sy});
    visit[sx][sy] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == ex && y == ey) return true; // reached B

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (is_valid(nx, ny)) {
                visit[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
    return false;
}

int main() {
    cin >> N >> M;
    grid.resize(N);

    pair<int,int> start, end;
    for (int i = 0; i < N; i++) {
        cin >> grid[i];
        for (int j = 0; j < M; j++) {
            if (grid[i][j] == 'A') start = {i, j};
            if (grid[i][j] == 'B') end = {i, j};
        }
    }

    memset(visit, false, sizeof(visit));

    if (bfs(start.first, start.second, end.first, end.second))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
