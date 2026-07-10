class Solution {
public:
    bool isPalindrome(string s) {
        int n= s.size();
        
        //two pointers left and right
        int left = 0;
        int right = n-1;

        while(left < right)
        {  //comparing only alphabets and digits
           while(left < right && !isalnum(s[left]))
           left++;

           while(left < right && !isalnum(s[right]))
           right--;

           //uppercase and lowercase letters should be treated equal
           if(tolower(s[left]) != tolower(s[right]))
            return false;

           left++;
           right--;


        }

return true;
    }


};