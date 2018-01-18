// Equal to product
/*
Given an array of integers check whether there are two numbers present with given product.
*/
#include <iostream>
#include <bits/stdc++.h>
#define MAX 1005

using namespace std;

int arr[MAX];

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int t,n,p;
	bool found;
	
	cin>>t;
	
	while(t--){
		cin>>n>>p;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		found = false;
		
		for(int i=0;i<n && !found;i++){
			for(int j=0;j<n && !found;j++){
				if(i!=j){
					if(arr[i]*arr[j]==p){
						found = true;
						break;
					}
				}
			}
		}
		
		if(found){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	
	
	return 0;
}

















