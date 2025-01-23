#include <stdio.h>
#include <limits.h>

double average(int* salary, int salarySize) {
    int maxSalary = INT_MIN;
    int minSalary = INT_MAX;
    double sum = 0;

    for (int i = 0; i < salarySize; i++) 
	{
        sum += salary[i];
        if (salary[i] > maxSalary) 
		{
            maxSalary = salary[i];
        }
        if (salary[i] < minSalary) 
		{
            minSalary = salary[i];
        }
    }

    sum = sum - (maxSalary + minSalary);
    double avg = sum / (salarySize - 2);
    return avg;
}

int main() {
    int salary[] = {4000, 3000, 1000, 2000};
    int salarySize = sizeof(salary) / sizeof(salary[0]);

    double result = average(salary, salarySize);
    printf("Average salary (excluding min and max): %.2f\n", result);

    // Additional test case
    int salary2[] = {1000, 2000, 3000};
    salarySize = sizeof(salary2) / sizeof(salary2[0]);

    result = average(salary2, salarySize);
    printf("Average salary (excluding min and max): %.2f\n", result);

    return 0;
}

