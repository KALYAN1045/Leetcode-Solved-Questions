class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        int n = arr.size();
    int firstIndex=-1;
    int start1=0;
    int end1=n-1;
    int mid1=start1+(end1-start1)/2;
    while(start1<=end1){
        if(arr[mid1]==x){
            firstIndex=mid1;
            end1=mid1-1;
        }
        else if(arr[mid1]<x){
            start1=mid1+1;
        }
        else{
            end1=mid1-1;
        }
        mid1=start1+(end1-start1)/2;
    }

    int lastIndex=-1;
    int start2=0;
    int end2=n-1;
    int mid2=start2+(end2-start2)/2;
    while(start2<=end2){
        if(arr[mid2]==x){
            lastIndex=mid2;
            start2=mid2+1;
        }
        else if(arr[mid2]<x){
            start2=mid2+1;
        }
        else{
            end2=mid2-1;
        }
        mid2=start2+(end2-start2)/2;
    }
    return {firstIndex,lastIndex};
    }
};