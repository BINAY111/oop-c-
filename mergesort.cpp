#include<iostream>
using namespace std;

void merge(int a[],int start, int mid, int end){
	int size1=(mid-start)+1;
	int size2=end-mid;

	int leftarray[size1];
	int rightarray[size2];

	int i=0;
	for(;i<size1;i++){
		leftarray[i]=a[start+i];
	}

	int j=0;
	for(;j<size2;j++){
		rightarray[j]=a[mid+1+j];
	}
	i=0 , j=0;
	int k=start;
	while(i<size1 && j<size2){
		if(leftarray[i]<rightarray[j]){
			a[k]=leftarray[i];
			k++;
			i++;
		}
		else{
			a[k]=rightarray[j];
			k++;
			j++;
		}
	}

	while (i<size1){
		a[k]=leftarray[i];
		i++;
		k++;
	}
	while(j<size2){
			a[k]=rightarray[j];
			k++;
			j++;
	}
}

void mergesort(int a[], int start,int end){
	if (start >= end) return ;
	int mid = start + ( end - start )/2;
	mergesort(a,start,mid);
	mergesort(a,mid+1,end);
	merge(a,start,mid,end);

}

void printsort(int a[], int size){
	cout<<"sorted array"<<endl;
	for (int i=0;i<size;i++){
		cout<<a[i]<<"->";
	}
	cout<<endl;


}

int main(){
int n;
cout<<"Enter the size of an array: ";
cin>>n;
 int a[n];
for (int i=0;i<n;i++){
cout<<"Enter the numbers: ";
cin>>a[i];

}
cout<<endl;

mergesort(a,0,n-1);
printsort(a,n);

return 0;
}