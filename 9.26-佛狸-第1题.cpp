#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int school, extra, total;
    int result = 0;
    int _result = 0;
    for (int i = 0; i < 7; i++) {
        scanf_s("%d %d", &school, &extra);
        total = school + extra;
        if (total > 8) {
            _result = total;
            result = i;
            if (total > _result)result = i;


        }
        
    }
    printf("%d", result);


    return 0;
}