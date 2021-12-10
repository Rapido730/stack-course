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
    int right_most_index = a.size();
    vector<int>v;
	stack<pair<int,int>>s;
	for(int i=a.size()-1;i>=0;i--)
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
	int n,m,i,j,g_max;
	cin>>n>>m;
	int arr[n][m]={0};
	
	for(i=0;i<n;i++)
	for(j=0;j<m;j++)
	{
	    cin>>arr[i][j];
	}
	
	vector<int>v;
	
	for(j=0;j<m;j++)
	{
	   v.push_back(arr[0][j]);
	   
	}
	g_max=max_area(v);
	
	for(i=1;i<n;i++)
	{
	    for(j=0;j<m;j++)
	    {
	        if(arr[i][j]==0)
	        {
	            v[j]=0;
	        }
	        else
	        {
	            v[j] = v[j] + arr[i][j];
	        }
	    }

	        g_max=max(g_max,max_area(v));
	        
	}
	cout<<g_max;
	
	
	return 0;
}
