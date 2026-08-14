class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.begin(),prices.end(),greater<int>());
        sort(discounts.begin(),discounts.end(),greater<int>());

        double price = 0;

        if(prices.size() <= discounts.size()){
            for(int i = 0 ; i < prices.size(); i++){
           price = price + (prices[i]*(100-discounts[i])/100.0);
            }
        }

        if(prices.size() > discounts.size()){
            for(int i = 0 ; i < discounts.size(); i++){
           price = price +(prices[i]*(100-discounts[i])/100.0);
            }

            for(int i = discounts.size(); i < prices.size() ; i++){
                price = price + prices[i];
            }
        }

    return price;
    }
};