class Solution {
public:
   vector<vector<int>> merge(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end(),[](const vector<int> &a,const vector<int> &b){
           if(a[0]==b[0])
               return a[1]<b[1];
            return a[0]<b[0];
        });
        vector<vector<int>> ans;
        int i,j;
        i=0;
        j=1;
        int a,b;
        while(i<inter.size()){
            a=inter[i][0];
            b=inter[i][1];
            j=i+1;
            while(j<inter.size() and inter[j][0]<=b){
                a=min(inter[j][0],a);
                b=max(inter[j][1],b);
                j++;
            }
            ans.push_back({a,b});
            i=j;
        }
        return ans;
    }
};
