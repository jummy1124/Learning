#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,input,times,tc = 0;
	cin >> num;
	while (num--){
		cin >> input ;
		cin >> times;
		for (int t=0;t<times;t++){
			if (tc++){
				cout << endl;
			}
			for (int j=1;j<=input;j++){
				for (int k=1;k<=j;k++){
					cout << j; 
				}
				cout << endl;
			}
			for (int j=input-1;j>0;j--){
				for (int k=1;k<=j;k++){
					cout << j; 
				}
				cout << endl;
			}
//			cout << endl;  last line can not have '/n'
		}
	}
	return 0;
}


