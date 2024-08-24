class Solution {
public:
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        sort(buses.begin(), buses.end());
        sort(passengers.begin(), passengers.end());

    int n = buses.size(), m = passengers.size();
    int j = 0, latestTime = 0;

    for (int i = 0; i < n; ++i) {
        int count = 0;
        while (j < m && passengers[j] <= buses[i] && count < capacity) {
            if (j == 0 || passengers[j] != passengers[j - 1] + 1) {
                latestTime = passengers[j] - 1;
            }
            ++count;
            ++j;
        }
        if (count < capacity && (j == 0 || buses[i] != passengers[j - 1])) {
            latestTime = buses[i];
        }
    }

    return latestTime;
}
};
