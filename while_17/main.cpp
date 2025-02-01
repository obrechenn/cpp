#include <iostream>
int main(){
    int n;
    std::cout<<"введите первое число a: ";
    std::cin>> n;
    int i = 1;
    double summ = 0;
    while (i < n+1) {
        summ = n / i;
        std::cout <<summ<<'\n';
        i++;
        summ = n % i;
        i++;
    }
    
    return 0;
}
