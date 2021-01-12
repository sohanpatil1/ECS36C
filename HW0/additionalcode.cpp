//Temp Additional Code
#include <bits/stdc++.h> 
using namespace std; 

void convertStrtoArr(string str) 
{ 
	int arr[str_length] = { 0 }; 

	int j = 0; 
	for (int i = 0; str[i] != '\0'; i++) { 

		if (str[i] == ' '){ 
			j++; 
		} 
		else { 
			arr[j] = arr[j] * 10 + (str[i] - 48); 
		} 
	} 

	cout << "arr[] = "; 
	for (i = 0; i <= j; i++) { 
		cout << arr[i] << " "; 
	} 
} 

// Driver code 
int main() 
{ 
	string str = "2 6 3 14"; 

	convertStrtoArr(str); 

	return 0; 
} 
