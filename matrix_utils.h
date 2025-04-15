#ifndef MATRIX_UTILS_H
#define MATRIX_UTILS_H

const int M = 20; // максимальний розмір матриці

bool get_matr(char* filename, int in_matr[M][M], int& in_m, int& in_n); // функція для зчитування матриці з файлу
void write_result_task_2(char* filename, int res); // функція для запису матриці у файл на виході
void show_matr(const int matr[M][M], const int m, const int n); // функція для виведення елементів матриці
int processed_task_2(const int matr[M][M], const int m, const int n); // функція для обробки завдання

#endif // MATRIX_UTILS_H
