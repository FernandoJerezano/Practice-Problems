// Missing number in array
/*
Given an array of size n-1 and given that there are numbers from 1 to n with one missing, the missing number is to be found.
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
	
	int t,n,r;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		r = n*(n+1)/2;
		for(int i=0;i<n-1;i++){
			cin>>arr[i];
		}
		
		for(int i=0;i<n-1;i++){
			r -= arr[i];
		}
		printf("%d\n",r);
	}
	
	return 0;
}

