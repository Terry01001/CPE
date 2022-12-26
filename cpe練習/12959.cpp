#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int j,r;
	
	do{
		cin>>j>>r;
		int **arr;
		arr = new int*[r];
		for(int i=0;i<r;i++){
			arr[i]=new int[j];
		}
		
		for(int i=0;i<r;i++){
			for(int k=0;k<j;k++){
				cin>>arr[i][k];
			}
		}
		
		/*
		//test
		for(int i=0;i<r;i++){
			for(int k=0;k<j;k++){
				printf("%3d",arr[i][k]);
			}
			cout<<endl;
		}*/
		
		
		
		int sum[j]={0};
		
		for(int i=0;i<j;i++){
			for(int k=0;k<r;k++){
				sum[i]+=arr[k][i];
			}
		}
		
		/*	
		//test
		for(int i=0;i<j;i++){
			cout<<sum[i]<<" ";
		}*/
		
		int max=*max_element(sum,sum+j);
		cout<<"msx_element:"<<max<<endl;
		
		
		/*
		int max=sum[0];
		int index=0;
		for(int i=0;i<j;i++){
			if(sum[i] >= max){
				max=sum[i];
				index=i;
			}
		}
		cout<<endl<<index+1<<endl;
		*/
		
		
	}while(j!=0 && r!=0 );
}
