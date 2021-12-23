#include <stdio.h>
int main(){
	int num;
	long int sum=1;
	//int arr[10000]={1};// static allocation array
	int *arr= NULL;
	scanf("%d", &num); 
        arr=(int*)malloc(sizeof(int)*num);// Dynamic allocating array
	for(int i=0;i<num;i++){
	 scanf("%d",&arr[i]);}
	for(int i=0;i<num;i++){
	 sum=(arr[i]*sum)% (1000000007);} // for overflowed variable we use modulus 1000000007.
	printf("%llu\n", sum);
	free(arr); // deallocating(free) memory
	return 0;
}
