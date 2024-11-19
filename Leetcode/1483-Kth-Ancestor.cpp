class TreeAncestor {
    vector<vector<int>> up; // int up[N][20];
    vector<int> depth;
    int LOG;
public:
    TreeAncestor(int n, vector<int>& parent) {
        LOG = 0;
        // Gives the ceil of log value
        while((1 << LOG) <= n) {
            LOG++;
        }
        up = vector<vector<int>>(n, vector<int>(LOG));
        depth = vector<int>(n);
        // up[v][j] is 2^j -th ancestor of node v
        parent[0] = 0;
        for(int v = 0; v < n; v++) {
            up[v][0] = parent[v];
            // Calculates the depth of the node
            if(v != 0) {
                depth[v] = depth[parent[v]] + 1;
            }
            for(int j = 1; j < LOG; j++) {
                up[v][j] = up[ up[v][j-1] ][j-1];
            }
        }
    }
    int getKthAncestor(int node, int k) {
        if(depth[node] < k) {
            return -1;
        }
        for(int j = LOG - 1; j >= 0; j--) {
            // checks whether atleast the number formed by jth bit is set in k then subtracts that number
            if(k >= (1 << j)) {
                node = up[node][j];
                k -= 1 << j;
            }
            // another approach could be to check whether a certain bit is set in k
            // if(k & (1<<j)){
            //     node = up[node][j];
            // }
        }
        return node;
    }
};

// Question seems to have changed
// My implementation

class TreeAncestor {
    vector<vector<int>> up;
    vector<int> depth;
    int LOG;
    // Added DFS to find depth of every node.
    int findDepth(int node, vector<int>& parent){
        if(node == 0) return 0;
        if(depth[parent[node]] != -1) return depth[parent[node]] + 1;
        else return depth[node] = findDepth(parent[node], parent) + 1;
    }
public:
    TreeAncestor(int n, vector<int>& parent) {
        LOG = 0;
        while((1 << LOG) <= n){
            LOG++;
        }
        up = vector<vector<int>>(n, vector<int>(LOG));
        depth = vector<int>(n,-1);
        parent[0]= 0;
        for(int v=0;v<n;v++){
            up[v][0] = parent[v];
        }

        for(int j=1;j<n;j++){
            if(depth[j] != -1) continue;
            depth[j] = findDepth(j, parent);
        }
        for(int j=1;j<LOG;j++){
            for(int v=0;v<n;v++){
                up[v][j] = up[up[v][j-1]][j-1];
            }
        }
    }
    
    int getKthAncestor(int node, int k) {
        if(depth[node] < k) return -1;
        for(int j=LOG-1;j>=0;j--){
            if(k >= (1 << j)){
                node = up[node][j];
                k -= (1 << j);
            }
        }
        return node;
    }
};