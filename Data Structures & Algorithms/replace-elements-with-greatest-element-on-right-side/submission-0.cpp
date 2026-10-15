class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i < n; i++){
            int maxVal = INT_MIN;
            for(int j = i+1; j < n; j++){
                if(arr[j] > maxVal){
                    maxVal = arr[j];
                }
            }
            arr[i] = maxVal;
        }
        arr[n-1] = -1;
        return arr;
    }
};