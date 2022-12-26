#include<iostream>
#include<string>
using namespace std;

int main(){
	string dic = "";
	
	int N;
	
	cin>>N;
	
	while(N--){
		string words;
		getline(cin,words);
		for(int i=0;i<words.size();i++){
			if('A'<= words[i] && words[i]<='Z')
				words[i]+=32;//to lower case
			int pos = dic.find(words[i]);
			if(pos!=-1)
				words[i]=dic[pos-2];
		}
		cout<<words<<endl;
	}
	
	
}
