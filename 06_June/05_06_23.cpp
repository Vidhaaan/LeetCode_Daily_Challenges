// Problem: 1232. Check If It Is a Straight Line
// Date: 5th June
class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int x1, x2, y1, y2;
        int slope;
        x2 = coordinates[1][0];
        y2 = coordinates[1][1];
        x1 = coordinates[0][0];
        y1 = coordinates[0][1];
        int xdiff = x2 - x1;
        int ydiff = y2 - y1;
        for (int i = 2; i < coordinates.size(); i++)
        {
            x2 = coordinates[i][0];
            y2 = coordinates[i][1];
            x1 = coordinates[i - 1][0];
            y1 = coordinates[i - 1][1];

            if (ydiff * (x2 - x1) != xdiff * (y2 - y1))
            {
                return false;
            }
        }
        return true;
    }
};