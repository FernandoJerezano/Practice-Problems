// Decimal to binary
/*
Given a decimal number. Write a program to convert it into equivalent binary number.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void binary(int n){
	
	int ind = 31;
	
	while(true){
		if((1<<ind)&n){
			break;
		}
		ind--;
	}
	
	for(int i=ind;i>=0;i--){
		if((1<<i)&n){
			printf("1");
		}else{
			printf("0");
		}
	}
	printf("\n");
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int t,n;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		binary(n);
	}
	
	return 0;
}
