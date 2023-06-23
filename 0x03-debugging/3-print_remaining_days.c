void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        days_in_month[2] = 29; // Update February to have 29 days in a leap year
    }

    if (month >= 2 && day >= 60 && days_in_month[2] == 28)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        return;
    }

    int day_of_year = 0;
    for (int i = 1; i < month; i++)
    {
        day_of_year += days_in_month[i];
    }
    day_of_year += day;

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", 365 + (days_in_month[2] == 29) - day_of_year);
}

