 #include <stdio.h>

int main()
{
    int mark;

    printf("Enter the mark: ");
    scanf("%d", &mark);

    if (mark >= 85 && mark <= 100)
    {
        printf("Grade is A\n");
    }
    else if (mark >= 75 && mark <= 84)
    {
        printf("Grade is B\n");
    }
    else if (mark >= 60 && mark <= 74)
    {
        printf("Grade is C\n");
    }
    else if (mark >= 45 && mark <= 59)
    {
        printf("Grade is D\n");
    }
    else if (mark >= 0 && mark < 45)
    {
        printf("Student is Fail\n");
    }
    else
    {
        printf("Invalid mark\n");
    }

    return 0;
}



