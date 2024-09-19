
// Que.17	WAP to show difference between Structure and Union.

#include <stdio.h>

struct MyStruct {
    int intVal;
    float floatVal;
    char charVal;
};


union MyUnion {
    int intVal;
    float floatVal;
    char charVal;
};

int main() {

    struct MyStruct s;
    s.intVal = 10;
    s.floatVal = 20.5;
    s.charVal = 'A';

    union MyUnion u;
    u.intVal = 10;
    u.floatVal = 20.5;
    u.charVal = 'A';


    printf("Structure values:\n");
    printf("intValue: %d\n", s.intVal);
    printf("floatValue: %.2f\n", s.floatVal);
    printf("charValue: %c\n", s.charVal);


    printf("\nUnion values :\n");
    printf("intValue: %d\n", u.intVal);
    printf("floatValue: %.2f\n", u.floatVal);
    printf("charValue: %c\n", u.charVal);


    printf("\nSize of Structure: %zu bytes\n", sizeof(s));
    printf("Size of Union: %zu bytes\n", sizeof(u));

    return 0;
}
























