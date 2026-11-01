class Solution {
public:
    bool isCycle(int src, vector<bool>& visited, vector<bool>& recPath, vector<vector<int>>& adj){
        visited[src] = true;
        recPath[src] = true;

        for(int v : adj[src]){
            if(!visited[v]){
                if(isCycle(v, visited, recPath, adj)) return true;
            }else if(recPath[v]) return true;
        }
        recPath[src] = false;
        return false;
    }

    void topoOrder(int src, vector<bool>& visited, stack<int>& s, vector<vector<int>>& adj){
        visited[src] = true;
        for(int v : adj[src]){
            if(!visited[v]){
                topoOrder(v, visited, s, adj);
            }
        }
        s.push(src);
    }

    vector<int> findOrder(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto& edge : edges){
            int u = edge[1];
            int v = edge[0];

            adj[u].push_back(v);
        }
        vector<bool> visited(n, false);
        vector<bool> recPath(n, false);

        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(!visited[i]){
                if(isCycle(i, visited, recPath, adj)){
                    return {};
                }
            }
        }

        stack<int> s;
        visited.assign(n, false);

        for(int i = 0; i < n; i++){
            if(!visited[i]){
                topoOrder(i, visited, s, adj);
            }
        }

        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};
