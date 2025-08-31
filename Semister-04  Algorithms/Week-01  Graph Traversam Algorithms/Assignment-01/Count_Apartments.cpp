#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid;
bool visit[1005][1005];

// Directions: up, down, left, right
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

bool is_valid(int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < M && !visit[x][y] && grid[x][y] == '.');
}

void bfs(int sx, int sy) {
    queue<pair<int,int>> q;
    q.push({sx, sy});
    visit[sx][sy] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (is_valid(nx, ny)) {
                visit[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> N >> M;
    grid.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> grid[i];
    }

    memset(visit, false, sizeof(visit));

    int apartments = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (!visit[i][j] && grid[i][j] == '.') {
                apartments++;
                bfs(i, j); // flood-fill this apartment
            }
        }
    }

    cout << apartments << "\n";
    return 0;
}
