#include <bits/stdc++.h>
using namespace std;

int findMin(int N, int A[]){
	long long smallest_num = 2000000;
	
	for (int i=0; i<N; i++){
		if (A[i] < smallest_num){
			smallest_num = A[i];
		}
	}
	return smallest_num;
}
