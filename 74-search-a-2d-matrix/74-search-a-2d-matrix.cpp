class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int m = matrix.size();
        int n = matrix[0].size();
        int l = 0;
        int r = m - 1;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (matrix[mid][0] == target)
                return true;

            if (matrix[mid][0] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (l < 1)
            return false;
        if (matrix[l - 1][0] == target)
            return true;
        int s = l - 1;
        l = 0;
        r = n - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;

            if (matrix[s][mid] == target)
                return true;

            if (matrix[s][mid] > target)
                r = mid - 1;
            else
                l = mid + 1;
        }
        return false;
    }
};