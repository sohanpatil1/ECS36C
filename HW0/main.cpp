#include "insertion_sort.cpp"

int main(int argc, char const *argv[])
{

    /**
     * YOUR CODE HERE
     * 1. Check for the number of arguments.
     * Only proceed if the number of argument is correct,
     * We will only check for ./main [INPUT_FILE] [OUTPUT_FILE]
     * 
     */
     if(argc!=2)
     {
         std::cout<<"Missing Argument, Required 2"<<std::endl;
         return(-1);
     }

    /**
     * YOUR CODE HERE
     * 2. Read the file [INPUT_FILE]
     * 
     */
    string myarray,lengths;
    IntSequence A;
    
    ifstream MyReadFile(argv[1]);
    getline (MyReadFile, lengths);
    A.length = std::stoi(lengths);
    getline (MyReadFile, myarray);
    cout << myarray;
  

    /**
     * YOUR CODE HERE
     * 3. Build IntSequence
     */
    
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

    /**
     * YOUR CODE HERE
     * 4. Run Insertion Sort
     */
    insertion_sort(A);


    /**
     * YOUR CODE HERE
     * 5. Write the file into [OUTPUT_FILE]
     */
      
    ofstream MyFile(argv[2]);
    for(int i=0;i<A.length;i++)
    {
        MyFile << A.array[i] << " ";
    }
    MyFile.close();

    return 0;
}
