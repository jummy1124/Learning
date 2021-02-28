#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long long A[100000],B[100000],num1,num2,ansA=0,ansB=0;
	while(cin >> num1 >> num2){
//		­«¸m°}¦C 
		for (int i=0;i<100000;i++){
			A[i]=0;
			B[i]=0;
		}

		if ((num1!=0)&&(num2!=0)){
			for (int i=0;i<num1;i++){
				long long temp;
				cin >> temp;
				A[temp]+=1;
			}
			for (int i=0;i<num2;i++){
				long long temp;
				cin >> temp;
				B[temp]+=1; 
			}
			for (int i=0;i<100000;i++){
				if ((A[i]==0)&&(B[i]>=1)&&ansA<num1){
					ansA+=1;
				}
				if ((B[i]==0)&&(A[i]>=1)&&ansB<num2){
					ansB+=1;
				}
			}
			if(ansA>ansB){
				cout << ansB << endl;
			}
			else{
				cout << ansA << endl;
			}
			ansA=0,ansB=0;
		}
		else{
			break;
		}
	}

	return 0;
}
