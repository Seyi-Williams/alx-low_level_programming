#include "main.h"
/**
 * main - Start
 *
 * Return: 0 (Normal)
 */
int main(void)
{
        char *sh = "_putchar";

        while (*sh)
        {
                _putchar(*sh);
                sh++;
        }
        _putchar('\n');

        return (0);
}
