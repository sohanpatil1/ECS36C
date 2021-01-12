//Testing Reading file
//Parsed the completely
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  // Create a text file
 
  string myarray,length;
  ifstream MyReadFile("filename.txt");

  getline (MyReadFile, length);
  cout << length<<std::endl;
  int lengths = std::stoi(length);
  
  getline (MyReadFile, myarray);
  cout << myarray;
  
  
    int arr[myarray.length()] = {0}; 

	int j = 0; 
	for (int i = 0; myarray[i] != '\0'; i++) { 

		if (myarray[i] == ' '){ 
			j++; 
		} 
		else { 
			arr[j] = arr[j] * 10 + (myarray[i] - 48); 
		} 
	} 

	cout << "\narr[] = "; 
	for (int i = 0; i <= j; i++) { 
		cout << arr[i] << " "; 
	} 
  MyReadFile.close();
}
