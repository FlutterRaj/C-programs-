#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <time.h> /* For Find the current year dynamically*/ 

struct emp{
	int emp_id;
	char emp_name[30];
	char emp_address[30];
	char job_category[20];
	int doj;
	float basic_salary;
	float gross_salary;
	float net_salary;
	int contact_no;
	int yearOfEx;
}empArr[100];

/* Functions */
void findJobCategory(float,int);
void calculateSalary(float,int);
void yearOfExprience();
void menuItems();
void searchMenu();
int searchById();
void searchByLoc();
void searchByYearOfJoin();
void searchByJob();
void searchByEx();
void addNewEmp();
void addEmp();
void empData(int);

/* Global Declaration */
int n,i,ID,totalIt;
char cityName[30];
static int empCount;
static int totalEmp;

int main(){
	char name[20];
	printf("\n Enter How many employee data you want to add :: ");
		scanf("%d",&n);
	totalEmp+=n;
	addEmp();
}

/* Add emp function */
void addEmp(){
	for(i=empCount;i<totalEmp;i++){
		printf("\n Enter data for Employee %d",i+1);
		printf("\n Enter Emp id :: ");
			scanf("%d",&empArr[i].emp_id);
		printf("\n Enter Emp name :: ");
		    scanf("%s",empArr[i].emp_name);
		printf("\n Enter Emp City Name :: ");
			scanf("%s",empArr[i].emp_address);
		printf("\n Enter Emp Year of Joining :: ");
			scanf("%d",&empArr[i].doj);
		printf("\n Enter Emp salary :: ");
			scanf("%f",&empArr[i].basic_salary);
		findJobCategory(empArr[i].basic_salary,i);
		calculateSalary(empArr[i].basic_salary,i);
		printf("\n Enter Emp contact Number :: ");
			scanf("%d",&empArr[i].contact_no);
		empCount++;
	}
	yearOfExprience();
	menuItems();
}

/* Find Job Category with Basic Salary and store to emp job category*/
void findJobCategory(float salary,int index){
	
	char job[30];
	
	if(salary < 10000 ){
		strcpy(job,"Helper");
	}else if (salary >= 10000 && salary < 18000){
		strcpy(job,"Admin");	
	}else if (salary >= 18000 && salary < 25000){
		strcpy(job,"Office-Staff");
	}else if ( salary >= 25000 && salary < 27000){
		strcpy(job,"Technical-assistant");
	}else if (salary >= 27200 && salary < 30000){
		strcpy(job,"Finance-Manager");
	}else if( salary >= 30000){
			strcpy(job,"Faculty-Member");
	}
	
	strcpy(empArr[index].job_category,job);	
}

/* From Basic Salary calculate Gross and Net Salary */
void calculateSalary(float basic_sal,int index){
	float gs,da,hra,pf=1800.00;
	
	da = (75.0/100.0)*basic_sal;
	hra = (15.0/100.0)*basic_sal;
	gs = basic_sal + da + hra;
	
	empArr[index].gross_salary = gs;
	empArr[index].net_salary = gs-pf;
}

/* Find Year of Experience for searching */
void yearOfExprience(){
	time_t s;
	int current_year,i;
    struct tm* current_time;
    s = time(NULL);
    current_time = localtime(&s);
    current_year = (current_time->tm_year + 1900);
    
    for(i=0;i<n;i++){
    	if(empArr[i].doj < current_year)
    		empArr[i].yearOfEx = current_year - empArr[i].doj ;
	}
}

/* The Main menu for perform Operations*/
void menuItems(){
	int ch,found=0;
	while(1){
			printf("\n\n ***********MENU**************");
		printf("\n 1. Add new Employee Data :: ");
		printf("\n 2. Search Employee Data:: ");
		printf("\n 3. Exit ::");
		printf("\n Enter a choice ::");
			scanf("%d",&ch);
			
		switch(ch){
			case 1: addNewEmp();
			break;
			
			case 2: searchMenu();
			break;
			
			case 3: exit(0);
	
			default: printf("\n Wrong Choice ..! Please Between 1 to 3 :)");
		}	
	}
}

/* The Search Menu for different types of searching Technique */
void searchMenu(){
	int ch;
	
	while(1){
		printf("\n\n *********Search MENU************");
		printf("\n 1. Search By Employee ID :: ");
		printf("\n 2. Search By Employee Location:: ");
		printf("\n 3. Search By Employee Year of join :: ");
		printf("\n 4. Search By Employee Job Category :: ");
		printf("\n 5. Search By Employee Year of Expriences:: ");
		printf("\n 6. Go to Menu List ::");
		printf("\n 7. Exit ::");
		printf("\n Enter a choice ::");
			scanf("%d",&ch);
			
		switch(ch){
			case 1: searchById();
			break;
			
			case 2: searchByLoc();
			break;
			
			case 3: searchByYearOfJoin();
			break;
			
			case 4: searchByJob();
			break;
			
			case 5: searchByEx();
			break;
			
			case 6: menuItems();
			break;
			
			case 7: exit(0);
	
			default: printf("\n Wrong Choice ..! Please Between 1 to 7 :)");
		}	
	}
}

/* Search Emp by the unique ID */
int searchById(){
	
	printf("\n Enter Emp. Id :: ");
		scanf("%d",&ID);
		
	for(i=0;i<totalEmp;i++){
		if(empArr[i].emp_id == ID){
			empData(i);
			return 0;
		}
	}
	printf("\n **** NO Record found of EMP ID %d ****",ID);
}

/* Search emp by City Name */
void searchByLoc(){
	
	int cnt=0;
	
	printf("\n Enter City Name ::");
		scanf("%s",cityName);
	
	for(i=0;i<totalEmp;i++){
		if(strcmp(empArr[i].emp_address,cityName) == 0){
			empData(i);
			cnt++;
		}
	}
	if(cnt == 0){
		printf("\n ** No Data Found on Location %s",cityName);
	}
}

/* Search emp by Year of Join*/
void searchByYearOfJoin(){
	int cnt=0,year;
	
	printf("\n Enter Joining of Year ::");
		scanf("%d",&year);
	
	for(i=0;i<totalEmp;i++){
		if(empArr[i].doj == year){
			empData(i);
			cnt++;
		}
	}
	if(cnt == 0){
		printf("\n ** No Data Found on Joining year %d",year);
	}
}

/* Search emp by Job Categorized*/
void searchByJob(){
	int cnt=0;
	char job[30]; 
   	
	printf("\n Enter Job Category:: ");
		scanf("%s",job);
			
	for(i=0;i<totalEmp;i++){
		if(strcmp(empArr[i].job_category,job) == 0){
			empData(i);
			cnt++;
		}
	}
	if(cnt == 0){
		printf("\n ** No Data Found on Job Category %s",job);
	}
}

/* Search emp by year of Exprience */
void searchByEx(){
	int cnt=0,exprience;
	
	printf("\n Enter minimum years of Expricence :: ");
		scanf("%d",&exprience);
	
	for(i=0;i<totalEmp;i++){
		if(empArr[i].yearOfEx >= exprience){
			empData(i);
			cnt++;
		}
	}
	if(cnt == 0){
		printf("\n ** No Data Found on minimum %d years of Exprience",exprience);
	}
}

/* for Add new emp later */
void addNewEmp(){
	printf("\n Enter How many new employee data you want to add :: ");
		scanf("%d",&n);
	totalEmp+=n;
	addEmp();
	
}

/* Print Emp Data when requires*/
void empData(int index){	
	printf("\n\n ID = %d",empArr[index].emp_id);
	printf("\n Name = %s",empArr[index].emp_name);
	printf("\n Address = %s",empArr[index].emp_address);
	printf("\n Job Category = %s",empArr[index].job_category);
	printf("\n Basic Salary = %.2f",empArr[index].basic_salary);
	printf("\n Gross Salary = %.2f",empArr[index].gross_salary);
	printf("\n Net Salary = %.2f",empArr[index].net_salary);
	printf("\n Date of Joining = %d",empArr[index].doj);
	printf("\n year of Exprience = %d year",empArr[index].yearOfEx);
	printf("\n Contact number = %d",empArr[index].contact_no);
}
