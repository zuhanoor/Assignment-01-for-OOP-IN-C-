#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, i,  a[100];
	float avg=0;
	float sd;
	float sum_sqr=0;
	cout<<"enter size"<<endl;
	cin>>n;
	cout<<"enter numbers"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	for(i=0;i<n;i++){
		avg=avg+a[i];
		
	}
	avg= avg/n;


	for(i=0;i<n;i++){
		sum_sqr=sum_sqr+(a[i]*a[i]);
	}
	sd=sqrt((sum_sqr/n)-(avg*avg));
	cout<<sd;
	
}
