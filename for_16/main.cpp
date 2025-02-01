#include <iostream>
int main(){
    int rez = 1;
    int n;
    std::cout<<"введите n: ";
    std::cin>>n;
    double a;
    std::cout<<"введите значение а: ";
    std::cin>>a;
    for(int i = 0; i < n;i++ ){
        rez *= a;
        std::cout<<rez<<'\n';
    }
    
    return 0;
}
