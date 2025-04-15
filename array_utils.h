#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

const int N = 20, S = 7; // N — максимальний розмір масиву, S — кількість цифр у масиві для сортування

bool get_mas(char* filename, int in_mas[N], int& in_n); // функція для зчитування масиву з файлу
void show_mas(const int in_mas[N], const int n); // функція для виведення елементів масиву
void write_mas(const int in_mas[N], const int n); // функція для запису масиву у файл на виході
void shift_array_right(int mas[N], int& n); // функція для зсуву всіх елементів масиву на одну позицію вправо

void sort(int arr[], int n); // функція для сортування масиву за зростанням
bool get_sort(const char* filename, int arr[], int& n); // функція для  масив із файлу
void write_sort(const char* filename, const int arr[], int n); // Записує відсортований масив
void show_sort(const int arr[], int n); // Виводить відсортований масив на екран

#endif // ARRAY_UTILS_H
