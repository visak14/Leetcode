class Solution {
public:
    int top(int &i , vector<int> &stk){
            return stk[i];
     }
     void pop(int &i){
         i--;
     }
     void push(int x, int &i, vector<int>&stk){
       i++;
       stk[i] = x;
     }

	int calPoints(vector<string>& operations) {
		// Your code goes here
        vector<int>stk(1001,0);
        int n = operations.size();
        int i = -1;
        for (int j  = 0;  j<n ; j++ ){
            if (operations[j] == "+")
            {
                int a = top(i, stk);
                pop(i);
                int b = top(i, stk);
                push(a, i, stk);
                push(a+b,  i, stk);
            }
            else if (operations[j] == "C")
            {
           pop(i);
            }
            else if (operations[j] == "D")
            {
                int a = top(i, stk);
                push(2*a, i , stk);
            }
            else{
               push(stoi(operations[j]),i, stk);
            }
        }
        int sum = 0;
        for (int j = 0; j<=i; j++){
            sum += stk[j];
        }
        return sum;
        
    }
};