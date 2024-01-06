

#include <iostream>

void rrr1(int a){
    std::cout << "В веди свою оценку: "; std::cin >> a;
    switch (a) {
    case 5: std::cout << "2 тебе\n";  break;
    case 4: std::cout << "3 тебе\n";  break;
    case 3: std::cout << "4 тебе\n";  break;
    case 2: std::cout << "5 тебе\n";  break;
    case 1: std::cout << "5+ тебе\n"; break;
    };
}
void rrr2(int a) {
    std::cout << "В веди свою оценку: "; std::cin >> a;
    switch (a) {
    case 12: std::cout << "1 теье\n";  break;
    case 11: std::cout << "2 теье\n";  break;
    case 10: std::cout << "3 теье\n";  break;
    case 9:  std::cout << "4 теье\n";  break;
    case 8:  std::cout << "5 теье\n";  break;
    case 7:  std::cout << "6 теье\n";  break;
    case 6:  std::cout << "7 теье\n";  break;
    case 5:  std::cout << "8 тебе\n";  break;
    case 4:  std::cout << "9 тебе\n";  break;
    case 3:  std::cout << "10 тебе\n"; break;
    case 2:  std::cout << "11 тебе\n"; break;
    case 1:  std::cout << "12 тебе\n"; break;
    };
}


int main(){

    setlocale(LC_ALL, "ru");
    int num;
    int a = 1;
    std::cout << "Твоя сичтема образования:\n1) 5 бальная\n2) 12 бальная\n";
    std::cin >> num;
    switch (num) {
    case 1: rrr1(a); break;
    case 2: rrr2(a); break;
    case 0: return 3;  break;
    }

}

