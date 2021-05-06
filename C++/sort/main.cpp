#include <iostream>
#include <algorithm>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int arr[10];
	for (int i=0;i<10;i++){
		cin >> arr[i];
	}
	
		
//	¤É¾­ 
	sort(arr,arr+10);
	for (int i=0;i<10;i++){
		cout << arr[i] << endl;
	}
	
//	­°¾­ 
	sort(arr,arr+10,std::greater<int>());
	for (int i=0;i<10;i++){
		cout << arr[i] << endl;
	}
	return 0;
}
