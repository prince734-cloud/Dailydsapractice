/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int gcd (int a,int b){
    while(a>0 && b>0){
        if (a>b){
            a=a%b;
        }
        else{
            b=b%a;
        }
    }
    if(a==0) return b;
    return a;
}
int lcm (int a,int b){
    int gcdb = gcd(a,b);
    return (a*b)/gcdb;
    
}

int main(){
    cout<<gcd(20,28)<<endl;
    cout<<lcm(20,28)<<endl;
}

    