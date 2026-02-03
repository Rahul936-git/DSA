class Solution {
public:
    int numberOfPermutations(int n, vector<int>& arr) {
        int InvCount = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    InvCount++;
                }
            }
        }
        return InvCount;
    }
};
