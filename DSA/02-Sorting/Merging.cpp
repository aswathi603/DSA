#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    int i=0,j=0;
    vector<int> nums3;

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    while(i<m && j<n){
        if(nums1[i]<nums2[j]){
            nums3.push_back(nums1[i]);
            i++;
        }else{
            nums3.push_back(nums2[j]);
            j++;
        }
    }
    
    while(i<m){
        nums3.push_back(nums1[i]);
        i++;
    }
    while(j<n){
        nums3.push_back(nums2[j]);
        j++;
    }

    cout << "Merged Array: ";
    for (int x : nums3) {
        cout << x << " ";
    }
}

int main(){
    int m, n;
    cout << "Enter the size of nums1 (m): ";
    cin >> m;
    cout << "Enter the size of nums2 (n): ";
    cin >> n;

    vector<int> nums1(m), nums2(n);

    cout << "Enter elements for nums1: ";
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    }

    cout << "Enter elements for nums2: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }



    merge(nums1, m, nums2, n);

    return 0;
}
