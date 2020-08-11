#include <stdio.h>
#include <time.h>

int main()
{
    time_t s;
    struct tm* current_time;
    
    s = time(NULL);
    
    current_time = localtime(&s);
    
    printf("Current year = %d\n",(current_time->tm_year + 1900));
}

// struct name emp , e_id, e_name, job_category , DOJ , bs, gs, ns , phone num , adress  - Fields
// job_category :- Faculty, Technical assistent , admin staftt, office staff, finace manager
// bs under following conditon:- if bs < 10000 : Helper or if bs > 10000 && bs < 18000: Admin staff ,and bs> 18000 && bs < 25000: Ofiice Staff,
// and bs > 25000 && bs < 27000: technical assistant, and if bs> 27200 && bs<30000 Finance Manager, and bs> 30000 the faculty..
// calculate gross slary = basic + da + hra 
// net = gs - pf [ profident fund]
// da = 75% of basic
// hra = 15% on basi
// pf = 1800 rs.
// seraching - switch case - case 1: emp_id , case 2: location , case 3: with DOJ[year]/job_category/year_of_exprience 

