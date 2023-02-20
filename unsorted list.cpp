#include<iostream>
using namespace std;
class UnsortedList
{
	int *arr=0;
	int maxSize;
	int currSize;
public:
	UnsortedList(int s=5)
	{
		maxSize=s;
		arr= new int[maxSize];
		currSize=0;
		
	}
	~UnsortedList()
	{
		if(arr!=0)
		{
			delete[] arr;
			cout<<"Destructor executed";
		}
	}
	
	bool isFull()
	{
		if(currSize==maxSize)
			return 1;
		else
			return 0;
	}
	
	void insert(int val)
	{
		if(isFull()!=1)
		{
			arr[currSize]=val;
			currSize++;
			cout<<"Value inserted...!\n";
		}
		else
			cout<<"List is full...!\n";
	}
	
	void display()
	{
		cout<<"Values in the list are: ";
		for(int i=0; i<currSize; i++)
		{
			cout<<arr[i]<<" ";
		}
	}
};
int main()
{
	int a,value;
	cout<<"Enter Size: ";
	cin>>a;
	UnsortedList list(a);
	cout<<"Enter Value to insert: ";
	cin>>value;
	list.insert(value);
	
	cout<<"Enter Value to insert: ";
	cin>>value;
	list.insert(value);
	
	cout<<"Enter Value to insert: ";
	cin>>value;
	list.insert(value);
	
	cout<<"Enter Value to insert: ";
	cin>>value;
	list.insert(value);
	
	cout<<"Enter Value to insert: ";
	cin>>value;
	list.insert(value);
	
	list.display();
	cout<<endl;
	
}
