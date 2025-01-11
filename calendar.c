#include <stdio.h>

int get_dow(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year -= 1;
    }

    // Υπολογισμός για το Ιουλιανό ημερολόγιο
    if (year < 1752 || (year == 1752 && (month < 9 || (month == 9 && day <= 2)))) {
        return ((day + (13 * (month + 1)) / 5 + year + (year / 4) + 5 - 1) % 7 + 7) % 7;
    }

    // Άκυρες ημερομηνίες
    if (year == 1752 && month == 9 && day > 2 && day < 14) {
        return 0;
    }

    // Γηργοριανό ημερολόγιο
    if (year > 1752 || (year == 1752 && (month > 9 || (month == 9 && day >= 14)))) {
        return ((day + (13 * (month + 1)) / 5 + year + (year / 4) - (year / 100) + (year / 400) -15) % 7 + 7) % 7;
    }

    return 0;
}

void print_month_headers(int start_month) {
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 3; i++) {
        printf("          %-10s", months[start_month + i - 1]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" Su Mo Tu We Th Fr Sa ");
    }
    printf("\n");
}

void print_month(int year, int month) {
    const char *months[] = {"January", "February", "March", "April", "May", "June",
                            "July", "August", "September", "October", "November", "December"};

    printf("\n %d - %s\n", year, months[month - 1]);
    printf(" Su Mo Tu We Th Fr Sa\n");

    int days_in_month[] = {31, (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28,
                           31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int start_day = get_dow(1, month, year);

    for (int i = 0; i < start_day; i++) {
        printf("   ");
    }
    for (int day = 1; day <= days_in_month[month - 1]; day++) {
        if (year == 1752 && month == 9 && day > 2 && day < 14) {
            continue;
        }

        printf(" %2d", day);

        if ((start_day + day - 1) % 7 == 6) {
            printf("\n");
        }
    }
    printf("\n");
}


void print_month_days(int year, int start_month) {
    int days_in_month[] = {31, (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) ? 29 : 28,
                           31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int start_day[3], current_day[3], max_days[3];
    for (int i = 0; i < 3; i++) {
        start_day[i] = get_dow(1, start_month + i, year);
        current_day[i] = 1;
        max_days[i] = days_in_month[start_month + i - 1];
    }

    int finished = 0;
    while (!finished) {
        finished = 1;
        for (int i = 0; i < 3; i++) {
            if (current_day[i] > max_days[i]) {
                printf("                     ");
            } else {
                finished = 0;

                if (current_day[i] == 1) {
                    for (int j = 0; j < start_day[i]; j++) {
                        printf("   ");
                    }
                }

                while (current_day[i] <= max_days[i]) {
                    if (year == 1752 && start_month + i == 9 &&
                        current_day[i] > 2 && current_day[i] < 14) {
                        current_day[i]++;
                        continue;
                    }

                    printf(" %2d", current_day[i]++);
                    start_day[i] = (start_day[i] + 1) % 7;

                    if (start_day[i] == 0) {
                        break;
                    }
                }

                if (start_day[i] != 0) {
                    for (int j = start_day[i]; j < 7; j++) {
                        printf("   ");
                    }
                }
            }
            printf(" ");
        }
        printf("\n");
    }
}

// Εκτύπωση ολόκληρου του έτους
void print_year(int year) {
    printf("                        %d\n", year);
    for (int row = 0; row < 4; row++) {
        print_month_headers(row * 3 + 1);
        print_month_days(year, row * 3 + 1);
        printf("\n");
    }
}

int main() {
    int year, month;

    printf("Welcome to the calendar.\n");
    printf("Year (e.g., 2024): ");
    scanf("%d", &year);
    while (year<0){
        printf("input positive number for year:");
        scanf("%d", &year);
    }

    printf("Month (0 to print the entire year): ");
    scanf("%d", &month);

    if (month == 0) {
        print_year(year);
    } else if (month >= 1 && month <= 12) {
        print_month(year, month);
    } else {
        printf("Invalid month! Please enter a value between 0 and 12.\n");
    }

    return 0;
}
