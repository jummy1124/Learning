#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//二方法解題 
int main(int argc, char** argv) {
	long long input,sum=0;
		while (cin >> input){
			if (input==0){
				break;
			}
			sum=0;
			for(int i=1;i<=input;i++){
				sum+=(input/i)*i;
			}
			cout << sum-1 << endl;
		}
	return 0;
}
