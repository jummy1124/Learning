#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,input,sum=0;
	cin >> num;
	for (int j=0;j<num;j++){
		cin >> input;
		sum=0; 
		for (int i=1;i<(input/2)+1;i++){
			if ((input%i)==0){
				sum+=i;
			}
		}
		if (input>sum){
			cout << "deficient" << endl;
		}
		if(input==sum){
			cout << "perfect" << endl;
		}
		if (input<sum){
			cout << "abundant" <<endl;
		}
	} 
	return 0;
}
