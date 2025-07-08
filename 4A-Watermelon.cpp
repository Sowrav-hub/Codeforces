#include<iostream>
using namespace std;

int main(){
    int num;

    cin >> num; //input the integer value

    if(num%2==0 && num>2){ // if num is divided by 2 and num is grater than 2
       cout << "Yes\n"; // if the condition true than print yes
    }

    else
     cout << "NO\n"; // if the condition false than print no
}