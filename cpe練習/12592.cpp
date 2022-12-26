#include<iostream>
using namespace std;

typedef char* Sptr; 

int main(){
	int n,i,j,k;
	cin>>n;
	
	Sptr *s1;
	s1 = new Sptr[n];
	for(i=0;i<n;i++){
		s1[i] = new char[50];
	}
	
	Sptr *s2;
	s2 = new Sptr[n];
	for(i=0;i<n;i++){
		s2[i] = new char[50];
	}
	
	fflush(stdin);
	
	for(i=0;i<n;i++){
		cin.getline(s1[i],50);
		cin.getline(s2[i],50);
	}

	int search;
	cin>>search;//key in number to search
	Sptr *s3;
	s3 = new Sptr[search];
	for(i=0;i<search;i++){
		s3[i] = new char[50];
	}
	
	fflush(stdin);
	for(i=0;i<search;i++){
		cin.getline(s3[i],50);
	}
	
	int index[search];
	int flag=0,count=0;
	
	for(i=0;i<search;i++){
		for(j=0;j<n;j++){
			flag=0;count=0;
			for(k=0;k<50;k++){
				if(s3[i][k]=='\0'||s1[j][k]=='\0')
					break;
				else
					count+=1;
				if(s3[i][k]==s1[j][k])
					flag+=1;
				
			}
			if(s3[i][k]!='\0'||s1[j][k]!='\0'){
				continue;
			}
			if(flag==count){
				index[i]=j;
			}
			else
				continue;
		}
	} 
	
	for(i=0;i<search;i++){
		cout<<s2[index[i]]<<endl;
	}
	
}

/*
//uva12592
#include<cstdio>
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main(){
	int t, n;
	string in, in2;
	map <string,string> out;
	map <string,string>::iterator it;
	cin >> t;
	getchar();
	while(t--){
		getline(cin,in);
		getline(cin,in2);
		out[in] = in2;
	}
	cin >> n;
	getchar();
	while (n--){
		getline(cin,in);
		it = out.begin();
		while (it != out.end()){
		    if (it->first == in){
				cout << it->second << endl;
				break;
			}
			else if (it->second==in){
				cout << it->first << endl;
				break;
			}
			it++;
		}
	}
	return 0;
}
*/
