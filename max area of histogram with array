#include <bits/stdc++.h>
using namespace std;
vector<int> left_nearest_small_index(int a[],int n)
{
    vector<int>v;
	stack<pair<int,int>>s;
	for(int i=0;i<n;i++)
	{
	    if(s.size()==0)
	    {
	        v.push_back(-1);
	    }
	    else if(s.size()>0&&s.top().second<a[i])
	    {
	        v.push_back(s.top().first);
	    }
	    else if(s.size()>0&&s.top().second>=a[i])
	    {
	        while(s.size()>0&&s.top().second>=a[i])
	        {
	            s.pop();
	        }
	        if(s.size()==0)
	        {
	            v.push_back(-1);   
	        }
	        else if(s.top().second<a[i])
	        {
	            v.push_back(s.top().first);
	        }
	    }
	    s.push({i,a[i]});
	}
	return v;
}
vector<int> right_nearest_small_index(int a[],int n)
{
    	int right_most_index=n;
	vector<int>v;
	stack<pair<int,int>>s;
	for(int i=n-1;i>=0;i--)
	{
	    if(s.size()==0)
	    {
	        v.push_back(right_most_index);
	    }
	    else if(s.size()>0&&s.top().second<a[i])
	    {
	        v.push_back(s.top().first);
	    }
	    else if(s.size()>0&&s.top().second>=a[i])
	    {
	        while(s.size()>0&&s.top().second>=a[i])
	        {
	            s.pop();
	        }
	        if(s.size()==0)
	        {
	            v.push_back(right_most_index);   
	        }
	        else if(s.top().second<a[i])
	        {
	            v.push_back(s.top().first);
	        }
	    }
	    s.push({i,a[i]});
	}
	reverse(v.begin(),v.end());
	return v;
}
int max_area(int a[],int n)
{   
    int width[n]={0};
	int area[n]={0};
    int max=0;
    vector<int> vr = right_nearest_small_index(a,n);
	vector<int> vl = left_nearest_small_index(a,n);
	for(int i=0;i<n;i++)
	{
	    width[i]=vr[i]-vl[i]-1;
	    area[i]=width[i]*a[i];
	    if(max<area[i])
	    {
	        max=area[i];
	    }
	}
	return(max);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin>>n;
	int a[n]={0};
	int max=0;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	max =max_area(a,n);
	cout<<max;
	
	return 0;
}
