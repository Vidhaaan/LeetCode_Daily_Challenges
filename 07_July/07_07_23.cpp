// Problem: 2024. Maximize the Confusion of an Exam
// Date: 07_07_23
// Link: https://leetcode.com/problems/maximize-the-confusion-of-an-exam/
class Solution
{
public:
    int maxConsecutiveAnswers(string answerKey, int k)
    {
        int tail = 0, cnt = 0, len = 0;
        for (int head = 0; head < answerKey.size(); head++)
        {
            // max Fs
            if (answerKey[head] == 'T')
                cnt++;
            while (cnt > k)
            {
                if (answerKey[tail] == 'T')
                    cnt--;

                tail++;
            }
            len = max(len, (head - tail + 1));
        }
        cnt = 0, tail = 0;
        for (int head = 0; head < answerKey.size(); head++)
        {
            // max Ts
            if (answerKey[head] == 'F')
                cnt++;
            while (cnt > k)
            {
                if (answerKey[tail] == 'F')
                    cnt--;

                tail++;
            }
            len = max(len, (head - tail + 1));
        }
        return len;
    }
};