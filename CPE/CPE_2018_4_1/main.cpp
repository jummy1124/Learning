#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N,ans=0,lines=1,cnt=1;
	while(cin >> N){
		ans=0,lines=1;
		if(N!=-1){
			if (N==1){
				cout << "Case " << cnt << ": " << 0 << endl;
			}
			else {
				for (int i=1;i<10001;i++){
					if (lines<N){
						lines+=lines;
						ans+=1;
					}
				}
				cout << "Case " << cnt << ": " << ans << endl;
			}
		}
		else{
			break;
		} 
		cnt+=1;
	}
	return 0;
}
