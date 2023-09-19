#include <bits/stdc++.h> 

void solve(string str,int index,string output,vector<string>& ans){
	if(index >= str.length()){
		if(output.length() > 0){
			ans.push_back(output);
			
		}
		return;
		
	}
	solve(str,index+1,output,ans);
	char ch = str[index];
	output.push_back(ch);
	solve(str,index+1,output,ans);
}
vector<string> subsequences(string str){
	
	vector<string>ans;
	string output = "";
	int index= 0;
	solve(str,index,output,ans);
	return ans;
	
}
