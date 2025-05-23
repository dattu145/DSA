#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProduct(vector<int>& prices){
    int profit = 0;
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > prices[i-1]){
            profit += prices[i] - prices[i-1];
        }
    }
    return profit;
}

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    cout << maxProduct(prices) << endl;
    return 0;
}
