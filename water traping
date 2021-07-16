#include <bits/stdc++.h>
using namespace std;

int area_water_trap(int arr[],int size)
{
    int mx_l[size]={0},mx_r[size]={0};
	

	mx_l[0]=arr[0];
	
	for(int i=1;i<size;i++)
	{
	    mx_l[i] = max(mx_l[i-1],arr[i]);
	}
	
	mx_r[size-1]=arr[size-1];
	
	for(int i=size-2;i>=0;i--)
	{
	    mx_r[i] = max(mx_r[i+1],arr[i]);
	}
	
	int water[size]={0};
	
	for(int i=0;i<size;i++)
	{
	    water[i]=min(mx_r[i],mx_l[i])-arr[i];
	}
	
	int sum=0;
	
	for(int i=0;i<size;i++)
	{
	    sum += water[i];
	}
	
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int arr[6]={3,0,0,2,0,4};
	int size=6;
	
	int sum = area_water_trap(arr,size);
	cout<<sum;
	
	return 0;
}
