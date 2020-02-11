#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){	
//Write your code here.
	for(int i=1; i<N; i++){
		int lo=i;
		for(int a=0; a<N; a++){
			if (a==i) cout <<"["<<d[a]<<"}" << " ";
			else cout << d[a] << " ";
		}
		cout << "=>" << " ";

		for(int j=i; j>0; j--){
			if (d[j] > d[j-1]){
				swap(d,j,j-1);
				lo=j-1;
			}
		}
		for(int b=0; b<N; b++){
			if (b==lo) cout <<"["<<d[lo]<<"}" << " ";
			else cout << d[b] << " ";
		}
		cout << "\n";
	}
}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}