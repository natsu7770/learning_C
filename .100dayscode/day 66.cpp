#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int need = target - nums[i];
        if(mp.count(need)) {
            cout << mp[need] << " " << i << endl;
            return 0;
        }
        mp[nums[i]] = i;
    }
    cout << "-1 -1" << endl;
    return 0;
}
