#include <bits/stdc++.h>
using namespace std;
vector<int> consec_small_nums(int a[],int n)
{
    vector<int>v;
	stack<pair<int,int>>s;
	for(int i=0;i<n;i++)
	{
	    if(s.size()==0)
	    {
	        v.push_back(-1);
	    }
	    else if(s.size()>0&&s.top().second>a[i])
	    {
	        v.push_back(s.top().first);
	    }
	    else if(s.size()>0&&s.top().second<=a[i])
	    {
	        while(s.size()>0&&s.top().second<=a[i])
	        {
	            s.pop();
	        }
	        if(s.size()==0)
	        {
	            v.push_back(-1);   
	        }
	        else if(s.top().second>a[i])
	        {
	            v.push_back(s.top().first);
	        }
	    }
	    s.push({i,a[i]});
	}
	for(int i=0;i<v.size();i++)
	{
	    v[i]=i-v[i];
	}
	return v;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n]={0};
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	vector<int> v = consec_small_nums(a,n);
	for(int i=0;i<n;i++)
	{
	    cout<<v[i]<<"\n";
	}
	
	return 0;
}
