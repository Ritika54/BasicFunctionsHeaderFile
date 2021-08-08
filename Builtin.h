#include<iostream>
#include<math.h>
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
		case '+':return a+b;
			break;
		case '-':return a-b;
			break;
		case '/':return a/b;
			break;
		case '*':return a*b;
			break;
		case '%':return (int)a%(int)b;
			break;
		case '^':return power(a,b);
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

int armstrong(int n){
	int temp,save=n,sum=0;
	while(n>0){
		temp=n%10;
		n=n/10;
		sum+=power(temp,3);
	}
	if(sum==save)
		return 1;
	return 0;
}

int triangleType(int a,int b,int c){
	if(a==b && b==c)
		return 3;//equilateral triangle
	else if(b==c || a==c)
		return 2;//isosceles triangle
	else
		return 1;//scalene triangle
}

int vowel(char ch){
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		return 1;//Vowel
	return 0;//Consonant
}

char upperToLower(char ch){//Uppercase to lowercase Alphabet
	if(ch>=65 && ch<=90)
		return ch+32;
	return '0';
}

char lowerToUpper(char ch){// lowercase to Uppercase Alphabet
	if(ch>=97 && ch<=122)
		return ch-32;
	return '0';
}

int factorial(int n){
	int fact=1;
	for(int i=n;i>=1;i--){
		fact*=i;
	}
	return fact;
}

int prime(int n){
	int sqr=sqrt(n);
	for(int i=2;i<=sqr;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}

void roots(int a,int b,int c,float ar[]){//roots will be sent only if they are real
	int d;
	d=power(b,2)-4.0*a*c;
	if(d>=0){
		ar[0]=((-2.0)*a + sqrt((float)d))/(2*a);
		ar[1]=((-2.0)*a - sqrt((float)d))/(2*a);
	}
}

int greatestin3(int a,int b,int c){
	if(a>b && a>c)
		return a;
	else if(b>c)
		return b;
	return c;
}

void swap(int *a,int *b){
	int *temp;
	*temp=*a;
	*a=*b;
	*b=*temp;
}

int nthtermAP(int a1,int d,int n){
	return a1+(n-1)*d;
}

int commonDiffAP(int firstTerm,int secondTerm){
	return secondTerm-firstTerm;
}

int sumOfAP(int a1,int d,int n){
	return (n/2)*((2*a1)+(n-1)*d);
}

int nthtermGP(int a1,int r,int n){
	return a1*power(r,n-1);
}

int constantRatioGP(int firstTerm,int secondTerm){
	return secondTerm/firstTerm;
}

float sumOfGP(float a1,float r,int n){
	return (a1*(power(r,n)-1))/(r-1);
}

int gcd(int a,int b){//HCF
	if(a-b==0)
		return a;
	else if(a>b){
		if(a%b==0)
			return b;
		return gcd(a-b,b);	
	}
	else{
		if(b%a==0)
			return a;
		return gcd(b-a,a);
	}
}

int lcm(int a,int b){

	int i=2;
	if(a-b==0)
		return a;
	else if(a>b){
		if(a%b==0)
			return a;
		else{
			return lcm(a*i,b);
			i++;			
		}
	}
	else{
		if(b%a==0)
			return b;
		else{
			return lcm(a,b*i);
			i++;			
		}
	}
}

int index=-1;//GLOBAL

int pushArray(int a[],int ele){
	
	int length=sizeof(a)/sizeof(int);
	if(index<=length-1){
		a[++index]=ele;
		return 1;
	}
	
	return 0;
}

int popArray(int a[]){

	int length=sizeof(a)/sizeof(int);
	if(index<0)
		return 0;
	--index;

	return 1;
}

int strlen(char str[]){

	int l=0;
	while(str[++l]!='\0');

	return l;
}

int strcpy(char str[],char str2[]){

	int length1=strlen(str);
	int length2=strlen(str2);
	
	int i=0;
	while(i<length1){
		str2[i]=str[i];
		i++;
	}

	return 1;
}

void swapChar(char *ch1,char *ch2){
	
	char temp;
	temp=*ch1;
	*ch1=*ch2;
	*ch2=temp;
}

int strrev(char str[]){
	
	int length=strlen(str);
	int i=0;
	while(i<length/2){
		swapChar(&str[i],&str[length-1-i]);
		i++;
	}
	
	return 1;
}

int strcat(char str[],char str2[],char str3[]){
	
	int l1=strlen(str);
	int l2=strlen(str2);
	int sum=l1+l2;
	strcpy(str,str3);
	int i=l1,k=0;
	while(i<sum){
		str3[i++]=str2[k++];
	}
	
	return 1;
}

int binaryToDecimal(string str){
	
	int l=strlen(str)-1;
	int sum=0,i=0;
	while(l>=0){
		if(str[i]>'1')
			return -1;
		sum+=str[i]*power(2,l);
		l--;
		i++;
	}

	return sum;
}

int decimalToBinary(int a){
	
	int bin=0,temp,i=0;
	while(a>0){
		temp = a%2;
		a=a/2;
		bin += temp*power(10,i);
		i++;
	}

	return bin;
}

int octalToDecimal(string str){
	
	int l=strlen(str)-1;
	int sum=0,i=0;
	while(l>=0){
		if(str[i]>'7')
			return -1;
		sum+=str[i]*power(8,l);
		l--;
		i++;
	}

	return sum;
}

int decimalToOctal(int a){
	
	int oct=0,temp,i=0;
	while(a>0){
		temp = a%8;
		a=a/8;
		bin += temp*power(10,i);
		i++;
	}
	
	return oct;
}

int hexToDecimal(string str){
	
	int l=strlen(str)-1;
	int sum=0,i=0;
	
	while(l>=0){
		if(str[i]>=65 && str[i]<=70){
			sum+=(str[i]-55)*power(16,l);
			l--;
		}
		else if(str[i]>=97 && str[i]<=102){
			sum+=(str[i]-87)*power(16,l);
			l--;
		}
		else{
			sum+=(str[i]-55)*power(16,l);
			l--;
		}
		i++;
	}

	return sum;
}

string decimalTohex(int a){
	
	int temp,i=0;
	string hex;
	
	while(a>0){
		temp = a%16;
		a=a/16;
		if(temp>=10){
			hex[i]=temp+87;
		}
		else{
			hrx[i]=temp+48;
		}
		i++;
	}

	return strrev(hex);
}

string binToOct[8]={"000","001","010","011","100","101","110","111"};
string binToHex[16]={"0000","0001","0010","0011","0100","0101","0110","0111",
					"1000","1001","1010","1011","1100","1101","1110","1111"};

string binaryToOctal(string str){
	
	int l=strlen(str)-1;
	int i=0,j=0;
	string oct,temp;
	
	while(i<=l){

		strcat(strcat(str[l-2],str[l-1],temp),str[l],temp);//need to do something if length is not mutiple of 3(if pairs are unable to complete)
		while(j<8){
			if(strequal(temp,binToOct[j]))
				break;
			j++;
		}
		oct[i]=j;
		i++;
		l-=3;
	}

	return oct;
}

string octalToBinary(string str){
	
	int l=strlen(str)-1;
	int i=0,j=0;
	string bin;
	
	while(i<=l){
		strcpy(binToOct(str[i]-'0'),bin[j]);
		j+=3;
	}

	return bin;
}

string hexToBinary(string str){

}

string binaryToHex(string){

}

string octalTohex(string str){
	
	return octalToBinary(binaryToHex(str));
}

string hexToOctal(string str){
	
	return hexToBinary(binaryToOctal(str));
}

int linearSearch(int arr[],int ele){
	
	int l=sizeof(arr)/sizeof(int);
	//checking whether sorted array is entered or not
	for(int i=0;i<l;i++){
		if(arr[i]>arr[i+1])
			return -100;//if unsorted array entered
	}
	
	for(int i=0;i<l;i++){
		if(arr[i]==ele)
			return i+1;
	}
	
	return -1;//if element not found
}

int binarySearch(int ele){
	
	return -1;//if element not found
}

void selectionSort(){

}

void insertionSort(){

}

void bubbleSort(){

}

void quickSort(){

}

