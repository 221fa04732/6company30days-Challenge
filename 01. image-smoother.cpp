class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int row = img.size();
        int col = img[0].size();

        vector<vector<int>> ans(row, vector<int>(col));

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                int temp = img[i][j];
                int cnt = 1;
                if (i + 1 < row)
                {
                    temp += img[i + 1][j];
                    cnt++;
                }
                if (i - 1 >= 0)
                {
                    temp += img[i - 1][j];
                    cnt++;
                }
                if (j + 1 < col)
                {
                    temp += img[i][j + 1];
                    cnt++;
                }
                if (j - 1 >= 0)
                {
                    temp += img[i][j - 1];
                    cnt++;
                }
                if (i + 1 < row && j + 1 < col)
                {
                    temp += img[i + 1][j + 1];
                    cnt++;
                }
                if (i + 1 < row && j - 1 >= 0)
                {
                    temp += img[i + 1][j - 1];
                    cnt++;
                }
                if (i - 1 >= 0 && j + 1 < col)
                {
                    temp += img[i - 1][j + 1];
                    cnt++;
                }
                if (i - 1 >= 0 && j - 1 >= 0)
                {
                    temp += img[i - 1][j - 1];
                    cnt++;
                }
                ans[i][j] = temp / cnt;
            }
        }
        return ans;
    }
};