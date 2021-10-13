// Generate a list of all permutation of a string
#include <iostream>
#include <string>
using namespace std;

// Function to swap 2 characters 
void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

// A function to find whether they're duplicates in the string or not from the given start to the end(current char of string)
bool isDuplicate(string str, int start, int end){
    for(int i=start; i < end; i++){
        if(str[i] == str[end]){
            return true;
        }
    }
    return false;
}


// Function to list out all permutations of a string
void permutate(string str, int start, int end){
    // Base Case
    if(start == end){
        cout<< str << "\n";
    }

    else {
        for(int i=start; i < end; i++){
            // To check whether they're duplicates before index i
            bool check = isDuplicate(str, start, i);
            // if they're no duplicates then swap and proceed with the recursion
            if(!check){
                // Swap the starting character with all characters of the string
                swap(&str[start], &str[i]);
                // then swapping the other chars and doing the permutations
                permutate(str, start + 1, end);
                // swapping back the starting character and the character in the string that wa swapped
                swap(&str[start], &str[i]);
            }   
        }
    }
}

int main() {
    string input;
    cout<<"Enter the string you want to find permutations of: ";
    cin >> input;
    cout<<"All the permutations of the string are: \n";
    permutate(input, 0, input.length());
    return 0;
}