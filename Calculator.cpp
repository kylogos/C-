#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

unsigned int factorial(int a) {
    int r = 1;
    for (int i = a; i > 0; i--) r *= i;
    return r;
}

int main() {
    double a, b, r, memory = 0;
    char op, choice[10];
start: 

    cin >> a; 
reused: 
    cin >> op; 
    
    if (op == '!') r = factorial(a);
    else {
        cin >> b;
        if (op == '+') r = a + b;
        if (op == '-') r = a - b;
        if (op == '*') r = a * b;
        if (op == '/') r = a / b;
        if (op == '^') r = pow(a, b);
    }
    
    cout << "=" << r << endl;

    cout << "Select \"restart\",\"reuse\",\"quit\",\"mr\" \n";


    cin >> choice; 
    if (!strcmp(choice, "restart")) goto start; 
    if (!strcmp(choice, "reuse")) { a = r; cout << a; } 
    if (!strcmp(choice, "reuse")) goto reused; 
    if (!strcmp(choice, "quit")) goto end;
    if (!strcmp(choice, "mr")) { a = memory; cout << a; } 
    if (!strcmp(choice, "mr")) goto reused; 
    getchar();
end: 
    return 0;
}
