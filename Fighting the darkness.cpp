// Fighting the darkness 
/*
Given an integer array representing size of candles which reduce 1 unit in a day. Room is illuminated using given x candles. Question is to find maximum number of days room is without darkness.
*/
#include <iostream>
#include <bits/stdc++.h>
#define MAX 1005

using namespace std;

int arr[MAX];

int maximo(int a, int b){
	return a>b?a:b;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	freopen("entrada.txt","r",stdin);
	freopen("salida.txt","w",stdout);
	
	int t,n,m;
	cin>>t;
	
	while(t--){
		cin>>n;
		
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		m = arr[0];
		
		for(int i=1;i<n;i++){
			m = maximo(m,arr[i]);
		}
		printf("%d\n",m);
	}
	
	return 0;
}
