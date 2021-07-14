#include <bits/stdc++.h>
using namespace std;
vector<int> left_nearest_small_index(vector<int>a)
{
    vector<int>v;
	stack<pair<int,int>>s;
	for(int i=0;i<a.size();i++)
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
vector<int> right_nearest_small_index(vector<int>a)
{
    int left_most_index = a.size();
    vector<int>v;
	stack<pair<int,int>>s;
	for(int i=a.size()-1;i>=0;i--)
	{
	    if(s.size()==0)
	    {
	        v.push_back(left_most_index);
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
	            v.push_back(left_most_index);   
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
int max_area(vector<int>v)
{   
    int v_size = v.size();
    int width[v_size]={0};
	int area[v_size]={0};
    int max=0;
    vector<int> vr = right_nearest_small_index(v);
	vector<int> vl = left_nearest_small_index(v);
	for(int i=0;i<v_size;i++)
	{
	    width[i]=vr[i]-vl[i]-1;
	    area[i]=width[i]*v[i];
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
	vector<int> v;
	int temp;
	for(int i=0;i<4;i++)
	{
	    cin>>temp;
	    v.push_back(temp);
	}
	cout<<max_area(v);
	
	return 0;
}
