#include <iostream>
#include <cstdlib>
 
using namespace std;
 
int main()
{
	long long n;
	while (  cin >> n ) 
		cout << ((n+1)/2*(n+1)/2)*6-9 << endl;
	return 0;
}

