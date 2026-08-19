lass Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {

        unordered_map<int, vector<int>> mp;

        // Store reserved seats row-wise
        for (auto seat : reservedSeats) {
            mp[seat[0]].push_back(seat[1]);
        }

        // Initially, every row can fit 2 families
        int ans =(n - mp.size()) * 2;

        // Check rows having reserved seats
        for(auto row : mp) {

            bool left = true;    // seats 2-5
            bool middle = true;  // seats 4-7
            bool right = true;   // seats 6-9

            for(int seat : row.second) {

                if(seat >= 2 && seat <= 5)
                    left = false;

                if(seat >= 4 && seat <= 7)
                    middle = false;

                if(seat >= 6 && seat <= 9)
                    right = false;
        }

            if(left && right)
                ans += 2;

            else if(left || middle || right)
                ans += 1;
        }

        return ans;
    }
};