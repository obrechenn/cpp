#include <iostream>
int main(){
    int k = 0;
    int p;
    std::cout<<" введите значение p в % : ";
    std::cin>>p;
    double summ = 10;
    while(summ < 200){
        summ += summ/100 * p;
        k++;
    }
    std::cout<<"сумма вклада через "<<k<< " месяцев, будет равна " <<summ << '\n';
    return 0;
}