#include <iostream>
#include <string>

//https://fg123789hj.pixnet.net/blog/post/282522020

using namespace std;
 
int main()
{
    int n;
    string act;
    
    while(cin>>n&&n!=0)//��J�ʧ@���� 
    {
    	int p[3][4]={0},t;
    	
    	p[1][0]=1;//�]�w�n��l�� 
    	p[1][1]=4;
    	p[1][2]=6;
    	p[1][3]=3;
    	p[0][0]=2;
    	p[2][0]=5;
    	
    	while(n--)
    	{
    		cin>>act;
    		if(act=="north")//�V�_�� 
			{
				t=p[0][0];
				p[0][0]=p[1][0];
				p[1][0]=p[2][0];
				p[2][0]=p[1][2];
				p[1][2]=t;
			}
			else if(act=="east")//�F 
			{
				t=p[1][0];
				p[1][0]=p[1][3];
				p[1][3]=p[1][2];
				p[1][2]=p[1][1];
				p[1][1]=t;
			}
			else if(act=="south")//�n 
			{
				t=p[2][0];
				p[2][0]=p[1][0];
				p[1][0]=p[0][0];
				p[0][0]=p[1][2];
				p[1][2]=t;
			}
			else if(act=="west")//�� 
			{
				t=p[1][0];
				p[1][0]=p[1][1];
				p[1][1]=p[1][2];
				p[1][2]=p[1][3];
				p[1][3]=t;
			}
			
		}
		cout<<p[1][0]<<endl;
	}
    return 0;
} 
