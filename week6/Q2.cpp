#include <iostream>
#include <vector>
#include <queue>
using namespace std;

bool isBipartite(vector<int> adj[], int src, int v) {
    vector<int> color(v, -1);
    queue<int> q;
    q.push(src);
    color[src] = 1; 

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        for (auto a : adj[current]) {
            if (color[a] == -1) {
                
                color[a] = 1 - color[current];
                q.push(a);
            } else if (color[a] == color[current]) {

                return false;
            }
        }
    }


}

int main() {
    int v, e;
    cout << "Enter the number of vertices: ";
    cin >> v;
    cout << "Enter the number of edges: ";
    cin >> e;

    vector<int> adj[v];
    cout << "Enter the edges " << endl;
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cout << "Enter the starting vertex for checking bipartiteness: ";
    cin >> start;

    if (isBipartite(adj, start, v)) {
        cout << "Graph is bipartite." << endl;
    } else {
        cout << "Graph is not bipartite." << endl;
    }

    return 0;
}
