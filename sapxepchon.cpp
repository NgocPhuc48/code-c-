#include<iostream>
//   4 3 2 1 5 
//b2 1 3 2 4 5 
//b3 

using namespace std;
int sapxepchon(int a[],int n){   
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min]){
				min=j;
			}
		}
		swap(a[i],a[min]);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sapxepchon(a,n);
	return 0;
}
