#include <iostream>
using namespace std;

int main(){
	
	int a= 10;
	int* n = &a;
	
	cout<<*n;
	
	*n = 20;
	
	cout<<"a: "<<a<<endl;
	cout<<"n: "<<*n<<endl;
	
	int **pp = &n;
	
	**pp = 30;
	
	cout<<"Pointer to Pointer --------"<<endl;
	
	cout<<"a: "<<a<<endl;
	cout<<"n: "<<*n<<endl;
	cout<<"PP : "<<**pp<<endl;
	
	return 0;
}
