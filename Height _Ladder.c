#include<stdio.h>
#include<stdlib.h>
void readArray(int [],int);
//void Swap(int *,int *);
void outputArray(int [],int);
void sort(int[],int);
int main(){
	int arr[1000],val;
	scanf("%d",&val);
	readArray(arr,val);
	sort(arr,val);
	outputArray(arr,val);
}
void readArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
}
void outputArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
void sort(int arr[],int size){
	int i,j,key;
	for(i=0;i<size;i++){
		key = arr[i];
		j=i-1;
		while(j>=0 && key<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
}