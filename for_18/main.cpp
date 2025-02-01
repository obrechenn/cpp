#include <iostream>
int pow(int a, int n){
    int rez = 1;
    for(int i = 0; i < n; i++){
        rez *= a;
    }
    return rez;
}
int main(){
    int rez = 1;
    int n;
    std::cout<<"введите n: ";
    std::cin>>n;
    double a;
    std::cout<<"введите значение а: ";
    std::cin>>a;
    double summ = 1;
    for(int i = 1; i < n;i++ ){
        summ += pow(-a,i);
        std::cout<<summ<<'\n';
    }
    
    return 0;
}
