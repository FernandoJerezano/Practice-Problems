// Largest Fibonacci Subsequence
/*
Given an array with positive number the task to find the largest subsequence from array that contain elements which are Fibonacci numbers.
*/
#include <iostream>
#include <bits/stdc++.h>
#define MAX 1005

using namespace std;

int arr[MAX];
int fib[50];
int tf;

void fibo(){
	
	int a=0,b = 1;
	int c = 0;
	int cont = 1;
	fib[0] = 0;
	fib[1] = 0;
	fib[2] = 1;
	int i = 3;
	while(c<MAX){
		c = fib[i-1]+fib[i-2];
		fib[i] = c;
		i++;
	}
	i--;
	tf = i;
	
}

bool is_fib(int n){
	
	for(int i=0;i<tf;i++){
		if(fib[i]==n)
			return true;
	}
	return false;
}

int main(){

	int t,n;
	
	fibo();
	vector<int> vec;
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	cin>>t;
	
	while(t--){
		cin>>n;
		vec.clear();
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		for(int i=0;i<n;i++){
			if(is_fib(arr[i]))
				vec.push_back(arr[i]);
		}
		if(vec.size()==1){
			printf("%d",vec[0]);
		}else{
			printf("%d",vec[0]);
			for(int i=1;i<vec.size();i++){
				printf(" %d",vec[i]);
			}
		}
		printf("\n");
	}
	
	
	return 0;
}
