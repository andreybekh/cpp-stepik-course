/* Покупка пирожков

Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.

Формат входных данных

Программа получает на вход три числа: A, B, N - целые, положительные, не превышают 10000.

Формат выходных данных

Программа должна вывести два числа через пробел: стоимость покупки в рублях и копейках. */

#include <iostream>
using namespace std;
int main() {
  int rubles, kopecks, amountToBuy;
  cin >> rubles >> kopecks >> amountToBuy;
  kopecks = kopecks * amountToBuy;
  rubles = (rubles * amountToBuy) + (kopecks / 100);
  kopecks = kopecks % 100;
  cout << rubles << " " << kopecks;
  return 0;
}