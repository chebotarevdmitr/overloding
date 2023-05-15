#include <iostream>

using namespace std;

int sum(int a,int b);
double sum(double a,double b);
float sum(float a,float b, float c);
int main() {
	
	cout<<sum (3,4)<<endl;
	
	system("pause>0");
}
// int sum(int a,int b){
// int result = a+b;
//   return result;

int sum(int a,int b){
	return a+b;
}

double sum(double a,double b){
	return a+b;
}
float sum(float a,float b, float c){
	return a+b+c;
}