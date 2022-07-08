#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
 
	ios_base::sync_with_stdio(false);	// 동기화 해제
	cin.tie(NULL);	// 입출력 묶음 해제
	
	int T;
	cin >> T;	// Test Case
 
	for (int i = 1; i <= T; i++) {
		int a;
		int b;
		cin >> a >> b;
 
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n"; //(또는 endl;)
	}
	return 0;
}