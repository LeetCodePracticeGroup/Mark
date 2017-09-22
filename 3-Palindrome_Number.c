#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool isPalindrome(int x) {
	
	if(x < 0) return false;
	if(x >= 0 && x <= 9) return true;
	if(x < 100 && x % 11 == 0) return true;
	if(x % 10 == 0) return false;
	
	int reverse = 0;
	int temp = x;
	while(temp >= 1){
		reverse += temp % 10;
		temp /= 10;
		if(temp >= 1){
			reverse *= 10;
		}
	}
	if(reverse == x) return true;
	else return false;
}


int main(){
	int a = 5225;
	printf("%d => %s", a, isPalindrome(a) ? "true" : "false");	
} 
