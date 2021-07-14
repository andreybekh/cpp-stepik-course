/* Электронные часы

Электронные часы показывают время в формате h:mm:ss (от 0:00:00 до 23:59:59), то есть сначала записывается количество часов, потом обязательно двузначное количество минут, затем обязательно двузначное количество секунд. Количество минут и секунд при необходимости дополняются до двузначного числа нулями.

С начала суток прошло N секунд. Выведите, что покажут часы.

Формат входных данных

На вход дается натурально число N, не превосходящее 10^710 
7(10000000).

Формат выходных данных

Выведите ответ на задачу. */

#include <iostream>
using namespace std;
int main() {
  int secondsAmount, seconds0, seconds1, hours, minutes0, minutes1;
  cin >> secondsAmount;
  hours = (secondsAmount / 3600) % 24;
  minutes0 = ((secondsAmount / 60) % 60) / 10;
  minutes1 = ((secondsAmount / 60) % 60) % 10;
  seconds0 = (secondsAmount % 60) / 10;
  seconds1 = (secondsAmount % 60) % 10;            
  cout << hours << ":" << minutes0 << minutes1 << ":" << seconds0 << seconds1; 
  return 0;
}