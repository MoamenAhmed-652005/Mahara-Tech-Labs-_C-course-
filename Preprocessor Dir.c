// =================== Lab 1 ===

#include <stdio.h>

#define SET_REG(REG_ID, BIT_POSITION) ((REG_ID) |= (1 << BIT_POSITION))
#define CLEAR_REG(REG_ID, BIT_POSITION) ((REG_ID) &= ~(1 << BIT_POSITION))
#define TOOGLE_REG(REG_ID, BIT_POSITION) ((REG_ID) ^= (1 << BIT_POSITION))
#define READ_BIT(REG_ID, BIT_POSITION) ((REG_ID >> BIT_POSITION) & 1)

int main()
{

    int X = 40;
    SET_REG(X, 4);
    printf("%d", X);
}
