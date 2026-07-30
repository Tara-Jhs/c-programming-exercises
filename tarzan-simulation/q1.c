#include "tarzan.h"
#include <stdio.h>
int main(void)
{
    char arr[100];
    int length;
    int pos = 0;
    int lives;
    int energy;
    char move;
    char cell;
    scanf("%s", arr);
    length = getLength(arr);
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == 'S')
        {
            pos = i;
        }
    }
    scanf("%d", &lives);
    scanf("%d", &energy);
    while (1)
    {
        scanf(" %c", &move);
        if (move != 'R' && move != 'L' && move != 'T' && move != 'K' && move != 'Q')
        {
            break;
        }
        if (move == 'Q')
        {
            break;
        }
        pos = getNewPosition(pos, move);
        energy -= getEnergyCost(move);
        if (energy == 1 && move == 'K')
        {
            move = 'L';
        }
        if (energy == 1 && move == 'T')
        {
            move = 'R';
        }
        if (arr[pos] == 'F')
        {
            printf("TARZAN REACHED HIS FRIEND!");
            break;
        }
        if (lives <= 0)
        {
            printf("TARZAN HAS NO LIFE LEFT!\n");
            break;
        }
        if (pos < 0 || pos >= length)
        {
            printf("TARZAN GOT LOST IN THE JUNGLE!\n");
            break;
        }
        cell = arr[pos];
        lives = getNewLivesValue(lives, cell);
        if (cell == 'H')
        {
            printf("TARZAN STEPPED INTO A HOLE, LOSE 1 LIFE\n");
        }
        else if (cell == 'T')
        {
            printf("TARZAN STEPPED ON A TRAP, LOSE 1 LIFE\n");
        }
        printf("Moved to position %d,Energy left : %d,Lives left : %d\n", pos, energy, lives);
        if (energy <= 0)
        {
            printf("TARZAN RAN OUT OF ENERGY!\n");
            break;
        }
    }
    return 0;
}
