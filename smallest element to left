#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int arr[4]={1,3,2,4};
    int n=4;
    vector<int>v;
    stack<int>s;

    for(int i=0 ; i<n ; i++)
    {
        if(s.size()==0)
        {
            v.push_back(-1);
        }
        else if(s.size()>0 && s.top()<arr[i])
        {
            v.push_back(s.top());
        }
        else if(s.size()>0 && s.top()>=arr[i])
        {
            while(s.size()>0 && s.top()>=arr[i])
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
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return(0);
}
