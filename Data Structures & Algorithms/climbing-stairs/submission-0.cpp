class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> m = {{1,1},{2,2}};

        return climb(n, m);
    }

    int climb(int n, unordered_map<int, int>& m){
        if(n <= 2) return n;

        if(m.find(n) == m.end()){
            m[n] = climb(n-1, m) + climb(n-2, m);
        } 

        return m[n];
    }
};
