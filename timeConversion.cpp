#include<bits/stdc++.h>
using namespace std;

string timeConversion(string str){
    int n = str.length();
    int x = int(str[0]) - 48;
    int y = int(str[1]) - 48;
    if(str[n - 2] == 'P'){
        // cout << str[0] << " " << str[1];
        int x = int(str[0]) - 48;
        int y = int(str[1]) - 48;
        cout << x << " " << y;
        int t12 = x * 10 + y;
        t12 += 12;
        cout <<endl << t12 << " ";
        if(t12 == 24){
            t12 = 00;
        }
        str[1] = char(t12 % 10) + 48;
        t12 /= 10;
        str[0] = char(t12) + 48;
        // cout << endl << t12 << endl;
        // cout << endl << str[0] << " " << str[1];
    }else{
        
        return str.substr(0, 8);
    }
    return str.substr(0, 8);
}

int main(int argc, char const *argv[])
{
    string str = "12:45:00AM";
    string s = timeConversion(str);
    cout << s;
    return 0;
}
