#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a,b,c,d;
	while (cin >> a >> b >> c >> d){
		if ((a==0)&&(b==0)&&(c==0)&&(d==0)){ 
			break;
		} 
		if (a>c){
			cout << ((23-a)*60+(60-b))+(c*60+d) << endl;
		}
		if(a<c){
			if(b==d){
				cout << (c-a)*60 << endl;
			}
			if(b>d){
				cout << (c-a)*60-(b-d) << endl;
			}
			if(b<d){
				cout << (c-a)*60+(d-b) << endl;
			}
		}
		if(a==c){
			if(b>d){
				cout << 1440-(b-d) << endl;
			}
			if(b==d){
				cout << 1440 << endl;
			}
			if(d>b){
				cout << d-b << endl;
			}
		}
	}
	return 0;
}
