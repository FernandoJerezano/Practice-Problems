// Find all pairs with a given sum
/*
Given two unsorted arrays A[] of size n and B[] of size m of distinct elements, the task is to find all pairs from both arrays whose sum is equal to x.
*/
#include <iostream>
#include <bits/stdc++.h>
#define MAX 1005

int arr_a[MAX];
int arr_b[MAX];

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	vector< pair<int,int> > vec;
	int t;
	int n,m,x;
	
	cin>>t;
	
	while(t--){
		
		vec.clear();
		
		cin>>n>>m>>x;
		
		for(int i=0;i<n;i++){
			cin>>arr_a[i];
		}
		for(int i=0;i<m;i++){
			cin>>arr_b[i];
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(arr_a[i]+arr_b[j]==x){
					vec.push_back(make_pair(arr_a[i],arr_b[j]));
				}
			}
		}
		
		if(vec.size()==0){
			printf("-1\n");
		}else{
			sort(vec.begin(),vec.end());
			printf("%d %d",vec[0].first,vec[0].second);
			for(int i=1;i<vec.size();i++){
				printf(", %d %d",vec[i].first,vec[i].second);
			}
			printf("\n");
		}
	}
	return 0;
}














