#include <iostream>
using namespace std;

int usePointer(int a, int b, int *sum, float *avg){
	*sum = a + b;
	*avg = (float)*sum/2;
}

int main(){

	int a = 5, b= 10, sum = 0;
	float avg = 0;

	usePointer(a, b, &sum, &avg);
	
	cout<<sum<<endl;
	cout<<avg;
	
	return 0;
}
