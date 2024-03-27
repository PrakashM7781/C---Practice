#include<bits/stdc++.h>
using namespace std;

bool ifPallindrome(string str){
	int i = 0;
	int j = str.size()-1;
	while(i <= j){
          if (str[i] == str[j]) {
            i++;
            j--;
          }
		  else{
			  return false;
		  }
        }	
		return true;
}

int countNumberOfPalindromeWords(string s)
{
	//Your code goes here
	string str = "";
	int count = 0;
	for(int i = 0; i <= s.length()+1; i++){
		
		if(s[i] != ' '){
			if (s[i] >= 'A' && s[i] <= 'Z') {
				s[i] = tolower(s[i]); 
            }
			str = str + s[i];
		}
		else{
            cout << str << endl;
			if(str.size() > 1 && ifPallindrome(str)){
				count++;
				str="";
				cout << count << " ";
			}
            // cout << str << endl;
			else{
				str = "";
			}
			cout << endl;
			cout << str << endl;
		}
	}
	if(ifPallindrome(str)){
		count++;
	}
	return count;
	
}

int main(){
   string s = "pop the first element from the stack";
   int count = countNumberOfPalindromeWords(s);
   cout << count;
   return 0;
}