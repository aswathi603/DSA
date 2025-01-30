#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    int i=0,j=0;
    sort(nums1.begin(),nums1.end());
    sort(nums2.begin(),nums2.end());
    vector<int> arr;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]==nums2[j]){
            if (arr.empty() || arr.back() != nums1[i]) {
                arr.push_back(nums1[i]);
            }
            i++;
            j++;
        }
        if(nums1[i]<nums2[j]){
            i++;
        }else{
            j++;
        }
    }
    return arr;
}

int main(){
    vector<int> nums1 = {4, 9, 5};
    vector<int> nums2 = {9, 4, 9, 8, 4};

    // Call the intersection function
    vector<int> result = intersection(nums1, nums2);

    // Print the result
    cout << "Intersection of arrays: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;


}
