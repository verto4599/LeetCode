int largestAltitude(vector<int>& gain) {
        int highest_al=0, curr_al=0;
        for(int i=0;i<gain.size();i++)
        {
            curr_al += gain[i];
            highest_al=max(highest_al,curr_al);
        }
        return highest_al;
    }
