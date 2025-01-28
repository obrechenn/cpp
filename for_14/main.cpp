#include <iostream>

int main()
{
    int n;
    std::cout<<"введите значение числа n: ";
    std::cin>>n;
    double summ = 0;
    for(double i = 1; i < n;i++){
        summ = 2 * ( n - 1);
    }
std::cout<<summ<<'\n';
    return 0;
}