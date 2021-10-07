/* Write a program to check if a number entered is an Armstrong Number. */
#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int num){
    int count = 0;
    while(num != 0){
        num = num / 10;
        count++;
    }
    return(count);
}

bool checkArmstrong(int num){
    int sum = 0, digit;
    int temp = num;
    int power = countDigits(num);
    while(num > 0){
        digit = num % 10;
        sum = sum + pow(digit, power);
        num = num/10;
    }
    return(temp == sum);
}

int main(){
    int num;
    cout <<"Please enter the number: ";
    cin >> num;
    if(checkArmstrong(num)){
        cout << "The given number "<< num <<" is an Armstrong Number";
    }
    else{
        cout << "The given number "<< num <<" is not an Armstrong Number";
    }
    return 0;
}