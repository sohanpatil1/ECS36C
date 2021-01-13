//Original Code with changed struct
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct IntSequence{
    int length;
    int *array;
};

void insertion_sort(IntSequence A)
{
    int i=0,key=0;
    for(int j=1;j<A.length;j++)
    {
        i=j-1;
        key = A.array[j];
        while(A.array[i]>key && i>=0)
        {
            A.array[i+1]=A.array[i];
            i=i-1;
        }
        A.array[i+1] = key;
    }
    std::cout<<"\nSorted Array";
    for(int i=0;i<A.length;i++)
    {
        std::cout<<A.array[i]<<" ";
    }
}


int main()
{
    string myarray,lengths;
    IntSequence A;
    
    ifstream MyReadFile("filename.txt");
    getline (MyReadFile, lengths);
    A.length = std::stoi(lengths);
    getline (MyReadFile, myarray);
    cout << myarray;
  
    A.array = new int[A.length];

	int j = 0; 
	for (int i = 0; myarray[i] != '\0'; i++) { 

		if (myarray[i] == ' '){ 
			j++; 
		} 
		else { 
			A.array[j] = A.array[j] * 10 + (myarray[i] - 48); 
		} 
	} 
	cout << "\narr[] = "; 
	for (int i = 0; i <= j; i++) { 
		cout << A.array[i] << " "; 
	} 
    MyReadFile.close();
  
    
    insertion_sort(A);
    
    
    ofstream MyFile("Output.txt");
    for(int i=0;i<A.length;i++)
    {
        MyFile << A.array[i] << " ";
    }
    MyFile.close();
    return 0;
}
