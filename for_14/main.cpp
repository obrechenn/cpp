#include <iostream>

int main()
{
    int n;
    std::cout<<"введите значение числа n: ";
    std::cin>>n;
    int summ = 0;
    for(int i = 1; i < n + 1; ++i){
        summ += i + (i - 1);
        std::cout<< summ<<" ";
    }
std::cout<<"квадрат числа "<<n<<" равен: " << summ<<'\n';
    return 0;
}