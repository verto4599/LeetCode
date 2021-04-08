vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxCandies=-1;
        vector<bool> check;
        for(int i=0;i<candies.size();i++)
            maxCandies=max(maxCandies,candies[i]);
        
        for(int i=0;i<candies.size();i++){
            if(candies[i] + extraCandies >= maxCandies )
                check.push_back(true);
            else
                check.push_back(false);
        }
        return check;    
    }
