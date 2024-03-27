#include<bits/stdc++.h>
using namespace std;

void interleave(queue<int> &q){
    int n = q.size();
        if(q.empty())
                return;
        int k = n/2;
        int count = 0;
        queue<int> q2;

        while(!q.empty()) {
                int temp = q.front();
                q.pop();
                q2.push(temp);
                count++;

                if(count == k)
                        break;
        }

        //stepB: interleaving start krdo
        while(!q.empty() && !q2.empty()) {
                int first = q2.front();
                q2.pop();

                q.push(first);

                int second = q.front();
                q.pop();

                q.push(second);
        }
        //odd wala case
        if(n&1) {
               int element = q.front();
               q.pop();
               q.push(element);
        }

    
}

int main(){
    
    queue<int> queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);
    queue.push(50);
    queue.push(60);
    queue.push(70);
    queue.push(80);

    
    interleave(queue);

    while(!queue.empty()) {
          cout << queue.front() << " ";
          queue.pop();
    }

    
   return 0;
}