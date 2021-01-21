#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,x1,x2,ans=0,cnt1=0,cnt2=0;
	while(true){
		ans=0;
		cin >> num;
		if (num!=0){
			for (int i=2;i<=(num/2);i++){
				cnt1=0;
				cnt2=0;
				x1=i;
				x2=num-i;
		//		cout << x1 << "," << x2 << endl;
				for (int j=2;j<=sqrt(x1)+1;j++){
					if (((x1%j)==0)&&(x1!=2)){
						cnt1+=1;
					}
				} 
				for (int j=2;j<=sqrt(x2)+1;j++){
					if (((x2%j)==0)&&(x2!=2)){
						cnt2+=1;
					}
				} 
				if ((cnt1==0)&&(cnt2==0)){
					ans+=1;
				}
		//		cout << cnt1 << "," << cnt2 << endl;
			}
		}else{break;}
		cout << ans << endl;
	}
	return 0;
}
