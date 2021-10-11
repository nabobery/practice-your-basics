// Generate a list of all permutation of a string
#include <iostream>
#include <string>
using namespace std;

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

void permutate(string str, int start, int end){
    if(start == end){
        cout<< str << "\n";
    }
    else {
        for(int i=start; i < end; i++){
            swap(&str[start], &str[i]);
            permutate(str, start + 1, end);
            swap(&str[start], &str[i]);
        }
    }
}

int main(){
    string input;
    cout<<"Enter the string you want to find permutations of: ";
    cin >> input;
    cout<<"All the permutations of the string are: \n";
    permutate(input, 0, input.length());
    return 0;
}
