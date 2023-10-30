#include <stdio.h>

int fatorial(int n){
	
	
	if(n == 0){
		return 1;
	}
    return n * fatorial(n-1);
}
int main(){
	int n;
	scanf("%d", &n);
	n = fatorial(n);
	
	printf("fatorial e %d", n);
	return 0;
	

}