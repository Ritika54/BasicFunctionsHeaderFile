#include<iostream>

#define PI 3.14

using namespace std;

int area_triangle(int b,int h){
	return 0.5*b*h;
}

int area_circle(int r){
	return PI*r*r;
}

int circumference(int r){
	return 2*PI*r;
}

int charToAscii(char ch){
	return ch;
}

char AsciiToChar(int x){
	return x;
}

int max(int a,int b){
	if(a>b)
		return a;
	else if(b>a)
		return b;
	else 
		return 0; //returns 0 when numbers are equal	
}

float power(float base,float p){
	float ans=1;
	if(p==0)
		ans=1;
	else if(p>0){
		for(int i=1;i<=p;i++)
			ans=ans*base;
	}
	else{
		p=p*(-1);
		for(int i=1;i<=p;i++)
			ans=ans/base;
	}
	
	return ans;
}

int simpleInterest(int p,int r,int t){
	return p*r*t/100;
}

float compoundInterest(float p,float r,float t){
	float rate;
	rate=((100.0+r)/100.0);
	rate= power(rate,t);
	return p*rate;
}

int positiveNegative(int x){
	if(x>=0)
		return 1;//returns 1 if no. is +ve
	return 0;//returns 0 if no. is -ve
}

int evenOdd(int x){
	if(x%2==0)
		return 1;
	return 0;
}

int leap(int y){
	if(y%400==0)
		return 1;
	return 0;
}

int sumOfNaturalNo(int n){
	int sum=0;
	for(int i=1;i<=n;i++)
		sum+=i;
	return sum;
}

void fibonacci(int n){
	int f=0,s=1,next=1;
	for(int i=1;i<=n;i++){
		next=f+s;
		cout<<next<<"\t";//1,1,2,3,.....
		f=s;
		s=next;
	}
}

int sumFibonacci(int n){
	int f=0,s=1,next=1;
	for(int i=1;i<=n;i++){
		next=f+s;
		f=s;
		s=next;
	}
	return next;
}

int palindrome(int n){
	int sum=0,temp,save=n;
	while(n>0){
		temp=n%10;
		n=n/10;
		sum=sum*10+temp;
	}
	if(sum==save)
		return 1;
	return 0;
}

int reverseNo(int n){
	int sum=0,temp;
	while(n>0){
		temp=n%10;
		n=n/10;
		sum=sum*10+temp;
	}
	return sum;
}

void multiplicationTable(int n){
	for(int i=1;i<=10;i++)
		cout<<n<<"\t*\t"<<i<<"\t=\t"<<n*i<<"\n";
}

float calculator(float a,float b,char ch){
	switch(ch){
		'+':return a+b;
			break;
		'-':return a-b;
			break;
		'/':return a/b;
			break;
		'*':return a*b;
			break;
		'%':return a%b;
			break;
		'^':return power(a,b);
			break;
		default:return 0;
			
	}
}

float tempCTOF(float c){
	return  c*(9.0/5.0) + 32.0;
}

float tempFTOC(float f){
	return  ((f-32.0)*5.0)/9.0;
}

int gcd(int a,int b){
	int m=max(a,b);
	if(1){
		
	}
	else{
		
	}
}

