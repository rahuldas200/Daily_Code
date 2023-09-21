class Solution {
private:
   void solve(string str,int index,set<string> &ans){
        // base case 
        if(index >= str.size()){
            // put nums into ans
            ans.insert(str);
            return ;
        }

        //for 
        for(int i=index;i<str.size();i++){
            swap(str[index],str[i]);
            // recursive relation
            solve(str,index+1,ans);
            // backtracking -> after find the final ans we need to str in previous state
            swap(str[index],str[i]);
        }

    }
public:
    string getPermutation(int n, int k) {
       vector<int>num;
       for(int i=1;i<=n;i++){
           num.push_back(i);
       }
       string str;
       for(int i=0;i<num.size();i++){
           str += to_string(num[i]);
       }
       int index = 0;
       set<string>output;
       solve(str,index,output);
       string s;
       auto it = output.begin();
       std::advance(it, k - 1);
       return *it;

    }
};
