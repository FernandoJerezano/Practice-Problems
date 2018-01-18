// Immediate Smaller Element
/*
Given an integer array, for each element in the array check whether there exist a smaller element on the next immediate position of the array. If it exist print the smaller element. If there is no smaller element on the immediate next to the element then print -1.
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
	
	int t,n;
	cin>>t;
	
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		for(int i=0;i<n-1;i++){
			if(arr[i]>arr[i+1]){
				printf("%d ",arr[i+1]);
			}else{
				printf("-1 ");
			}
		}
		printf("-1\n");
		
	}
	
	return 0;
}
