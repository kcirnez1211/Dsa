#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> m, int n, int x, int y, vector<vector<int>> visited)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
        return true;
    else
        return false;
}

void solve(vector<vector<int>> m, int n, int x, int y, vector<vector<int>> visited, string path, vector<string> &ans)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    visited[x][y] = 1;

    // down
    int newX = x + 1;
    int newY = y;
    if (isSafe(m, n, newX, newY, visited))
    {
        path.push_back('D');
        solve(m, n, newX, newY, visited, path, ans);
        path.pop_back();
    }

    // left
    newX = x;
    newY = y - 1;
    if (isSafe(m, n, newX, newY, visited))
    {
        path.push_back('L');
        solve(m, n, newX, newY, visited, path, ans);
        path.pop_back();
    }

    // right
    newX = x;
    newY = y + 1;
    if (isSafe(m, n, newX, newY, visited))
    {
        path.push_back('R');
        solve(m, n, newX, newY, visited, path, ans);
        path.pop_back();
    }

    // up
    newX = x - 1;
    newY = y;
    if (isSafe(m, n, newX, newY, visited))
    {
        path.push_back('U');
        solve(m, n, newX, newY, visited, path, ans);
        path.pop_back();
    }

    visited[x][y] = 0;
}

int main()
{
    vector<vector<int>> m;
    int n;
    cin >> n;
    vector<string> ans;

    // inputting vector
    int a;
    for (int i = 0; i < n; i++)
    {
        vector<int> p;
        for (int j = 0; j < n; j++)
        {
            cin >> a;
            p.push_back(a);
        }
        m.push_back(p);
    } // ends

    if (m[0][0] == 0 || m[n - 1][n - 1] == 0)
    {
        cout << -1;
        return 0;
    }

    vector<vector<int>> visited = m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    string path = "";

    solve(m, n, 0, 0, visited, path, ans);

    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}