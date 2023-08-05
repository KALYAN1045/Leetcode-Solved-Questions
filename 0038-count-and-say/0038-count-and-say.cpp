class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        if (n == 1)return "1";
        int m = 1;
        while(m < n){
            string newans = "";
            int i =0;
            while(i < ans.size()){
                char j = ans[i];
                int cnt = 0;
                while(i < ans.size() && ans[i] == j){
                    cnt++;
                    i++;
                }
                char count = cnt + '0'; 
                newans += count;
                newans += j;
            }
            ans=newans;
            m++;
        } 
        return ans;
    }
};
// if (n == 1)
//         return "1";

//     string ans = "1";
//     int m = 1;

//     while (m < n) {
//         string newans = "";
//         int i = 0;

//         while (i < ans.size()) {
//             char j = ans[i];
//             int cnt = 0;

//             while (i < ans.size() && ans[i] == j) {
//                 cnt++;
//                 i++;
//             }

//             char count = cnt + '0';
//             newans += count;
//             newans += j;
//         }

//         ans = newans;
//         m++;
