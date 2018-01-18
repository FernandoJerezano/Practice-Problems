// Row with minimum number of 1's
/*
Determine the row index with minimum number of ones. The given 2D matrix has only zeroes and ones and also the matrix is sorted row wise . If two or more rows have same number of 1's than print the row with smallest index.
Note: If there is no '1' in any of the row than print '-1'.
*/
#include <iostream>
#include <bits/stdc++.h>
#define MAX 105

using namespace std;

int mat[MAX][MAX];

void print(int n, int m){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	int t;
	int n,m;
	int v;
	bool found;
	int s,r,min;
	
	cin>>t;
	
	while(t--){
		
		cin>>n>>m;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>v;
				mat[i][j] = v;
			}
		}
		
		min = 1<<12;
		found = false;
		
		for(int i=0;i<n;i++){
			s = 0;
			for(int j=0;j<m;j++){
				if(mat[i][j]){
					s++;
				}
			}
			if(s>0 && s<min){
				min = s;
				r = i;
				found = true;
			}
		}
		if(found){
			printf("%d\n",r);
		}else{
			printf("-1\n");
		}
	}
	return 0;
}
