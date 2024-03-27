#include<bits/stdc++.h>
using namespace std;


char getMaxOccuringChar(string str)
    {
        int ch[26] = {0};
        int freq = -1;
        int ans;
        for(int i = 0; i < str.length(); i++){
            int number;
            if(str[i] >= 'a' && str[i] <= 'z'){
                number = str[i] - 'a';
                ch[number]++;
            }
            else{
                number = str[i] - 'A';
                ch[number]++;
            }
        }
        for(int i = 0; i <= 25; i++){
            cout << ch[i] << " ";
        }
        for(int i = 0; i < 26; i++){
            if(freq < ch[i]){
                freq = ch[i];
                ans = i;
        }
            // else if(freq == ch[i]){
                
            // }
    }
    return ans + 'a';
    }


int main(int argc, char const *argv[])
{
    string str = "testsample";
    char ch = getMaxOccuringChar(str);
    cout << endl << ch;
    return 0;
}
