#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int N;
	string X;
	while(cin >> N){
		vector<string>nums;
		for(int i = 0; i<N; i++){
			cin >> X;
			nums.push_back(X);
		}
		sort(nums.begin(), nums.end());
		for(int i = 0; i<N; i++){
			cout << nums[i] << endl;
		}
	}
}
