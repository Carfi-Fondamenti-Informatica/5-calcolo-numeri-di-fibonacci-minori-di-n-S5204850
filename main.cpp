#include <iostream>

int main() {
    int n;
    std::cin>>n;
if(n>=2){
    int a=1; int b=1; int c; int d=3;
    std::cout<<"1"<<std::endl;
    std::cout<<"1"<<std::endl;
    while (n>=d) {
        c = a + b;
        std::cout << c << std::endl;
        b = a;
        a = c;
        d=d+1;

    }

}
else
    std::cout<<"errore"<<std::endl;

    return 0;

}

