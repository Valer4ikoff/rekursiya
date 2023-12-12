///task 1





///1
/*
#include <iostream> 

#include <string> 



void reverseString(const std::string& input) {

    // Проходження через рядок у зворотньому порядку і друк кожного символу 

    for (int i = input.length() - 1; i >= 0; --i) {

        std::cout << input[i];

    }

    std::cout << std::endl; // Додавання нового рядка після виведення зворотного рядка 

}



int main() {

    std::string inputString;



    // Введення рядка від користувача 

    std::cout << "Введіть рядок: ";

    std::cin >> inputString;



    // Виклик функції для зворотного виведення рядка 

    reverseString(inputString);



    return 0;

}
*/










///2
/*

#include <iostream>





struct ListNode {

    int val;

    ListNode* next;

    ListNode(int x) : val(x), next(nullptr) {}

};





void printList(ListNode* head) {

    while (head != nullptr) {

        std::cout << head->val << " ";

        head = head->next;

    }

    std::cout << std::endl;

}





ListNode* swapPairs(ListNode* head) {



    if (head == nullptr || head->next == nullptr) {

        return head;

    }





    ListNode* dummy = new ListNode(0);

    dummy->next = head;

    ListNode* current = dummy;



    while (current->next != nullptr && current->next->next != nullptr) {

        ListNode* first = current->next;

        ListNode* second = current->next->next;





        first->next = second->next;

        second->next = first;

        current->next = second;





        current = current->next->next;

    }





    head = dummy->next;





    delete dummy;



    return head;

}



int main() {



    ListNode* head1 = new ListNode(1);

    head1->next = new ListNode(2);

    head1->next->next = new ListNode(3);

    head1->next->next->next = new ListNode(4);



    std::cout << "Input: ";

    printList(head1);



    ListNode* result1 = swapPairs(head1);



    std::cout << "Output: ";

    printList(result1);



    delete result1->next->next->next;

    delete result1->next->next;

    delete result1->next;

    delete result1;



    return 0;

}
*/





///3

/*
#include <iostream>



// Функція для обчислення чисел Фібоначчі

int fibonacci(int n) {

    if (n == 0) {

        return 0;

    } else if (n == 1) {

        return 1;

    } else {

        int a = 0;

        int b = 1;

        int result = 0;



        for (int i = 2; i <= n; ++i) {

            result = a + b;

            a = b;

            b = result;

        }



        return result;

    }

}



int main() {

    // Приклад 1

    int n1 = 2;

    std::cout << "Input: n = " << n1 << "\nOutput: " << fibonacci(n1) << "\n\n";



    // Приклад 2

    int n2 = 3;

    std::cout << "Input: n = " << n2 << "\nOutput: " << fibonacci(n2) << "\n\n";



    // Приклад 3

    int n3 = 4;

    std::cout << "Input: n = " << n3 << "\nOutput: " << fibonacci(n3) << "\n\n";



    return 0;

}
*/




///4
/*

#include <iostream>

#include <vector>



// Функція для обчислення кількості унікальних комбінацій підняття на сходах

int climbStairs(int n) {

    if (n <= 1) {

        return 1;

    }



    std::vector<int> dp(n + 1, 0);

    dp[0] = dp[1] = 1;



    for (int i = 2; i <= n; ++i) {

        dp[i] = dp[i - 1] + dp[i - 2];

    }



    return dp[n];

}



int main() {

    // Приклад 1

    int n1 = 2;

    std::cout << "Input: n = " << n1 << "\nOutput: " << climbStairs(n1) << "\n\n";



    // Приклад 2

    int n2 = 3;

    std::cout << "Input: n = " << n2 << "\nOutput: " << climbStairs(n2) << "\n\n";



    // Обмеження

    int n3 = 45;

    std::cout << "Input: n = " << n3 << "\nOutput: " << climbStairs(n3) << "\n\n";



    return 0;

}
*/





///5
/*
#include <iostream>



// Функція піднесення до ступеня

double myPow(double x, int n) {

    if (n == 0) {

        return 1.0;

    }



    double result = 1.0;



    // Якщо n від'ємне, використовуємо обернене значення для x та змінюємо n на протилежне

    if (n < 0) {

        x = 1.0 / x;

        n = -n;

    }



    while (n > 0) {

        // Якщо n парне, зменшуємо n і збільшуємо x в квадраті

        if (n % 2 == 0) {

            x *= x;

            n /= 2;

        } else {

            // Якщо n непарне, множимо результат на x і зменшуємо n на 1

            result *= x;

            --n;

        }

    }



    return result;

}



int main() {

    // Приклад 1

    double x1 = 2.00000;

    int n1 = 10;

    std::cout << "Input: x = " << x1 << ", n = " << n1 << "\nOutput: " << myPow(x1, n1) << "\n\n";



    // Приклад 2

    double x2 = 2.10000;

    int n2 = 3;

    std::cout << "Input: x = " << x2 << ", n = " << n2 << "\nOutput: " << myPow(x2, n2) << "\n\n";



    // Приклад 3

    double x3 = 2.00000;

    int n3 = -2;

    std::cout << "Input: x = " << x3 << ", n = " << n3 << "\nOutput: " << myPow(x3, n3) << "\n\n";



    return 0;

}
*/




