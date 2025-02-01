#include <iostream>
int main(){
    int rez = 1;
    int n;
    std::cout<<"введите n: ";
    std::cin>>n;
    double a;
    std::cout<<"введите значение а: ";
    std::cin>>a;
    int summ = 1;
    for(int i = 0; i < n;i++ ){
        rez *= a;
        summ += rez;
        std::cout<<summ<<'\n';
    }
    
    return 0;
}
