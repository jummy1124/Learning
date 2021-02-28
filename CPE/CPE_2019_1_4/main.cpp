#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string tip;
	char temp=true;
	int cnt=0,num,botton=0,top=11;
	while (temp){ 
		cin >> num;
		cin.ignore();
		getline(cin,tip);
		if (num==0){
			break;
		}
		if ((tip=="too high")&&(top>num)){
			top=num;
			cnt+=1;
		}
		if((tip=="too low")&&(botton<num)){
			botton=num;
			cnt+=1;
		}
		if (tip=="right on"){
			if ((botton<top)&&(botton<num)&&(top>num)||(cnt==0)){
				cout << "Stan may be honest" << endl;
				botton=0;
				top=11;
			}
			else{
				cout << "Stan is dishonest" << endl;
				botton=0;
				top=11;
			}
			cnt=0;
		}
//		cout << botton << "," << top << "," << num << endl;
	}
	return 0;
}
