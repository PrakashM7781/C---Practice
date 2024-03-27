#include <iostream>  
#include<string>  
using namespace std;
// bool checkPalindrome(string s) {   
//      // Write your code here.    
//      int st = 0;    
//      int e = s.length() - 1;        
//      while(st <= e){       
//         if(!isalnum(s[st])){           
//             st++;       
//         }        
//         else if(!isalnum(s[e])){            
//                 e--;        
//         }         
//         else{              
//             if( tolower(s[st]) != tolower(s[e])){            
//             return false;        
//             }        
//             else{            
//             st++;            
//             e--;        
//             }         
//         }                           
//     }                   
// return true;            
// }    




// ----------------------2nd Method----------------------------

#include <bits/stdc++.h>
// bool checkPalindrome(string s)
// {
// if(s.size() == 1){
//         return true;
//     }
//     transform(s.begin(),s.end(),s.begin(), ::tolower);
//     int i = 0;
//     int j = s.size()-1;
//     while(i<j){
//         char ch = s[i];
//         char sh = s[j];
//         while(!((ch >= 'a' && ch <= 'z') || (ch-48 >= 0 && ch-48 <= 9))){
//             i++;
//             ch = s[i];
//         }
//         while(!((sh >= 'a' && sh <= 'z') || (sh-48 >= 0 && sh-48 <= 9))){
//             j--;
//             sh = s[j];
//         }

//         if(sh != ch){
//             return false;
//         }
//         i++;
//         j--;
//     }
//     return true;
// }




// --------------------VALID PALLINDROME------------------


char toLower(char ch){
        if(ch >= 'A' && ch <= 'Z'){
            ch = ch - 'A' + 'a';
        }
        return ch;
    }
    bool isPalindrome(string s) {
        string temp;
        for(int i = 0; i < s.length(); i++){
            s[i] = toLower(s[i]);
            cout << s[i] << " ";
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                temp.push_back(s[i]);
            }
        }
        cout << endl;
        for(int i = 0; i < temp.length(); i++){
            cout << temp[i]<<" ";
        }
        for(int i = 0; i < temp.length(); i++){
            if(temp[i] != temp[temp.length() - 1 - i]){
                return false;
            }
        }
        return true;
    }


int main(int argc, char const *argv[])
{
    string s = "0P";
    bool re = isPalindrome(s);
    cout << endl << re;
    return 0;
}
