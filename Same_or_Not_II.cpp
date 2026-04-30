#include <bits/stdc++.h>
using namespace std;
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
class MyQueue
{
    public:
    list<int> l;
    void push(int val)
    {
       l.push_back(val);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int back()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
class mystack
{
    public:
    list<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
void solve()
{
    mystack st;
    int n;
    cin >> n;
    MyQueue qq;
    int m;
    cin >> m;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i = 0;i<m;i++)
    {
        int x;
        cin >> x;
        qq.push(x);
    }
     if(n != m)
    {
        no;
        return;
    }
    while(!st.empty() && !qq.empty())
    {
        if(st.top() != qq.front())
        {
            no;
            return;
        }
        st.pop();
        qq.pop();

    }
    yes;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}