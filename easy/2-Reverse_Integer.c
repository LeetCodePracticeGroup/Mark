#include <stdio.h>
#include <stdlib.h>

int reverse(int x){
	int reverse = 0, counter = 0;
	int temp = abs(x);
	while(temp >= 1){
		counter++;
		reverse += temp % 10;
		temp /= 10;
		if(temp >= 1){
            if(counter == 9){
                if(reverse > 214748364) return 0; 
                else reverse *= 10;
            }
			else reverse *= 10;	
		}
	}
	if(x > 0) return reverse;
	else return -reverse;
}

int main(){
	int a = 1563847412;
	//int a = INT_MIN; 2147483647 / -2147483648
	//printf("%d", abs(a));
	printf("%d => %d", a, reverse(a));
} 
