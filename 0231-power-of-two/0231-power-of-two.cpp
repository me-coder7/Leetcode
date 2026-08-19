class Solution {
public:
    bool isPowerOfTwo(int n) {
       if (n> 0){ 
        double x = log2(n);
        if (x == (int)x)
          return true;
        else
         return false;
       }

       else 
       return false;
    }
};