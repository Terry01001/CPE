#include<iostream>

using namespace std;

void swap(int &x,int &y){
	int temp = x;
	x=y;
	y=temp;
}

int main(){
	int a,b,i;
	int out[10]={0};
	
	while(cin>>a>>b){
		if(a==0 && b==0){break;}
		if(a>=b) {swap(a,b);}
		
		for(i=a;i<=b;i++){// run mei ge shu zi
			int current =i;
			while(i>0){
				int test = i%10;
				i/=10;
				out[test]++;
			}
			i = current;
		}
		for(i=0;i<10;i++){
			cout<<out[i]<<" ";
		}
		cout<<endl;
		
		for(i=0;i<10;i++){//reset
			out[i]=0;
		}
		
	}
	
}

/*
//uva1640
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

vector<int> i2v(int n) {
    vector<int> output;

    while (n != 0) {
        output.push_back(n % 10);
        n /= 10;
    }
    reverse(output.begin(), output.end());

    return output;
}

void solve(const int n, vector<int>& result) {
    vector<int> vec_num = i2v(n);
    int digits = vec_num.size();
    int power = pow(10, digits - 1);

    for (int i = 0; i < digits; i++) {
        for (int j = 0; j < vec_num[i]; j++) {
            result[j] += power;
        }

        for (int j = 0; j < 10; j++) {
            result[j] += power / 10 * (digits - i - 1) * vec_num[i];
        }

        if (i + 1 < digits) {
            result[vec_num[i]] += n % power;
        }
        result[vec_num[i]]++;

        result[0] -= power;
        power /= 10;
    }
}

int main() {
    int a, b;
    vector<int> result_a(10, 0), result_b(10, 0);

    while (cin >> a >> b && a && b) {
        result_a.assign(10, 0);
        result_b.assign(10, 0);

        if (a > b) swap(a, b);

        solve(a - 1, result_a);
        solve(b, result_b);

        for (int i = 0; i < 9; i++) {
            cout << result_b[i] - result_a[i] << " ";
        }
        cout << result_b[9] - result_a[9] << endl;
    }
    return 0;
}
*/
