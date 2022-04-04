#include <iostream>

int main() {
    int n; int a; int b=1; int c=1; int d=3;
    std::cin>>n;
    std::cout<<"1"<<std::endl;
    std::cout<<"1"<<std::endl;
    while (n>=d){
        a=b+c;
        c=b;
        b=a;
      d=d+1;
std::cout<<a<<std::endl;
if (n<(b+c)){
    break;
}

    }






    return 0;

}
