/*A project for solving different types of problems using 'c' language by your choice*/
//Source code for Multiple Mini Project System//
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
   {
   char  want='y',yes='y',operator,cha,ca,ch[50],name[50],smallc,capitalc,
             resultc,grade;
   int amount,choice,note,year,month,num,psum,nsum,num1,num2,num3,
         sum=0,fullmark=300,mark,sub=0,rollno,product=0,small,capital;
   int counter,x;
   int countfactor=0,factorial,cube,temp,reverse,ld,nterm,fnum,snum,
        tnum,endterm, m1,m2,m3,m4,pw;
   unsigned int  countdigit;
   float numf1,numf2,sumf=0.0,markf1,phy,chem,math,total=0,percentage,
           principal,interest,time,si;
   float  ta,da,hra,bs,gs,result,avg,ns,tax=0.0;

   printf("\n\n");
   printf(".............WELCOME TO MINI SOFTWARE\tWELCOME TO MINI SOFTWARE..........\n\n\n\n");
   printf("\n          WELCOME\n\n");
   printf("               TO\n\n");
   printf("                MULTIPLE MINI PROJECT SYSTEM\n\n\n\n");
   printf("If you do some work...\n\n\n\n");
while(yes=='y')
   {
   	want='y';
   	printf("\nPlease enter a password(i.e 1234):");
   	scanf("%d",&pw);

 	if(pw==1234)
    		{
  		while(want=='y')
     			{
   		printf("42. Result of a student\n");
   		printf("1. Print a message\n");
   		printf("2. Print your name, course and city\n");
   		printf("3. Find out sum,sub,product of a two number\n");
   		printf("4. Read two number and display it\n");
   		printf("5. Read two integer and one floating point number and                                           display it\n");
   		printf("6. Read name, rollno and mark of a student and display it\n");
   		printf("7. Enter a decimal no and print its corresponding Hexadecimal and octal value\n");
   		printf("8. Enter a character and print its corresponding ASCII value\n");
   		printf("9. Write a program to add two numbers\n");
   		printf("10.Enter mark of a student and check whether pass or not\n");
   		printf("11.Write a program to allows you to name, rollno, physics,chemistry, math and show name, rollno, Total mark and % of mark\n");
   		printf("12.Enter an integer number and a float number. print their summation\n");
   		printf("13.Enter two number and swap it\n");
   		printf("14.Enter two number and swap it without using third variable\n");
   		printf("15.Enter a character in small letter and convert it into capital letter\n");
   		printf("16.Enter a character in capital letter and convert it into small letter\n");
   		printf("17.Write a program to accept the principal,rate of interest and no. of year then find out the simple interest\n");
   		printf("18.Check a year is leap year or not\n");
   		printf("19.Write a program to check greatest among two number\n");
   		printf("20.Enter an alphabet and check wheather the character is in uppercase or lowercase letter\n");
   		printf("21.check a character is a vowel or constant\n");
   		printf("22.Find out the Gross Salary of an employee\n");
   		printf("23.Enter the percentage mark of a student and print the grade as per the following condition\n");
   		printf("24.calculation of 2 number using switch. Like enter two number and an operator which print the result based on operator\n");
   		printf("25.Display no. of days in a given month\n");
   		printf("26.Write a program which display how many number of 1000,500,100,50,20,10,5,2,and 1 rupees notes will be needed for a given amount of money\n");
   		printf("27.Print message for 10 times\n");
   		printf("28.Print sum of the series 1+2+3+......+100\n");
   		printf("29.sum of the positive and negative numbers from given numbers\n");
   		printf("30.Write a program to find out the factors of a given number\n");
   		printf("31.Write a program to count number of factors of a given number\n");
   		printf("32.check whether a given number is prime number or not\n");
   		printf("33.for calculating the factorial of a given number\n");
   		printf("34.for calculating the fibonacci series of nterms\n");
   		printf("35.for calculating the sum of digits in a given number\n");
   		printf("36.for count the number of digits present in a given number\n");
   		printf("37.for reverse of a given number. 38.check palidrome number or not\n");
   		printf("39.check Armstrong number or not. 40.check perfect number or not\n");
   		printf("41.check special number or not. 42.Result of a student\n");
   		printf("\n");
   	printf("--------------------------------------------------------------------------\n");
   	printf("WELCOME TO MY MINI PROJECT USING C'LANGUAGE (BY O'LEVEL STUDENT MR.PRAKASH KUMAR MOHAPATRA)\n");
   	printf("--------------------------------------------------------------------------\n");
   	printf("Please enter your choice(from 1 to 42): ");
   	scanf("%d",&num);
   		switch (num)
      			{
	 		case 1:
			printf("------------------------------------------\n");
			printf("1. Print a message\n");
			printf("------------------------------------------\n");
			printf("\nEnter a message:\n");
			fflush(stdin);
			gets(ch);
			printf("\nMessage is: ");
			puts(ch);
break;

	 	case 2:
			printf("------------------------------------------\n");
			printf("2. Print your name, course and city\n");
			printf("------------------------------------------\n");
			printf("Enter your name: ");
			scanf("%s",ch);
			printf("Name is:%s",ch);
			break;

case 3:
			printf("------------------------------------------\n");
			printf("3. Find out sum,sub,product of a two number\n");
			printf("------------------------------------------\n");
			printf("enter two numbers: ");
			scanf("%d %d",&num1,&num2);
			sum=num1+num2;
			sub=num1-num2;
			product=num1*num2;
			printf("sum=%d\nsub=%d\nproduct=%d\n",sum,sub,product);
			break;


	 	case 4:
	      		 printf("------------------------------------------\n");
	       		printf("4. Read two number and display it\n");
	       		printf("------------------------------------------\n");
	       		printf("Enter two number:");
	       		scanf("%d %d",&num1,&num2);
	       		printf("num1=%d\nnum2=%d",num1,num2);
	       		break;

	 	case 5:
	       		printf("------------------------------------------\n");
	       		printf("5. Read two integer and one floating point number and display it\n");
	       		printf("------------------------------------------\n");
	       		printf("enter three numbers:");
	       		scanf("%d %d %f",&num1,&num2,&numf1);
	       		printf("first integer is: %d\nsecond integer is: %d\nfirst float number is: %f",num1,num2,numf1);
	       		break;

	 	case 6:
	      		 printf("------------------------------------------\n");
	       		printf("6. Read name, rollno and mark of a student and display it\n");
	       		printf("------------------------------------------\n");
	       		printf("Enter a name: ");
	       		scanf("%s",name);
	       		printf("Enter a rollno: ");
	       		scanf("%d",&rollno);
	       		printf("Enter a mark: ");
	       		scanf("%f",&markf1);
	       		printf("Name: %s\n",name);
	       		printf("Rollno: %d\n",rollno);
	       		printf("Mark: %f",markf1);
	       		break;

		case 7:
			printf("------------------------------------------\n");
			printf("7. Enter a decimal no and print its corresponding Hexadecimal and octal value\n");
			printf("------------------------------------------\n");
			printf("Enter a decimal number: ");
			scanf("%d",&num);
			printf("octal=%o\n",num);
			printf("Hexadecimal=%x",num);
			break;

		case 8:
			printf("------------------------------------------\n");
			printf("8. Enter a character and print its corresponding ASCII value\n");
			printf("------------------------------------------\n");
			printf("Enter a character: ");
			fflush(stdin);
			scanf("%c",&ca);
			printf("ASCII value is= %d",ca);
			break;

		case 9:
			printf("------------------------------------------\n");
			printf("9. Write a program to add two numbers\n");
			printf("------------------------------------------\n");
			printf("enter a number: ");
			scanf("%d",&num1);
			printf("enter another number: ");
			scanf("%d",&num2);
			sum=num1+num2;
			printf("sum=%d",sum);
                		break;

		case 10:
			printf("------------------------------------------\n");
			printf("10.Enter mark of a student and check whether pass or not\n");
			printf("------------------------------------------\n");
			printf("\nEnter mark: ");
			scanf("%d",&mark);
			if(mark>30)
		 		 printf("You are Qualified");
			else
		 		 printf("You are not Qualified");
			break;

		case 11:
			printf("------------------------------------------\n");
			printf("11.Write a program to allows you to name, rollno, physics,chemistry, math and show name, rollno, Total mark and % of mark\n");
			printf("------------------------------------------\n");
			printf("Enter name: ");
			fflush(stdin);
			gets(name);
			printf("Enter rollno: ");
			scanf("%d",&rollno);
			printf("Enter physics mark: ");
			scanf("%f",&phy);
			printf("Enter chemistry mark: ");
			scanf("%f",&chem);
			printf("Enter math mark: ");
			scanf("%f",&math);
			total=phy+chem+math;
			percentage=total/fullmark*100;
			printf("Name: %s\n",name);
			printf("Rollno: %d\n",rollno);
			printf("Total mark: %f\n",total);
			printf("percentage of mark= %f",percentage);
			break;

		case 12:
			printf("------------------------------------------\n");
			printf("12.Enter an integer number and a float number. print their summation\n");
			printf("------------------------------------------\n");
			printf("Enter an integer number: ");
			scanf("%d",&num1);
			printf("Enter a float number: ");
			scanf("%f",&numf1);
			sumf=num1+numf1;
			printf("sum= %f",sumf);
			break;

		case 13:
			printf("------------------------------------------\n");
			printf("13.Enter two number and swap it\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num1);
			printf("Enter another number: ");
			scanf("%d",&num2);
			num3=num1;
			num1=num2;
			num2=num3;
			printf("num1= %d\nnum2=%d",num1,num2);
			break;

		case 14:
			printf("------------------------------------------\n");
			printf("14.Enter two number and swap it without using third variable\n");
			printf("------------------------------------------\n");
			printf("Enter two number\n");
			printf("Enter a number: ");
			scanf("%d",&num1);
			printf("Enter another number: ");
			scanf("%d",&num2);
			num1=num1-num2;
			num2=num2+num1;
			num1=num2-num1;
			printf("num1=%d\nnum2=%d",num1,num2);
			break;

		case 15:
			printf("------------------------------------------\n");
			printf("15.Enter a character in small letter and convert it into capital letter\n");
			printf("------------------------------------------\n");
			printf("Enter a small letter:");
			fflush(stdin);
			scanf("%c",&smallc);
			capital=smallc-32;
			printf("capital letter is = %c",capital);
			break;

		case 16:
			printf("------------------------------------------\n");
			printf("16.Enter a character in capital letter and convert it into small letter\n");
			printf("------------------------------------------\n");
			printf("Enter a capital letter:");
			fflush(stdin);
			scanf("%c",&capitalc);
			smallc=capitalc+32;
			printf("small letter is = %c",smallc);
			break;

		case 17:
			printf("------------------------------------------\n");
			printf("17.Write a program to accept the principal,rate of interest and no. of year then find out the simple interest\n");
			printf("------------------------------------------\n");
			printf("Enter principal amount: ");
			scanf("%f",&principal);
			printf("Enter interest rate: ");
			scanf("%f",&interest);
			printf("Enter time: ");
			scanf("%f",&time);
			si=principal*time*interest/100;
			printf("simple interest= %f",si);
			break;

		case 18:
			printf("------------------------------------------\n");
			printf("18.Check a year is leap year or not\n");
			printf("------------------------------------------\n");
			printf("Enter a year: ");
			scanf("%d",&year);
			if(year%4==0 && year%100!=0 || year%400==0)
		  	   printf("This is a leap year");
			else
		  	   printf("This is not a leap year");
			break;

		case 19:
			printf("------------------------------------------\n");
			printf("19.Write a program to check greatest among two number\n");
			printf("------------------------------------------\n");
			printf("Enter a number for A= ");
			scanf("%f",&numf1);
			printf("Enter a number for B= ");
			scanf("%f",&numf2);
			if(numf1>numf2)
		  	   printf("A is greatest");
			else
		  	  printf("B is greatest");
			break;

		case 20:
			printf("------------------------------------------\n");
			printf("20.Enter an alphabet and check wheather the character is in uppercase or lowercase letter\n");
			printf("------------------------------------------\n");
			printf("Enter a character: ");
			fflush(stdin);
			scanf("%c",&cha);
			if(cha>=65 && cha<=90)
		  	  printf("Uppercase");
			else if(cha>=97 && cha<=122)
		  	  printf("Lowercase");
			else
		  	  printf("please give correct alphabet");
			break;
		case 21:
			printf("------------------------------------------\n");
			printf("21.check a character is a vowel or constant\n");
			printf("------------------------------------------\n");
			printf("Enter a character: ");
			fflush(stdin);
			scanf("%c",&cha);
			if(cha=='a' || cha=='e' || cha=='i' || cha=='o' || cha=='u')
		  	  printf("Vowel");
			else
		  	  printf("Constant");
			break;

		case 22:
			printf("------------------------------------------\n");
			printf("22.Find out the Gross Salary of an employee\n");
			printf("------------------------------------------\n");
			printf("Enter Basic Salary: ");
			scanf("%f",&bs);
			if(bs>=9000)
		  	   {
		            hra=bs*20/100;
                              da=bs*70/100;
                              ta=400;
                  		}
			else
                  		   {
                    	hra=bs*10/100;
                    	da=bs*50/100;
                    	ta=200;
                 		 }
			gs=bs+da+ta+hra;
			ns=gs-tax;
			printf("Gross salary= %f",gs);
			printf("Net salary= %f",ns);
			break;

		case 23:
			printf("------------------------------------------\n");
			printf("23.Enter the percentage mark of a student and print the grade as per the following condition\n");
			printf("------------------------------------------\n");
			printf("\n Enter percentage of mark: ");
			scanf("%f",&percentage);
			if(percentage>=85 && percentage<=100)
		  	  printf("Grade \'E'");
			else if(percentage>75 && percentage<=84)
		  	  printf("Grade \'A'");
			else if(percentage>65 && percentage<=75)
		  	  printf("Grade \'B'");
			else if(percentage>55 && percentage<=65)
		  	  printf("Grade \'C'");
			else if(percentage>=50 && percentage<=55)
		  	  printf("Grade \'D'");
			else if(percentage<0 && percentage>100)
		  	  printf("please give correct percentage");
			else
		  	  printf("Grade \'F'");
			break;

		case 24:
			printf("------------------------------------------\n");
			printf("24.calculation of 2 number using switch. Like enter two number and an operator which print the result based on operator\n");
			printf("------------------------------------------\n");
			printf("Enter two numbers");
			printf("Enter a number: ");
			scanf("%d",&num1);
			printf("Enter another number: ");
			scanf("%d",&num2);
			printf("Enter an operator in between(+,-,*,/,%): ");
			fflush(stdin);
			scanf("%c",&operator);
			switch(operator)
				{
				case '+':
					result=num1+num2;
					break;
				case '-':
					result=num1-num2;
					break;
				case '*':
					result=num1*num2;
					break;
				case '/':
					result=num1/num2;
					break;
				case '%':
					result=num1%num2;
					break;
				default:
					printf("wrong operator");
					break;
				}
				printf("%f",result);
				break;

		case 25:
			printf("------------------------------------------\n");
			printf("25.Display no. of days in a given month\n");
			printf("------------------------------------------\n");
			printf("Enter a month (from 1 to 12):");
			scanf("%d",&month);
			switch(month)
				{
				case 1:
					printf("January is 31 days");
					break;
				case 2:
					printf("February is 28 days");
					break;
				case 3:
					printf("March is 31 days");
					break;

				case 4:
					printf("April is 30 days");
					break;
				case 5:
					printf("May is 31 days");
					break;
				case 6:
					printf("June is 30 days");
					break;
				case 7:
					printf("July is 31 days");
					break;
				case 8:
					printf("August is 31 days");
					break;
				case 9:
					printf("September is 30 days");
					break;
				case 10:
					printf("October is 31 days");
					break;
				case 11:
					printf("November is 30 days");
					break;
				case 12:
					printf("December is 31 days");
					break;
				default:
					printf("Wrong choice");
					break;
				}
				break;

		case 26:
			printf("------------------------------------------\n");
			printf("26.Write a program which display how many number of 1000,500,100,50,20,10,5,2,and 1 rupees notes will be needed for a given amount of money\n");
			printf("------------------------------------------\n");
			printf("Enter total amount:");
			scanf("%d",&amount);
			printf("Enter notes value from which it starts:\n");
			scanf("%d",&choice);
			switch(choice)
				{
				default:
					printf("Enter valid amount");
					break;
				case 1000:
					note=amount/1000;
					printf("No. of 1000 rupees note= %d\n",note);
					amount=amount%1000;
				case 500:
					note=amount/500;
					printf("No. of 500 rupees note= %d\n",note);
					amount=amount%500;
				case 100:
					note=amount/100;
					printf("No. of 100 rupees note= %d\n",note);
					amount=amount%100;
				case 50:
					note=amount/50;
					printf("No. of 50 rupees note= %d\n",note);
					amount=amount%50;
				case 20:
					note=amount/20;
					printf("No. of 20 rupees note= %d\n",note);
					amount=amount%20;

				case 10:
					note=amount/10;
					printf("No. of 10 rupees note= %d\n",note);
					amount=amount%10;
				case 5:
					note=amount/5;
					printf("No. of 5 rupees note= %d\n",note);
					amount=amount%5;
				case 2:
					note=amount/2;
					printf("No. of 2 rupees note= %d\n",note);
					amount=amount%2;
				case 1:
					note=amount/1;
					printf("No. of 1 rupees note= %d\n",note);
					amount=amount%1;
				}
			break;

		case 27:
			printf("------------------------------------------\n");
			printf("27.Print message for 10 times\n");
			printf("------------------------------------------\n");
			printf("Enter a number for repeating welcome: ");
			scanf("%d",&num);
			counter=1;
			while(counter<=num)
				{
				printf("Welcome\n");
				counter++;
				}
			break;

		case 28:
			printf("------------------------------------------\n");
			printf("28.Print sum of the series 1+2+3+......+n\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num);
			x=1;sum=0;
			while(x<=num)
				{
				sum=sum+x;
				x++;
				}

			printf("sum= %d",sum);
			break;

		case 29:
			printf("------------------------------------------\n");
			printf("29.sum of the positive and negative numbers from given numbers\n");
			printf("------------------------------------------\n");
			psum=0;nsum=0;
			printf("Enter a number: ");
			scanf("%d",&num);
			while(num!=0)
				{
				if(num>0)
			  	  psum=psum+num;
				else if(num<0)
		          	  nsum=nsum+num;
				scanf("%d",&num);
				}
			printf("sum of positive numbers= %d\n",psum);
			printf("sum of negative numbers= %d",nsum);
			break;

		case 30:
printf("------------------------------------------\n");
			printf("30.Write a program to find out the factors of a given number\n");
			printf("------------------------------------------\n");
			printf("Enter a number:");
			scanf("%d",&num);
			x=1;
			while(x<=num)
				{
				if(num%x==0)
				  printf("%d\t",x);
				x++;
				}
			break;

		case 31:
			printf("------------------------------------------\n");
			printf("31.Write a program to count number of factors of a given number\n");
			printf("------------------------------------------\n");
			countfactor=0;x=1;
			printf("Enter a number: ");
			scanf("%d",&num);
			while(x<=num)
				{
				if(num%x==0)
				  countfactor++;
				x++;
				}
			printf("Total factors of a given number is: %d",countfactor);
			break;

		case 32:
			printf("------------------------------------------\n");
			printf("32.check whether a given number is prime number or not\n");
			printf("------------------------------------------\n");
			x=1;countfactor=0;
			printf("Enter a number: ");
			scanf("%d",&num);
			while(x<=num)
				{
				if(num%x==0)
				  countfactor++;
				x++;
				}
			if(countfactor==2)
		 	   printf("%d is a prime number",num);
			else
		  	  printf("%d is not a prime number",num);
			break;

		case 33:
			printf("------------------------------------------\n");
			printf("33.for calculating the factorial of a given number\n");
			printf("------------------------------------------\n");
			factorial=1;
			printf("Enter a number:");
			scanf("%d",&num);
			while(num>0)
				{
				factorial=factorial*num;
				num--;
				}
			printf("Factorial is= %d",factorial);
			break;

		case 34:
			printf("------------------------------------------\n");
			printf("34.for calculating the fibonacci series of nterms\n");
			printf("------------------------------------------\n");
			printf("Enter 1 for nterm of fibonacci series\n");
			printf("Enter 2 for upto a given number");
			printf("Enter your choice: ");
			scanf("%d",&choice);
			switch(choice)
				{
				case 1:
					printf("Enter number of term: ");
					scanf("%d",&nterm);
					fnum=0,snum=1,tnum=0;x=1;
					while(x<=nterm)
						{
						printf("%d\t",tnum);
						fnum=snum;
						snum=tnum;
						tnum=fnum+snum;
						x++;
						}
					break;
				case 2:
					printf("Enter number for endterm: ");
					scanf("%d",&endterm);
					fnum=0,snum=1,tnum=0;
					while(tnum<=endterm)
						{
						printf("%d\t",tnum);
						fnum=snum;
						snum=tnum;
						tnum=fnum+snum;
						}
					break;
				}
				break;

		case 35:
			printf("------------------------------------------\n");
			printf("35.for calculating the sum of digits in a given number\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num);
			sum=0;
			while(num>0)
				{
				ld=num%10;
				sum=sum+ld;
				num=num/10;
				}
			printf("sum of digits in a given number is: %d",sum);
			break;

		case 36:
			printf("------------------------------------------\n");
			printf("36.for count the number of digits present in a given number\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num);
			countdigit=0;
			while(num>0)
				{
				ld=num%10;
				countdigit++;
				num=num/10;
			}
			printf("No of digit is = %d",countdigit);
			break;

		case 37:
			printf("------------------------------------------\n");
			printf("37.for reverse of a given number\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num);
			reverse=0;
			while(num>0)
				{
				ld=num%10;
				reverse=reverse*10+ld;
				num=num/10;
				}
			printf("reverse number is = %d",reverse);
			break;

		case 38:
			printf("------------------------------------------\n");
			printf("38.check palidrome number or not\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num);
			temp=num; reverse=0;
			while(num>0)
				{
				ld=num%10;
				reverse=reverse*10+ld;
				num=num/10;
				}
			if(temp==reverse)
		  	  printf("palindrome number");
			else
		  	   printf("Not a palindrome number");
			break;

		case 39:
			printf("------------------------------------------\n");
			printf("39.check Armstrong number or not\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num);
			temp=num; sum=0;
			while(num>0)
				{
				ld=num%10;
				sum=sum+(ld*ld*ld);
				num=num/10;
				}
				if(sum==temp)
		  		  printf("Armstrong number");
				else
		 		   printf("Not a Armstrong number");
			break;

		case 40:
			printf("------------------------------------------\n");
			printf("40.check perfect number or not\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num);
			counter=1;sum=0;x=1;
			while(x<num)
				{
				if(num%x==0)
				sum=sum+x;
				x++;
				}
				if(num==sum)
			  	  printf("perfect number");
				else
			  	  printf("Not a perfect number");
			break;

		case 41:
			printf("------------------------------------------\n");
			printf("41.check special number or no\n");
			printf("------------------------------------------\n");
			printf("Enter a number: ");
			scanf("%d",&num);
			ld=num%10;
			cube=ld*ld*ld;
			if(cube==num)
		  	  printf("special number");
			else
		  	  printf("not a special number");
			break;

		case 42:
			printf("------------------------------------------\n");
			printf("42.Result of a student\n");
			printf("------------------------------------------\n");
			total=0.0;avg=0.0;
			printf("Enter student name: ");
			fflush(stdin);
			gets(name);
			printf("\nEnter m1.r4 mark: ");
			scanf("%d",&m1);
			printf("\nEnter m2.r4 mark: ");
			scanf("%d",&m2);
			printf("\nEnter m3.r4 mark: ");
			scanf("%d",&m3);
			printf("\nEnter m4.r4 mark: ");
			scanf("%d",&m4);
			total=m1+m2+m3+m4;
			avg=total/4;
			if(avg>40)
		   		{
				result='p';
				if(avg>=85 && avg<=100)
			 	   grade='E';
				else if(avg>=75 && avg<85)
			  	   grade='A';
				else if(avg>=65 && avg<75)
			  	   grade='B';
				else if(avg>=55 && avg<65)
			  	   grade='C';
				else if(avg>=50 && avg<55)
			  	   grade='D';
				else
			  	   grade='N';

		   		 }
			else
		   		{
			result='f';grade='N';
		   		}
			printf("\nstudent name	: %s",name);
			printf("\nmarks		: ");
			printf("\n%d\t%d\t%d\t%d\t",m1,m2,m3,m4);
			printf("\nAverage marks	: %f",avg);
			if(result=='p')
		  	  printf("\nResult	: pass");
			else
		  	   printf("\nResult	: fail");
		 	printf("\nGrade		: %c\n",grade);
			break;

	 	default:
			printf("Wrong Choice Please enter a number from 1 to 42\n");
		break;
       		}//switch
printf("\nDo you want to another calculation(y/n):");
fflush(stdin);
scanf("%c",&want);
} //while
} //if
else
 {
printf("\nYou are entered wrong password.\n\nPlease entered correct password\n\n");
}
printf("\nDo you want to Login again(y/n):");
fflush(stdin);
scanf("%c",&yes);

} //while


   getch();
   } //main()


