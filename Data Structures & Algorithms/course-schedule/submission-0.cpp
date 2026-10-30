class Solution {
public:
    bool isCycle(int src, vector<bool>& visited, vector<bool>& recPath, vector<vector<int>>& edges){
        visited[src] = true;
        recPath[src] = true;

        for(int i = 0; i < edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];

            if(u == src){
                if(!visited[v]){
                    if(isCycle(v, visited, recPath, edges)) return true;
                }else if(recPath[v]){
                    return true;
                }
            }
        }
        recPath[src] = false;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& edges) {
        vector<bool> visited(n, false);
        vector<bool> recPath(n, false);

        for(int i = 0; i < n; i++){
            if(!visited[i]){
                if(isCycle(i, visited, recPath, edges)){
                    return false;
                }
            }
        }
        return true;
    }
};
