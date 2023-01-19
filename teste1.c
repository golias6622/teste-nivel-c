#include<stdio.h>
 void inverte(int vet[], int n){
 	int aux[n];
 	int i;
 	for (i=0;i<=n;i++){
 		aux[i]=vet[i];
	 }
	 for(i=0;i<n;i++){
         vet[i]=aux[n-1-i];
	 	
	 }
 }
 int main(){
 	int vet[5]={1,2,3,4,5}, count; 
    inverte(vet, 5);
    for(count=0;count<5;count++){
        printf("%d\t",vet[count]);
    }
 }
 
