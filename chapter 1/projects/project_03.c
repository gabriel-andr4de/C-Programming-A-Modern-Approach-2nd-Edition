#  include <stdio.h>

int main(void)
{
    int r;
    printf("Enter raius of sphere: ");
    scanf("%d", &r);

    printf("Volume: %.2f \n", 4.0f/3.0f * 3.14f * r * r * r);
}