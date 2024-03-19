#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

// Структура для хранения данных
struct Record{
    int id;
    char nameRadio[50];
    char broadcast[50];
    char time[10];
    char duration[10];
    double rating;
};

int main() {
    system("chcp 65001");

    char filename[50];
    FILE *file;
    struct Record record;

    printf("Введите имя файла: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Ошибка открытия файла.\n");
        return 1;
    }

    //printf("%-5s %29s %30s %22s %-10s %s\n", "ID", "Радиостанция", "Трансляция", "Время", "Продолжительность", "Рейтинг");

    fmt::print("{:<5} {:^20} {:^20} {:^10} {:^10} {}\n", "ID", "Название радио", "Трансляция", "Время", "Длительность", "Рейтинг");
    while (fscanf(file, "%d %s %s %s %s %lf",
                  &record.id, record.nameRadio, record.broadcast, record.time, record.duration, &record.rating) == 6) {
        fmt::print("{:<5} {:^20} {:^20} {:^10} {:^10} {:.2f}\n",
                   id, nameRadio, broadcast, time, duration, rating);
        //printf("%-5d %-20s %30s %-10s %-10s %.2f\n",record.id, record.nameRadio, record.broadcast, record.time, record.duration, record.rating);
    }



    fclose(file);
    return 0;
}
