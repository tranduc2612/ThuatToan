package buoi1;

import java.util.ArrayList;

public class PriorityQueue {
	private int length = 0;
	private ArrayList<Integer> arr = new ArrayList<Integer>();
	
	private void heapify(int i) {
		  if (length == 1) {
		     System.out.print("co 1 phan tu");
		  } else {
		    int max = i;
		    int k = 2 * i + 1;
		    int j = 2 * i + 2;
		    if (k < length && arr.get(k) > arr.get(max))
		      max = k;
		    if (j < length && arr.get(j) > arr.get(max))
		      max = j;
		    if (max != i) {
		      Integer tmp = arr.get(i);
		      arr.set(i, arr.get(max));
		      arr.set(max,tmp);
		      heapify(max);
		    }
		  }
		}
	
	public void push(int new_data) {
		  if (length == 0) {
		    arr.add(new_data);
		    length += 1;
		  }else{
		    arr.add(new_data);
		    length += 1;
		    int i = length - 1;
		    while(i>0 && arr.get(i) > arr.get((i-1)/2)) {
		    	int tmp = arr.get((i-1)/2);
		    	arr.set((i-1)/2, arr.get(i));
		    	arr.set(i, tmp);
		    	i = (i-1)/2;
		    }
		  }
		}
	
	public void pop() {
		arr.set(0, arr.get(length-1));
		length -=1;
		heapify(0);
	}
	
	public int top() {
		return arr.get(0);
	}
	
	public boolean isEmpty(){
		if(length == 0) {
			return true;
		}
		return false;
	}
	
	public static void main(String[] args) {
		PriorityQueue myQueue = new PriorityQueue();
		myQueue.push(1);
		myQueue.push(9);
		myQueue.push(7);
		myQueue.push(6);
		myQueue.push(0);
		System.out.println(myQueue.top());
	}
}


