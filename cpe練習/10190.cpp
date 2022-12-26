#include<iostream>

using namespace std;

int main(){
	int n,m,temp;
	
	while(1){
		cin>>n>>m;
		temp=n;

		if(m<=1||n<m){
			cout<<"Boring!"<<endl;
			continue;
		}
		while(temp!=1){
			if(temp%m==0){
				temp=temp/m;
			}
			else{
				cout<<"Boring!"<<endl;
				break;
			}
		}
		if(temp==1){
			while(n!=1){
				cout<<n<<" ";
				n=n/m;
				if(n==1){
					cout<<n;
				}
			}
			cout<<endl;
		}
		else{continue;}
	}
	
} 

////uva10190
//#include <cmath>
//#include <iostream>
//using namespace std;
//
//int main() {
//    long long n, m, i;
//
//    while (cin >> n >> m) {
//        long long cn1 = m;
//
//        for (i = 1; cn1 < n && m > 1; i++) {
//            cn1 = pow(m, i);
//        }
//
//        if (cn1 > n || m <= 1) {
//            cout << "Boring!" << endl;
//        } else {
//            while (cn1 > 0) {
//                cout << cn1;
//                if (cn1 != 1) {
//                    cout << " ";
//                } else {
//                    cout << endl;
//                }
//                cn1 /= m;
//            }
//        }
//    }
//    return 0;
//}
