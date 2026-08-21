class Solution {
public:
    bool isvowel(char c){

        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u')
            return true;
        
         return false;

 }
 string reverseVowels(string s) {
          int n = s.size();
          int start = 0;
          int end = n - 1;  
          
          while(start < end){
          if(isvowel(s[start]) && isvowel(s[end])){
            swap(s[start] , s[end]);
            start ++;
            end--;
          }   
          else if(!isvowel(s[start])){
            start++;
          }
          else{
          end--;
 }
 }
 return s;

    }
};