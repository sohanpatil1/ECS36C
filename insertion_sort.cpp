#include <iostream>

using namespace std;

struct IntSequence{
    int length;
    int array[100];
};

void insertion_sort(IntSequence A)
{
    std::cout<<A.array[0]<<std::endl;
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
    for(int i=0;i<A.length;i++)
    {
        std::cout<<A.array[i]<<std::endl;
    }
}


int main()//int argc, char const *argv[])
{

    IntSequence A={6,{2,13,11,21,41,23}};
    int length = A.length;
    int arr[length];
    for(int i=0;i<length;i++)
    arr[i]=A.array[i];
    insertion_sort(A);
    return 0;
}
