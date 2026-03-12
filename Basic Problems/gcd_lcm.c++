// Method 1
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin>>a>>b;
    cout<<"GCD of a & b : "<<gcd(a,b)<<endl;
    cout<<"LCM of a & b : "<<lcm(a,b)<<endl;
}

// Method 2
#include<bits/stdc++.h>
using namespace std;
-
int gcd(int a,int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"GCD of a & b : "<<gcd(a,b);
    cout<<"LCM of a & b : "<<a*b / gcd(a,b);
}

