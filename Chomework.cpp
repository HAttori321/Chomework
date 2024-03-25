#include <iostream>
using namespace std;

//Task1
/*double num(double osnova, int pokaznik)
{
    if (pokaznik == 0)
    {
        return 1;
    }
    double result=1;
    for (int i = 0; i < pokaznik; i++)
    {
        result *= osnova;
    }
    return result;
}*/

//task2
//int Sum(int start, int end)
//{
//    int sum = 0;
//    for (int i = start; i <=end; i++)
//    {
//        sum += i;
//    }
//    return sum;
//}

//task3
//bool isDoskonale(int number)
//{
//    int Sum = 1;
//    for (int i = 2; i*i<=number; i++)
//    {
//        if (number % i == 0)
//        {
//            Sum += i + number / i;
//        }
//    }
//    return Sum == number;
//}
//void printDoskonale(int start, int end)
//{
//    cout << "Doskonali chisla z " << start << " do " << end << " : ";
//    for (int i = start; i <=end; i++)
//    {
//        if (isDoskonale(i))
//        {
//            cout << i << " ";
//        }
//    }
//    cout << endl;
//}
int main()
{
    //task1
    /*double osnova, result;
    int pokaznik;
    cout << "Enter the osnova : ";
    cin >> osnova;

    cout << "Enter the pokaznik : ";
    cin >> pokaznik;

    result = num(osnova, pokaznik);
    cout << osnova << " of " << pokaznik << " is: " << result << endl;*/

    //Task2
    /*int start,end;
    cout << "Enter start : ";
    cin >> start;
    cout << "Enter end : ";
    cin >> end;
    int result = Sum(start, end);
    cout << "Sum this numbers : " << result << endl;*/

    //Task3
    /*int start, end;
    cout << "Enter start : ";
    cin >> start;
    cout << "Enter end : ";
    cin >> end;

    printDoskonale(start, end);*/

}
