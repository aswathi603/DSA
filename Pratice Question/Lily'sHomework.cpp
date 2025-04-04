//https://www.hackerrank.com/challenges/lilys-homework/problem?isFullScreen=true
#include <vector>
#include <algorithm>
using namespace std;

int countSwaps(std::vector<int>& arr) {
    int swaps = 0;
    int n = arr.size();
    vector<bool> visited(n, false);
    vector<int> sortedArr = arr;

    sort(sortedArr.begin(), sortedArr.end());

    for (int i = 0; i < n; ++i) {
        if (visited[i] || arr[i] == sortedArr[i]) {
            continue;
        }

       int cycleSize = 0;
        int j = i;

        while (!visited[j]) {
            visited[j] = true;
            j = find(arr.begin(), arr.end(), sortedArr[j]) - arr.begin(); 
            cycleSize++;
        }

        if (cycleSize > 0) {
            swaps += (cycleSize - 1);
        }
    }

    return swaps;
}

int lilysHomework(std::vector<int> arr) {
    vector<int> arrCopy = arr;

    int ascendingSwaps = countSwaps(arr);
    
    //sort(arrCopy.begin(), arrCopy.end(), std::greater<int>());
    
    int descendingSwaps = countSwaps(arrCopy);
    
    return std::min(ascendingSwaps, descendingSwaps);
}
