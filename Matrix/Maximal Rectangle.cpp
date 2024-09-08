class Solution {
public:
    int maxMAH(vector<int> &ques){
        vector<int> NSR;
        stack<pair<int,int>> NSRst;
        int n = ques.size();

        for(int i=n-1; i>=0; i--){
            if(NSRst.size()==0){
                NSR.push_back(n);
            }
            else if(NSRst.size()>0 && NSRst.top().first<ques[i]){
                NSR.push_back(NSRst.top().second);
            }
            else if(NSRst.size()>0 && NSRst.top().first>=ques[i]){
                while(NSRst.size()>0 && NSRst.top().first>=ques[i]){
                    NSRst.pop();
                }
                if(NSRst.size()==0){
                    NSR.push_back(n);
                }
                else{
                    NSR.push_back(NSRst.top().second);
                }
            }
            NSRst.push({ques[i],i});
        }
        reverse(NSR.begin(), NSR.end());




        vector<int> NSL;
        stack<pair<int,int>> NSLst;

        for (int i = 0; i < n; i++)
        {
            if(NSLst.size()==0){
                NSL.push_back(-1);
            }
            else if(NSLst.size()>0 && NSLst.top().first<ques[i]){
                NSL.push_back(NSLst.top().second);
            }
            else if(NSLst.size() && NSLst.top().first>=ques[i]){
                while (NSLst.size()>0 && NSLst.top().first>=ques[i])
                {
                    NSLst.pop();
                }
                if(NSLst.size()==0){
                    NSL.push_back(-1);
                }
                else {
                    NSL.push_back(NSLst.top().second);
                }
                
            }
            NSLst.push({ques[i],i});
        }

        vector<int> ans;

        for(int i=0; i<n; i++){
            int width = NSR[i]-NSL[i]-1;
            ans.push_back(ques[i]*width);
        }
        int maxxi = ans[0];
        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] > maxxi) {
                maxxi = ans[i];
            }
        }

        return maxxi;

    }


    int maximalRectangle(vector<vector<char>>& A) {
       vector<int> ques(A[0].size(), 0);
    int ans = 0;

    for (int j = 0; j < A[0].size(); j++) {
        if(A[0][j]=='0') ques[j] = 0;
        else ques[j] = 1;
    }
    ans = maxMAH(ques);

    for (int i = 1; i < A.size(); i++) {
        for (int j = 0; j < A[0].size(); j++) {
            if (A[i][j] == '0') {
                ques[j] = 0;
            } else {
                ques[j] = ques[j] + 1;
            }
        }
        ans = max(ans, maxMAH(ques));
    }
    return ans; 
    }
};
