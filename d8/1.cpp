/// N meeting in one room

 int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
          int count = 1;
        int end_time;
        vector<pair<int,int>> v;
        for(int i = 0; i < n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        end_time = v[0].first;
        for(int i = 1; i < v.size(); i++){
            if(v[i].second > end_time){
                count++;
                end_time = v[i].first;
            }
        }
        return count;
    }