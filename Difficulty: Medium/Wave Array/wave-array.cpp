class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        int i=0;
        while(i<arr.size()-1){
            if(i%2==0 && arr[i]<arr[i+1]) swap(arr[i],arr[i+1]);
            i+=2;
        }
    }
};
