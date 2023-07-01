// 1732. Find the Highest Altitude
// Date: 19 June
class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> a;
        int psum = 0;
        a.push_back(0);
        int max = 0;
        for (int i = 0; i < gain.size(); i++)
        {
            psum += gain[i];
            a.push_back(psum);
            if (psum > max)
                max = psum;
            cout << psum << " ";
        }
        cout << endl;
        return max;
    }
};