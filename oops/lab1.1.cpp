#include<bits/stdc++.h>
using namespace std;
    int d,x,y;
    void extendedEuclid(int a,int b){
    if(b==0){
        d=a;
        x=1;
        y=0;
    }
    else{
        extendedEuclid(b,a%b);
        int temp=x;
        x=y;
        y=temp-(a/b)*y;
    }
    }
    int main()
    {
        extendedEuclid(16,10);
        cout<<"gcd of 16 and 10 is"<<d<<"\n";
        cout<<"coefficient x and y are"<<x<<"\n";
        return 0;
    }
/*#include < iostream >
int d, x, y;
void extendedEuclid(int A, int B) {
    if(B == 0) {
        d = A;
        x = 1;
        y = 0;
    }
    else {
        extendedEuclid(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;
    }
}

int main( ) {
extendedEuclid(16, 10);
cout << ”The GCD of 16 and 10 is ” << d << endl;
cout << ”Coefficients x and y are ”<< x <<  “and  “ << y << endl;
return 0;
}
*/
