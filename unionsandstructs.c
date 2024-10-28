#include <stdio.h>
//**
 * @brief 
 * 
 */
union TypeConverter {
    int intValue; //numbers
    float floatValue; //decimals
};

/**
 * @brief 
 * 
 * @return int 
 */
int main() {
    union TypeConverter converter;
    //converter.floatValue = 3.14;
    converter.intValue = 3;

    printf("Union memory address: %p\n" ,&converter);
    printf("Union.float = %.2f, memory address: %p\n", converter.floatValue, &converter.floatValue);
    printf("Union.int = %d memory address: %p\n\n", converter.intValue,&converter.intValue);
    return 0;
}
