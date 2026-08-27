class Solution {
public:
    int addDigits(int num) {
        //recursion
        int sum=0;
        while(num)
        {
            sum+=(num%10);
            num/=10;
        }
        if(sum<10)
            return sum;
        else
            return addDigits(sum);

            //also see about the digital root approach
    }
};