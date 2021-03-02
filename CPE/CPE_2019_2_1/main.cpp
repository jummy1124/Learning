#include <iostream>
#include <stdlib.h>     /* abs */
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,num,input[15],temp[15],n=1000,cnt=0;
	cin >> x;
	for (int k=0;k<x;k++){
		cin >> num;
		for (int i=0;i<num;i++){
			cin >> input[i];
		}
		n=1000;
		while(n--){
			cnt=0;
			for (int i=1;i<=num;i++){
				if (i!=num){
					temp[i-1]=abs(input[i]-input[i-1]);
	//				cout << abs(input[i]-input[i-1]) << " ";	
				}else{
					temp[num-1]=abs(input[i-1]-input[0]);
	//				cout << abs(input[i-1]-input[0]) << " ";
				}
			}
			for (int i=0;i<num;i++){
				input[i]=temp[i];
				if(temp[i]==0){
					cnt+=1;
				}
			}
			if (cnt==num){
				cout << "ZERO" << endl;
				break;
			}
		}
		if (cnt!=num){
			cout << "LOOP" << endl;
		}
	}
	return 0;
}
