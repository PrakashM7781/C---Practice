#include<bits/stdc++.h>
using namespace std;

int lengthOfNumber(int k)
{
	// Write your code here.
	int number = 1;
	int count = 1;
	while(number < INT_MAX){
		if(number%k==0){
			return count;
		}else{
			number = number*10+1;
			count++;
		}
	}
	return -1;
}

int main(){
   //You can do it.
   int k = 11;
   int count = lengthOfNumber(k);
   cout << count;
   return 0;
}