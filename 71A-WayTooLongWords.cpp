#include<string.h>
#include<iostream>
#include<cstdio>
using namespace std;
 
int main(){
    int n, s, count=0;
    cin >> n; // input for number of lines
    char str[100];
 
    for(int a=0; a<n; a++){ // loop will execute n times
        cin >> str;  // n times input will be execute
        s = strlen(str); // function that returns string length and store in s
 
        if(s<=10){ //length less or equal to 10 than, print the string
            cout << str << endl;
        }
        if(s>10){ //length greater than 10 
          for(int a=1; a<s-1;a++){ //count the total word between first and last letter
            count++;
          }
          cout <<  str[0] << count << str[s-1] << endl; //print first and last letter and total word between them(count)
        }
        count=0; //again initialize count to 0 for count new length of string
    }
 
    return 0;
}
