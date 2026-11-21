class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int minCost = 0;
        int n = points.size();
        vector<bool> inMst(n, false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});

        while(pq.size() > 0){
            auto p = pq.top();
            int u = p.second;
            int wt = p.first;
            pq.pop();

            if(!inMst[u]){
                inMst[u] = true;
                minCost += wt;

                for(int v = 0; v < n; v++){
                    if(v != u && !inMst[v]){
                        int cost = abs(points[u][0] - points[v][0]) + abs(points[u][1] - points[v][1]);
                        pq.push({cost, v});
                    }
                }
            }
        }
        return minCost;
    }
};
