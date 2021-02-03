#include <iostream>
#include <memory.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N,R,arr[20000],temp,cnt=0;
	while(cin >> N >> R){
		cnt=0;
		for(int i=0;i<R;i++){
			cin >> temp;
			for (int j=1;j<=N;j++){
				if (temp==j){
					 arr[j]=1;
				}
			}
		}
		for (int i=1;i<=N;i++){
			if (arr[i]==0){
				cnt+=1;
				cout << i << " ";
			}
		}
		if (cnt==0){
			cout << "*";
		}
		cout << endl;
		memset(arr,0,20000);  //²MªÅ°}¦C 
	}
	return 0;
}
