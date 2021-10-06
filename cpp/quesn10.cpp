/* Write a program that accepts a sentence and calculate the number of letters and digits. */
#include <iostream>
#include <string>
using namespace std;

int letterNumber(string input){
    int result = 0;
    for(int i = 0; i < input.size(); i++){
        if((input[i]>=65 && input[i]<=90)|| (input[i]>=97 && input[i]<=122) )
            result++;
    }
    return result;
}

int digitNumber(string input){
    int result = 0;
    for(int i = 0; i < input.size(); i++){
        if(input[i]>=48 && input[i]<=57)
            result++;
    }
    return result;
}


int main(){
    string sentence;
    cout<<"Please enter a sentence: ";
    getline(cin >> ws, sentence);
    cout <<"The given sentence is " << sentence << endl;
    cout <<"Number of Letters: " << letterNumber(sentence) << endl;
    cout <<"Number of Digits: " << digitNumber(sentence) << endl;
    return 0;
}