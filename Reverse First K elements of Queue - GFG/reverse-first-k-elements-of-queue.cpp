// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    queue<int> qq;
    stack<int> s;
    while(k>0)
    {
        int a=q.front();
        q.pop();
        s.push(a);
        
        k-=1;
    }
    while(!s.empty())
    {
        int b=s.top();
        s.pop();
        qq.push(b);
    }
     while (!q.empty()) {
        int a = q.front();
        q.pop();
        qq.push(a);
    }
    return qq;
   
}