// Program to reverse the case of input string.
#include <iostream>
using namespace std;

string reverse_case(string input) {
    int size = input.size();
    for(int i = 0; i < size;i++){
        // If it's lower case, change it to upper case 
        if(input[i] >= 'a' && input[i] <= 'z'){
            input[i] = input[i] - 32;
        }
        // If it's upper case, change it to lower case
        else if (input[i] >= 'A' && input[i] <= 'Z'){
            input[i] = input[i] + 32;
        }
    }
    return input;
}

int main(){
    string str;
    cout<<"Please enter a string: ";
    getline(cin >> ws, str);
    cout<<"The reverse case of " << str << " is " << reverse_case(str) << endl;
    return 0;
}