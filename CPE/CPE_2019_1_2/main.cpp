#include <iostream>
#include <string.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num=0,N,sum=0,ans=99999;
	cin >> num;
	for (int j=0;j<num;j++){
		cin >> N;
		for (int i=N;i>0;i--){
			int temp=i;
			while(temp>0){
				sum+=temp%10;
				temp/=10;
			}
			if ((N==sum+i)&&(ans>i)){
				ans=i;
			}
			sum=0;
		}
		if (ans!=99999){
			cout << ans << endl;
		}
		else{
			cout << "0" << endl;
		}
		ans=99999;
	}
	return 0;
}
