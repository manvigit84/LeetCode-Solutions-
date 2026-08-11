class RecentCounter {
    int req = 0;              // initialising requests with zero.
    queue<int> q;
                             
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
         
         q.push(t);
        
     while(!q.empty() && q.front() < t - 3000){
        q.pop();
      }

      return q.size();     
    }
};