class Solution {
public:
    vector<string> summaryRanges(vector<int>& v) {
        vector<string>s;
        int n=v.size();
        string temp="";
        for(int i=0;i<n;i++){
            int j=i;
            while(j+1<n && v[j+1]==v[j]+1){
                j++;
            }
            if(j>i){
            temp+=to_string(v[i]);
            temp+="->";
            temp+=to_string(v[j]);}
            else{
                temp+=to_string(v[i]);
            }
            s.push_back(temp);
            temp="";
            i=j;
        }
        return s;
    }
};