#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int arr[5]={6,7,2,1,9};
    int n=5;
    vector<int>v;
    stack<int>s;

    for(int i=n-1 ; i>=0 ; i--)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()>arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()<=arr[i])
        {
            while(s.size()>0 && s.top()<=arr[i])
            {
                s.pop();
            }
            if(s.size()==0)
            {
                v.push_back(-1);
            }
            else
            {
                v.push_back(s.top());
            }
        }
        s.push(arr[i]);
    }
    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return(0);
}
