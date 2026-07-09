class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) 
    {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int track=0;
        int i=0;
        int total=0;
        while(i<players.size() && track<trainers.size())
        {
            if(players[i]<=trainers[track])
            {
                i++;
                track++;
                total++;
            }else
            {
                track++;
            }
        }
        return i;
    }
};
