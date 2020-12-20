#include <iostream>
using namespace std;

class ComplexNumber{
	private:
		int real;
		float imaginary;
	public:
		ComplexNumber(){
			
		}
		ComplexNumber(int r, float i){
			real = r;
			imaginary = i;
		}
		void displayData(){
			cout<<"Complex Number is: "<<real<<" + "<<imaginary<<"i"<<endl<<endl;
		}
		
		int getRealPart(){
			return real;
		}
		float getimaginaryPart(){
			return imaginary;
		}
};

ComplexNumber add2Number(ComplexNumber n1, ComplexNumber n2){
	int r;
	float i;
	r = n1.getRealPart() + n2.getRealPart();
	i = n1.getimaginaryPart() + n2.getimaginaryPart();
	
	ComplexNumber temp(r, i);
	return temp;
}

int main(){
	
	ComplexNumber comp1(2,3), comp2(4,5), comp3;

	comp1.displayData();
	comp2.displayData();

	cout<<"Comp1 + Comp2 \n";
	comp3 = add2Number(comp1, comp2);
	comp3.displayData();

    return 0;
}
