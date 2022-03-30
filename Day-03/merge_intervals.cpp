class Solution {
public:
    static bool comparator(vector<int>& A, vector<int>& B)
    {
        return A[0] < B[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end(), comparator);
        vector<vector<int>> mergedIntervals;
        vector<int> tempInterval = intervals[0];
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i][0] <= tempInterval[1]){
                tempInterval[1] = max(tempInterval[1], intervals[i][1]);
            }
            else {
                mergedIntervals.push_back(tempInterval);
                tempInterval = intervals[i];
            }
        }
        mergedIntervals.push_back(tempInterval);
        return mergedIntervals;
    }
};