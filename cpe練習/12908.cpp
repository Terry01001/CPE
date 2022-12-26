#include<iostream>
using namespace std;

int main(){
	int s,i;
	while(cin>>s && s){
		//int n=0;
		for(i=1;i<=10000;i++){
			if((i*(i+1)/2)>=s){break;}
		}
		if((i*(i+1)/2)==s){
			cout<<i+1<<" "<<i+1<<endl;
		}
		else if((i*(i+1)/2)>s){
			cout<<(i*(i+1)/2)-s<<" "<<i<<endl;
		}
		
		
	}
} 
