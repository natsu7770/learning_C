#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> nums1(m);
    for(int i = 0; i < m; i++) {
        cin >> nums1[i];
    }
    vector<int> nums2(n);
    for(int i = 0; i < n; i++) {
        cin >> nums2[i];
    }
    
    vector<int> result;
    int i = 0, j = 0;
    while(i < m && j < n) {
        if(nums1[i] <= nums2[j]) {
            result.push_back(nums1[i]);
            i++;
        } else {
            result.push_back(nums2[j]);
            j++;
        }
    }
    while(i < m) {
        result.push_back(nums1[i]);
        i++;
    }
    while(j < n) {
        result.push_back(nums2[j]);
        j++;
    }
    
    for(int k = 0; k < result.size(); k++) {
        cout << result[k];
        if(k < result.size() - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
