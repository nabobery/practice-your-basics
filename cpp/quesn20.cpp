//Name : Himanshu Malviya
//Roll No.: CS20B1097

/* Question 20
You are given a list of n-1 integers and these integers are in the range of 1 to n. 
There are no duplicates in the list. One of the integers is missing in the list. 
Write an efficient code to find the missing integer.
*/

#include<iostream>
using namespace std;

int missingInt(int array[], int n) {
    int sumOfElements = (n+1) * (n+2) / 2;
    for(int i=0; i<n; ++i) {
        sumOfElements -= array[i];
    }
    return sumOfElements;
}

int main() {
    // example array
    int array[] = {4, 5, 1, 3};
    int size = sizeof(array)/sizeof(array[0]);
    cout<<missingInt(array, size)<<endl;
    return 0;
}
