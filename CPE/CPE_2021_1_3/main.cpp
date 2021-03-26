#include<iostream>
#include<String>
using namespace std;

int main(){
	int x,num1,num2,temp=0,out=0,ans_cnt=0,input_cnt=0;
	int cnt[10]={1,0,0,0,0,0,0,0,0,0};
	while(cin >> x){
		if(x==0)break;
		if((x!=0)&&(input_cnt>0)){
			cout << endl;
		}
		input_cnt+=1;
		for(int i=1234;i<98765;i++){
			//x=17;
			if((i*x)>99999)break;
			num1=i;
			num2=x*i;
			out=x*i;
			for(int j=0;j<5;j++){
				if(cnt[num2%10]<=10){
					cnt[num2%10]+=1;
				}
				//cout << num2%10 << endl;
				num2=num2/10;
			}
			for(int j=0;j<5;j++){
				if(cnt[num1%10]<=10){
					cnt[num1%10]+=1;
				}
				//cout << num1%10 << endl;
				num1=num1/10;
			}
			for(int j=1;j<10;j++){
				if(cnt[j]==1){
					temp+=1;
				}
			}
	
			if((temp==9)&&(i<10000)){
				cout << out << " / 0" << i << " = " << x << endl;
				ans_cnt+=1;
			}
			else if((temp==9)&&(i>=10000)){
				cout << out << " / " << i << " = " << x << endl;
				ans_cnt+=1;
			}
			temp=0;
			for(int j=1;j<10;j++){
				cnt[j]=0;
			}
		}
		if(ans_cnt==0){
			cout << "There are no solutions for " << x << "." << endl;
		}
		else{
			ans_cnt=0;
		}
	}
	return 0;
}
