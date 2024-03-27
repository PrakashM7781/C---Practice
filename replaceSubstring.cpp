#include<bits/stdc++.h>
using namespace std;

string replace(string s, string substring, string replacedString){
    string ans = "";
    for(int i = 0; i < s.length(); i++){
        int k = 0;
        if(s[i] == substring[k] && s.length() >= i + substring.length()){
            int j;
            for(j = i;j < i + substring.length();j++){
                if(s[j] != substring[k]){
                    break;
                }else{
                    k++;
                }
            }
            if(j == i + substring.length()){
                ans.append(replacedString);
                i = j - 1;
            }
            
            else{
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    string s = "abababa";
    string substring = "aba";
    string sreplace = "a";
    string ans = replace(s,substring,sreplace);
    cout << ans;
    return 0;
}
