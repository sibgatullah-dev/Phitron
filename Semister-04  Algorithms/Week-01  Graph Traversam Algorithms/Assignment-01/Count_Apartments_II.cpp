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

int bfs(int sx, int sy) {
    queue<pair<int,int>> q;
    q.push({sx, sy});
    visit[sx][sy] = true;
    int room_count = 1; // count this room

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (is_valid(nx, ny)) {
                visit[nx][ny] = true;
                q.push({nx, ny});
                room_count++;
            }
        }
    }
    return room_count;
}

int main() {
    cin >> N >> M;
    grid.resize(N);

    for (int i = 0; i < N; i++) {
        cin >> grid[i];
    }

    memset(visit, false, sizeof(visit));

    vector<int> apartments;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (!visit[i][j] && grid[i][j] == '.') {
                int rooms = bfs(i, j); // count rooms in this apartment
                apartments.push_back(rooms);
            }
        }
    }

    if (apartments.empty()) {
        cout << 0 << "\n";
    } else {
        sort(apartments.begin(), apartments.end());
        for (int rooms : apartments) {
            cout << rooms << " ";
        }
        cout << "\n";
    }

    return 0;
}
