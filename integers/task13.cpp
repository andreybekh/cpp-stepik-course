/* Симметричное число

Дано четырехзначное число. Определите, является ли его десятичная запись симметричной. Если число симметричное, то выведите 1, иначе выведите любое другое целое число. Число может иметь меньше четырех знаков, тогда нужно считать, что его десятичная запись дополняется слева незначащими нулями.

Формат входных данных

Вводится единственное число.

Формат выходных данных

Выведите одно целое число - ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
  int number, firstPart, secondPart, secondPartInverted, result;
    cin >> number;
      firstPart = number / 100;
      secondPart = number % 100;
      secondPartInverted = (secondPart % 10 * 10) + (secondPart / 10);
      result = firstPart - secondPartInverted + 1;
      cout << result /*<< "¿" << secondPart*/;
  return 0;
}