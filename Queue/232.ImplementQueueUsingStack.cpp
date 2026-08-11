class MyQueue {
        
        stack<int> s1;            //using two stacks to implement queue
        stack<int> s2;

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        
         s1.push(x);      //all new elements are pushed into s1
    }
    
    int pop() {
        if(s2.empty())
        {
        while(!s1.empty()){      //transferring all elements of s1 to s2
            s2.push(s1.top());
            s1.pop();
         }
        }
        int ans = s2.top();
        s2.pop();        //elements are popped from s2
        return ans;
        }
        
    
    
    int peek() {
          if(s2.empty()){
      while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
          }
      return s2.top();
          }        
    
    
    bool empty() {
        if(s2.empty() && s1.empty())
        return true;

        else 
        return false;
        
    }
};
