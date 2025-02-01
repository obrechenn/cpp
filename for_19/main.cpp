#include <iostream>
int main(){
    int n; 
    std::cout<<"введите число n: ";
    std::cin>> n;
    double summ = 1;
    for(int i = 1; i < n + 1; i++){
        summ *= i;
    }
    std::cout<<summ<<'\n';
   return 0;
}