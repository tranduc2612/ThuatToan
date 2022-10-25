#include<bits/stdc++.h>
using namespace std;
class myPriorityQueue{
	private:
		int length = 0;
		int arr[];
	public:
	void swap(int *a, int *b) {
  	int temp = *b;
  		*b = *a;
  		*a = temp;
	}

	void heapify(int arr[], int length, int i) {
  		if (length == 1) {
    	printf("Có 1 phan tu");
  		} else {
    		int max = i;
    		int k = 2 * i + 1;
    		int j = 2 * i + 2;
    		if (k < length && arr[k] > arr[max])
     			max = k;
    		if (j < length && arr[j] > arr[max])
      			max = j;
    		if (max != i) {
      			swap(&arr[i], &arr[max]);
      			heapify(arr, length, max);
    			}
  			}
		}
	void add_node(int arr[], int new_data) {
  		if (length == 0) {
    	arr[0] = new_data;
    	length += 1;
  		} else {
    	arr[length] = new_data;
    	length += 1;
    	for (int i = length / 2 - 1; i >= 0; i--) {
      		heapify(arr, length, i);
    	}
  	}
}

	void remove_node(int arr[], int data) {
  		int i;
  		for (i = 0; i < length; i++) {
    		if (data == arr[i])
      		break;
  		}
  		swap(&arr[i], &arr[length - 1]);
  		length -= 1;
  		for (int i = length / 2 - 1; i >= 0; i--) {
    		heapify(arr, length, i);
  		}
	}
	
};

int main(){
	
}

