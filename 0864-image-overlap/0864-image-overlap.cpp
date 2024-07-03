// we define a macro to avoid for loop hell
#define loop(x, y) for(int x = 0; x < y; x++)

class Solution {
public:
    
	// this function transforms the img2 in up, left, down directions
    int solve(vector<vector<int>> &img1, vector<vector<int>> &img2) {
        
        int n = img1.size();
        int ans = 0;
        
		//loop through all possible transformations 
		//max transformation that is possible in any direction is to move a image n distance in any direction
		// because after that there is no overlaping between both images 
        loop(i, n) {
            loop(j, n) {
                
				// one's count if we move the img2 in [x+i][y+j] (up and left) direction
                int count1 = 0;
				//// one's count if we move the img2 in [x-i][y+j] (down and left) direction
                int count2 = 0;
                
                loop(x, n) {
                    loop(y, n) {
                        
						// if 1 overlaping when we move img2 up or left or both
                        if(x+i < n && y+j < n && img1[x][y] == 1 && img1[x][y] == img2[x+i][y+j])
                            count1++;
						// if 1 overlaping when we move img2 down or left or both
                        if(x-i >= 0 && y+j < n && img1[x][y] == 1 && img1[x][y] == img2[x-i][y+j])
                            count2++;
                        
                    }
                }
                
				// choose the maximum overlaping in every transform of img 2
                ans = max({ans, count1, count2});
            }
        }
        
        return ans;
    }
    
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        // we have 2 cases
		// case1: we can move img2 and keep img1 still
		// case2: we can move img1 and keep img2 still
		// return the maximum in both the cases
        return max(solve(img1, img2), solve(img2, img1));
    }
};