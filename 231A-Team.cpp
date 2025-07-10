#include<iostream>
using namespace std;

int main(){
    int  p, v, t, count=0;
    int n;
    // n is the total number of problems
    cin >> n;

    // input 1 for the surety about the solution
    for(int i=0; i<n; i++){

        cin >> p >> v >> t;
        if(p+v+t >=2 ){ //if at least two of the sure about the solution 
            count++; //count the solution of the problems
        }

    }

    cout << count << endl; //print the number of solutions of the problems

    return 0;
}