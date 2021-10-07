#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByeNumber(PtrToConstEmployee ptr, int tablesize, long targetNumber){
    const PtrToConstEmployee endPtr = ptr + tablesize;
    
    for(; ptr < endPtr; ptr++ ){
        if(ptr->number == targetNumber)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}

PtrToEmployee searchEmployeeByeName(PtrToEmployee ptr, int tablesize, char * targetName){
    const PtrToConstEmployee endPtr = ptr + tablesize;
    for(; ptr < endPtr; ptr++){
        if(strcmp(ptr -> name, targetName) ==0)
            return (PtrToEmployee) ptr;
    } 
    return NULL;
}
PtrToEmployee searchEmployeeByePhone(PtrToEmployee ptr, int tablesize, char * targetNumber){
    const PtrToConstEmployee endPtr = ptr + tablesize;
    for(; ptr < endPtr; ptr++){
        if(strcmp(ptr -> phone, targetNumber) ==0)
            return (PtrToEmployee) ptr;
    } 
    return NULL;
    
PtrToEmployee searchEmployeeByeSalary(PtrToConstEmployee ptr, int tablesize, double targetSalary){
    const PtrToConstEmployee endPtr = ptr + tablesize;
    
    for(; ptr < endPtr; ptr++ ){
        if(ptr->salary == targetSalary)
            return (PtrToEmployee) ptr;
    }
    return NULL;
}
}

