#include <string.h>
#include <stdlib.h>
#include "employee.h"

int main(void){
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind);
    
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);
    
    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;
    
    PtrToEmployee matchPtr;
    
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    
    if(matchPtr != NULL)
        printf("Employee ID 1045 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee ID 1045 is NOT found in the record\n");
        
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    
    if(matchPtr != NULL)
        printf("Employee Tony Bobcat is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");
        
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2324");
    
    if(matchPtr != NULL)
        printf("Number 909-555-2324 is in record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Number 909-555-2324 is NOT record in the record\n");
        
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 8.78);
    
    if(matchPtr != NULL)
        printf("Salary 8.78 is in on record %ld\n", matchPtr - EmployeeTable);
    else
        printf("Salary 8.78 is NOT on record\n");
        
    return EXIT_SUCCESS;
}