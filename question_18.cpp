#include <iostream>
using namespace std;


int sum_of_even_digits(int n) {
    int r, sum = 0;
   
    while (n > 0) {
        r = n % 10;    
        n = n / 10;    
        if (r % 2 == 0){
            sum = sum + r;
        }
    }
    return sum;
}
int sum_of_odd_digits(int n) {
    int r, sum = 0;
   
    while (n > 0) {
        r = n % 10;    
        n = n / 10;    
        if (r % 2 == 1){
            sum = sum + r;
        }
    }
    return sum;
}

int main() {
     int n;
    cin>>n;
    cout<<(sum_of_even_digits(n))<<" "<<(sum_of_odd_digits(n));
    
    return 0;
}