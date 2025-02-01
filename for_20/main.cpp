#include <iostream>
int main(){
    int n; 
    std::cout<<"введите число n: ";
    std::cin>> n;
    double summ = 1;
    double f = 0;
    for(int i = 1; i < n + 1; i++){
        summ *= i;
        f += summ;
    }
    std::cout<<f<<'\n';
   return 0;
}