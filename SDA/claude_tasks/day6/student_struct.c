#include <stdio.h>

struct student {
    char name[20];
    int age;
};

int main(int argc, char const *argv[])
{
    struct student students[3] = {
        {.name = "Mykola", .age = 17},
        {.name = "Artem", .age = 18},
        {.name = "Mykyta", .age = 14},
    };

    for (int i = 0; i < 3; i++) {
        struct student s = students[i];
        printf("%s, %d y. o.\n", s.name, s.age);
    };

    return 0;
}
