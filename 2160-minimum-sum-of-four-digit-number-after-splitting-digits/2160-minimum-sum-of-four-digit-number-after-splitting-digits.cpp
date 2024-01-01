class Solution {
public:
    int minimumSum(int num) {
      int ans  ;
	vector<int>  store;
	while(num !=0)
	{
		store.push_back(num%10);
		num = num/10;
	}
	sort(store.begin(), store.end());
	ans = store[0]* 10 +  store[3] + store[1] * 10 + store[2];
    	return ans;  
    }
};