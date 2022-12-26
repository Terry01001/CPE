#include<iostream>
using namespace std;

int main(){
	int tempm,tempf,n,i;
	int male=0,female=0,magic_female=1;
	
	while(cin>>n && n != -1){
		male=0;female=0;//initialize
		
		for(i=n;i>0;i--){//years
			tempm=0;
			tempf=0;
			
			tempm+=male;//male give birth
			tempf+=male;
			
			tempm+=female;//female give birth
			tempm+=1;//magic_female give birth
			
			male= (male-male+tempm);//dead
			female =(female-female+tempf);
			//cout<<male<<"|"<<female<<endl;
		}
		cout<<male<<" "<<male+female+magic_female<<endl;
	}
	
} 

////uva11000
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    int N = 0;
//    vector<long long> mbee, fbee;
//
//    mbee.push_back(0);
//    fbee.push_back(1);
//    while (cin >> N && N != -1) {
//        while (N >= mbee.size()) {
//            int cur_m = mbee.back();
//            int cur_f = fbee.back();
//            mbee.push_back(cur_m + cur_f);
//            fbee.push_back(cur_m + 1);
//        }
//        cout << mbee[N] << " " << mbee[N] + fbee[N] << endl;
//    }
//    return 0;
//}
