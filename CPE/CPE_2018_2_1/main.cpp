#include <iostream>
#include <set>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num,x[4],temp[4];
	cin >> num;
	while(num--){
		temp[0]=0,temp[1]=0,temp[2]=0,temp[3]=0;
		x[0]=0,x[1]=0,x[2]=0,x[3]=0;
		for (int i=0;i<4;i++){
			cin >> x[i];
		}
		temp[0]=x[1]+x[2]+x[3];
		temp[1]=x[0]+x[2]+x[3];
		temp[2]=x[0]+x[1]+x[3];
		temp[3]=x[0]+x[1]+x[2];
		
		if ((x[0]==x[1])&&(x[1]==x[2])&&(x[2]==x[3])){
			cout << "square" << endl;
		}
		else if (((x[0]==x[1])&&(x[2]==x[3]))||((x[1]==x[2])&&(x[0]==x[3]))||((x[1]==x[3])&&(x[0]==x[2]))){
			cout << "rectangle" << endl;
		}
		else if ((temp[0]<=x[0])||(temp[1]<=x[1])||(temp[2]<=x[2])||(temp[3]<=x[3])){
			cout << "banana" << endl;
		}
		else {
			cout << "quadrangle" << endl;
		}
	}
	return 0;
}
