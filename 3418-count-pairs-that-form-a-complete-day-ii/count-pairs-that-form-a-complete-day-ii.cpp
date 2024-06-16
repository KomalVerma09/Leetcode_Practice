class Solution {
public:
    #define ll long long
    long long countCompleteDayPairs(vector<int>& hours) {
        int n=hours.size();
        unordered_map<ll,ll> freq;
        ll count = 0;

        for(int j=0;j<n;j++){
            ll r=hours[j]%24;

            if(r==0){
                count+=freq[0];
            }
            else{
                count+=freq[24-r];
            }
            freq[r]++;
        }
        return count;
    }
};