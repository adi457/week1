#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool DFS(vector<int> adj[], int src, int dest, int v) {
    vector<int> visited(v, 0);
    stack<int> s;
    s.push(src);

    while (!s.empty()) {
        src = s.top();
        s.pop();
        if (src == dest) {
            return true; 
        }
        if (visited[src] != 1) {
            visited[src] = 1;
            for (auto a : adj[src]) {
                if (visited[a] != 1)
                    s.push(a);
            }
        }
    }

    return false;
}

int main() {
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<int> adj[v];
    cout << "Enter the edges" << endl;
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    

    int src, dest;
    cout << "Enter the source and destination vertices to check path: ";
    cin >> src >> dest;

    if (DFS(adj, src, dest, v)) {
        cout << "Path exists between " << src << " and " << dest << endl;
    } else {
        cout << "Path does not exist between " << src << " and " << dest << endl;
    }

    return 0;
}
