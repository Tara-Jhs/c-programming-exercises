#include "tarzan.h"
int getLength(char arr[])
{
    int length = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        i++;
        length++;
    }
    return length;
}
int getEnergyCost(char move)
{
    switch (move)
    {
    case 'R':
        return 1;
    case 'L':
        return 1;
    case 'T':
        return 2;
    case 'K':
        return 2;
    case 'Q':
        return 0;
    default:
        return 0;
    }
}
int getNewPosition(int pos, char move)
{
    if (move == 'R')
    {
        pos++;
    }
    if (move == 'L')
    {
        pos--;
    }
    if (move == 'T')
    {
        pos = pos + 2;
    }
    if (move == 'K')
    {
        pos = pos - 2;
    }
    if (move == 'Q')
    {
        return pos;
    }
    return pos;
}
int getNewLivesValue(int lives, char cell)
{
    switch (cell)
    {
    case 'H':
        lives--;
        return lives;
    case 'T':
        lives--;
        return lives;
    default:
        return lives;
    }
}
