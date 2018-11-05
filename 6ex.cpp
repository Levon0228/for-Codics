#include<iostream>
void reverse_arr(int a[],int start,int size){
    if(start >= size){
        return ;
    }
    else{
        int temp;
        temp = a[start];
        a[start]= a[size-1];
        a[size -1] = temp;
        reverse_arr(a,start+1, size-1);
    }      
}
void print(int arr[],int size) {
	for(int i = 0; i<size; i++){
		std::cout<<arr[i]<<"  ";
	}
}

int main() {
	int start = 0;
    	int size = 5;
    	int arr[size] = {1, 2, 3, 4, 5};
    	reverse_arr(arr,start, size);
    	print(arr, size);
}
