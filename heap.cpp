#include<iostream>
using namespace std;

class BinaryHeap{
	public:
	int *arr;
	int msize;
	int csize;
	
	BinaryHeap(int msize)
	{
		arr=new int[msize];
		this->msize=msize;
		csize=0;
	}
	void swap(int *a,int *b)
	{
		int temp= *a;
		*a = *b;
		*b = temp;
	}
	
	int parent(int i){ return(i-1)/2};
	int left(int i){ return (i*2)+1};
	int right(int i){return (i*2)+2};
	
	int getMin(){return arr[0]; }
	
	void insert(int value)
	{
		if(csize==mzize)
		{
			cout<<"the array is full"<<endl;
		}
		else
		{
			arr[csize]=value;
			int j=csize
			
			while(i!=0 and &arr[parent(i)]> &arr[i])
			{
				swap(&arr[parent(i),&arr[i]]);
//				i=parent(i);
			}
			csize++;
		}
	}
	
	void display()
	{
		cout<<"THe array is "<<endl;
		for(i=0;i<=csize;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	int ExtractMin(int index)
	{
		if(csize=0)
		{
			cout<<"There are no elements"<<endl;
		}
		else if(csize=10)
		{
			csize=0;
		}
		else
		{
			swap(&arr[index],&arr[csize-1]);
			csize--;
			
			MinHeapify(index);
//			return arr[index];
		}
	}
	
	
	void MinHeapify(int i)
	{
		if(arr[left(i)],arr[right(i)]<i)
		{
			if(arr[left(i)]<arr[i])
			{
				swap(&arr[left(i)],&arr[i]);
			}
			if(arr[right(i)]<arr[i])
			{
				swap(&arr[right(i)],&arr[i]);
			}
		}
	}
};


int main(){
	BinaryHeap bh1(20);
	for(int 1=10;i>0;i--){
		cout<<"we now insert"<<endl;
		
	}
}
