#include <stdio.h>
#include<iostream>
using namespace std; 
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

int binaryToDecimal(char *str){
	
	int l=strlen(str)-1;
	int sum=0,i=0;
	while(l>=0){
		if(str[i]>'1')
			return -1;
		sum+=(str[i]-'0')*power(2,l);
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

int octalToDecimal(char *str){
	
	int l=strlen(str)-1;
	int sum=0,i=0;
	while(l>=0){
		if(str[i]>'7')
			return -1;
		sum+=(str[i]-'0')*power(8,l);
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
		oct += temp*power(10,i);
		i++;
	}
	
	return oct;
}

int hexToDecimal(char *str){
	
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
			sum+=(str[i]-'0')*power(16,l);
			l--;
		}
		i++;
	}

	return sum;
}

string decimalTohex(int a){
	
	int temp,i=0;
	char *hex;
	
	while(a>0){
		temp = a%16;
		a=a/16;
		if(temp>=10){
			*(hex + i)=temp+87;
		}
		else{
			*(hex + i)=temp+48;
		}
		i++;
	}
    strrev(hex);
	return hex;
}

string binToOct[8]={"000","001","010","011","100","101","110","111"};
string binToHex[16]={"0000","0001","0010","0011","0100","0101","0110","0111",
					"1000","1001","1010","1011","1100","1101","1110","1111"};

// string binaryToOctal(char str[]){
	
// 	int l=strlen(str)-1;
// 	int i=0,j=0;
// 	char* oct,temp;
	
// 	while(i<=l){
//         strcat(&str[l-2],&str[l-1],&temp);
// 		strcat(&temp,&str[l],&temp);//need to do something if length is not mutiple of 3(if pairs are unable to complete)
// 		while(j<8){
// 			if(strequal(temp,binToOct[j]))
// 				break;
// 			j++;
// 		}
// 		oct[i]=j;
// 		i++;
// 		l-=3;
// 	}

// 	return oct;
// }

// string octalToBinary(char str[]){
	
// 	int l=strlen(str)-1;
// 	int i=0,j=0;
// 	char *bin;
	
// 	while(i<=l){
// 		strcpy(binToOct[str[i]-'0'],*(bin + j));
// 		j+=3;
// 	}

// 	return bin;
// }

// string hexToBinary(char str[]){

// }

// string binaryToHex(string){

// }

// string octalTohex(char str[]){
	
// 	return octalToBinary(binaryToHex(str));
// }

// string hexToOctal(char str[]){
	
// 	return hexToBinary(binaryToOctal(str));
// }

int linearSearch(int *arr,int ele){
	
	int l = (*(&arr + 1) - arr);
	printf("%d\n",l);
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


int main()
{
//    printf("decimalTohex %s\n",decimalTohex(79));
    printf("decimalToOctal %d\n",decimalToOctal(79));
    printf("decimalToBinary %d\n",decimalToBinary(79));

    printf("hexToDecimal %d\n",hexToDecimal("4F"));
    //printf("hexToBinary %s\n",hexToBinary("4F"));
    //printf("hexToOctal %s\n",hexToOctal("4F"));
    
   // printf("binaryToOctal %s\n",binaryToOctal("1001111"));
   printf("binaryToDecimal %d\n",binaryToDecimal("1001111"));
    //printf("binaryToHex %s\n",binaryToHex("1001111"));
    
    // printf("octalToBinary %s\n",octalToBinary("117"));
    // printf("octalTohex %s\n",octalTohex("117"));
    printf("octalToDecimal %d\n",octalToDecimal("117"));
    
    int arr[]={1,2,3,4};
    
	
    printf("linearSearch %d",linearSearch(arr,3));

    return 0;
}


/*
#include <stdio.h>
#include<iostream>
using namespace std; 
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

// int binaryToDecimal(char *str){
	
// 	int l=strlen(str)-1;
// 	int sum=0,i=0;
// 	while(l>=0){
// 		if(str[i]>'1')
// 			return -1;
// 		sum+=(str[i]-'0')*power(2,l);
// 		l--;
// 		i++;
// 	}

// 	return sum;
// }

// int decimalToBinary(int a){
	
// 	int bin=0,temp,i=0;
// 	while(a>0){
// 		temp = a%2;
// 		a=a/2;
// 		bin += temp*power(10,i);
// 		i++;
// 	}

// 	return bin;
// }

// int octalToDecimal(char *str){
	
// 	int l=strlen(str)-1;
// 	int sum=0,i=0;
// 	while(l>=0){
// 		if(str[i]>'7')
// 			return -1;
// 		sum+=(str[i]-'0')*power(8,l);
// 		l--;
// 		i++;
// 	}

// 	return sum;
// }

// int decimalToOctal(int a){
	
// 	int oct=0,temp,i=0;
// 	while(a>0){
// 		temp = a%8;
// 		a=a/8;
// 		oct += temp*power(10,i);
// 		i++;
// 	}
	
// 	return oct;
// }

// int hexToDecimal(char *str){
	
// 	int l=strlen(str)-1;
// 	int sum=0,i=0;
	
// 	while(l>=0){
// 		if(str[i]>=65 && str[i]<=70){
// 			sum+=(str[i]-55)*power(16,l);
// 			l--;
// 		}
// 		else if(str[i]>=97 && str[i]<=102){
// 			sum+=(str[i]-87)*power(16,l);
// 			l--;
// 		}
// 		else{
// 			sum+=(str[i]-'0')*power(16,l);
// 			l--;
// 		}
// 		i++;
// 	}

// 	return sum;
// }
char hexArr[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

char* decimalTohex(int a){
	printf("1");
	
	int temp,i=0;
	char *hex;
	printf("2");
	
	while(a>0){
	printf("3");
		temp = a%16;
		a=a/16;
		*(hex + i)=hexArr[temp];
		i++;
	}
	printf("%s",hex);
    strrev(hex);
	return hex;
}

string binToOct[8]={"000","001","010","011","100","101","110","111"};
string binToHex[16]={"0000","0001","0010","0011","0100","0101","0110","0111",
					"1000","1001","1010","1011","1100","1101","1110","1111"};

// string binaryToOctal(char str[]){
	
// 	int l=strlen(str)-1;
// 	int i=0,j=0;
// 	char* oct,temp;
	
// 	while(i<=l){
//         strcat(&str[l-2],&str[l-1],&temp);
// 		strcat(&temp,&str[l],&temp);//need to do something if length is not mutiple of 3(if pairs are unable to complete)
// 		while(j<8){
// 			if(strequal(temp,binToOct[j]))
// 				break;
// 			j++;
// 		}
// 		oct[i]=j;
// 		i++;
// 		l-=3;
// 	}

// 	return oct;
// }

// string octalToBinary(char str[]){
	
// 	int l=strlen(str)-1;
// 	int i=0,j=0;
// 	char *bin;
	
// 	while(i<=l){
// 		strcpy(binToOct[str[i]-'0'],*(bin + j));
// 		j+=3;
// 	}

// 	return bin;
// }

// string hexToBinary(char str[]){

// }

// string binaryToHex(string){

// }

// string octalTohex(char str[]){
	
// 	return octalToBinary(binaryToHex(str));
// }

// string hexToOctal(char str[]){
	
// 	return hexToBinary(binaryToOctal(str));
// }

int linearSearch(int *arr,int ele){
	
	int l = (*(&arr + 1) - arr);
	printf("%d\n",l);
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


int main()
{
    printf("r");
   printf("decimalTohex %s\n",decimalTohex(79));
printf("rr");
////    printf("decimalToOctal %d\n",decimalToOctal(79));
////    printf("decimalToBinary %d\n",decimalToBinary(79));

////    printf("hexToDecimal %d\n",hexToDecimal("4F"));
    //printf("hexToBinary %s\n",hexToBinary("4F"));
    //printf("hexToOctal %s\n",hexToOctal("4F"));
    
   // printf("binaryToOctal %s\n",binaryToOctal("1001111"));
////   printf("binaryToDecimal %d\n",binaryToDecimal("1001111"));
    //printf("binaryToHex %s\n",binaryToHex("1001111"));
    
    // printf("octalToBinary %s\n",octalToBinary("117"));
    // printf("octalTohex %s\n",octalTohex("117"));
////    printf("octalToDecimal %d\n",octalToDecimal("117"));
    
    // int arr[]={1,2,3,4};
    
	
    // printf("linearSearch %d",linearSearch(arr,3));

    return 0;
}
*/