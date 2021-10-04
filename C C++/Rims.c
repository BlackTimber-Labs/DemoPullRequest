#include <stdio.h>
#include<stdlib.h>
#include<strings.h>

int i=0;
struct passengerdetails
{
    char pfname[20];
    char plname[20];
    char aadhar[12];
    int covchoice;
    char cov[20];
    char meal[20];
    int mchoice;
    char dep[50];
    char des[50];
    long long int cont;
    char tct[100];
    int x[50];
    
}pgr[200];


void cov()
        {
           printf("\n\nCovid regulations and protocols\n\n");
                  printf("\n1.)Avoid touching surfaces"
                         "\n2.)Follow social distancing guidelines: Stay at least 6 feet away from other commuters and avoid gathering in groups."
                         "\n3.)Using public bathrooms at the train station: Wash your hands with soap and water for at least 20 seconds after using the public bathroom"
                         "\n4.)Carry your own water bottle and food packets, don’t accept or offer water bottles to other commuters."
                         "\n5.)Avoid spitting: This is a strict no no."
                         "\n6.)If possible, get an e-pass/ e-ticket so you don’t have to wait in serpentine queues to get your travel documents in order."
                         "\n7.)Choose to make contactless reservations and payments."
                         "\n8.)Travel in the non-peak hours."
                         "\n9.)Before you leave for work, wash your hands with soap and water and then wear your mask."
                         "\n10.) Wear gloves before you step out, these will work as a barrier if you end up touching door handles, railings etc."
                         "\n11.)ensure that you don’t touch your face during the transit and that you wash your hands thoroughly after getting work.\n");
                 
        
         }

void addetails()
          {
           char veg[20]="Vegetarian",nonveg[20]="Non-Vegetarian",jain[20]="Jain",
               pos[20]="Covid-positive",neg[20]="Covid-negative",risk[20]="At mild risk",report[20]="At high risk";
              int flag=0,flag1=0,flag2=0;
  
    
              printf("Enter the Passenger details\n");
 
                 printf("Enter the First name of passenger:\n");
                 scanf("%s",pgr[i].pfname);
                 printf("Enter the Last name of passenger:\n");
                 scanf("%s",pgr[i].plname);
                 printf("Enter Aadhar number:\n");
                 scanf("%s",pgr[i].aadhar);
                 printf("Departure location:\n");
                 scanf("%s",pgr[i].dep);
                 printf("Destination location:\n");
                 scanf("%s",pgr[i].des);
              
              
                 printf("Enter the choice of meal:");
                 printf("\n1)Vegetarian\n2)Non vegetarian\n3)Jain\n");
              do{
                  scanf("%d",&pgr[i].mchoice);
                        switch(pgr[i].mchoice)
                                {
                                    case 1: strcpy(pgr[i].meal,veg);
                                           flag1=0;
                                                break;
                                    case 2:strcpy(pgr[i].meal,nonveg);
                                            flag1=0;
                                                break;
                                    case 3:strcpy(pgr[i].meal,jain);
                                           flag1=0;
                                                break;
                                    default:
                                        printf("Please enter a valid choice from 1/2/3.\n");
                                            flag1=1;
                                            break;
                                        
                                }
    
              }while(flag1!=0);
   
                printf("Covid-19:\n");
              do{
                 printf("1)Covid positive\n2)Covid negative\n3)In contact with a covid positive person for past 15 days\n4)Any symptoms of covid-19 in past week\n5)Choose this option for more covid related guidelines\n");
                scanf("%d",&pgr[i].covchoice);

                                switch(pgr[i].covchoice)
                                        {
                                            case 1: strcpy(pgr[i].cov,pos);
                                                flag2=0;
                                                    break;
                                            case 2:strcpy(pgr[i].cov,neg);
                                                flag2=0;
                                                    break;
                                            case 3:strcpy(pgr[i].cov,risk);
                                                flag2=0;
                                                    break;
                                            case 4:strcpy(pgr[i].cov,report);
                                                flag2=0;
                                                    break;
                                            
                                            case 5:
                                                if (flag==0)
                                                cov();
                                            
                                                else
                                                  printf("Enter a valid choice among 1/2/3/4.\n");
                                                
                                                   flag++;
                                                     break;
                                            default:printf("\nEnter a valid choice");
                                                 flag2++;
                                                   break;
                                        }
                          }while(pgr[i].covchoice==5||flag2!=0);//DEfault case condition to be checked.
                           
              printf("Enter your contact details:\n");
              scanf("%lld",&pgr[i].cont);
              
              printf("Your ticket number is %s%s%s\n",pgr[i].dep,pgr[i].des,pgr[i].aadhar);
                        strcat(pgr[i].tct,pgr[i].dep);
                        strcat(pgr[i].tct,pgr[i].des);
                        strcat(pgr[i].tct,pgr[i].aadhar);
    
    
    i++;
    
    
}


void moretct()
        {
            printf("Number of tickets that have already been booked %d\n\n",i);
            printf("More number of tickets that can be booked %d",200-i);
         }

void ticket_no()
       {
           char t[100],flag=0;
           
            printf("Enter the ticket number of the passenger\n");
            scanf("%s",t);
           
            for(int j=0;j<i;j++)
                    {
                            if(!strcmp(t,pgr[j].tct))
                                    {
                                        
                                            printf("\nThe passenger details are as follows\n\n");
                                               printf("Ticket number:\n");
                                               printf("%s\n\n",pgr[j].tct);
                                               printf("First name of passenger:");
                                               printf("\t\tLast name of passenger:\n");
                                               printf("%s",pgr[j].pfname);
                                               printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
                                               printf("Aadhar number:\n");
                                               printf("%s\n",pgr[j].aadhar);
                                               printf("\nDeparture location:");
                                                printf("\t\tDestination location:\n");
                                               printf("%s",pgr[j].dep);
                                               printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
                                               printf("Choice of meal:");
                                               printf("\t\t\tCovid-19   status:\n");
                                               printf("%s",pgr[j].meal);
                                              
                                               printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
                                               printf("Contact details:\n");
                                               printf("%lld\n\n",pgr[j].cont);
                                              flag++;
                                        if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                                        {
                                            printf("\nWarning:You need to generate a mandatory covid report on arrival\n\n");
                                        }
                                        
                                        if(pgr[j].covchoice==1)
                                        {
                                            printf("\nWarning:You won't be allowed to travel\n\n");
                                        }
                                              break;
                                    }
                 }
           
           if(flag==0)
                {
                    printf("Ticket number not found");
                }
           
}





void name()
{
     char name[20],flag=0;
      printf("Enter the first name to get passenger details");
      scanf("%s",name);
      for(int j=0;j<i;j++)
                {
                        if(!strcmp(name,pgr[j].pfname))
                            {
                                printf("\nThe passenger details are as follows\n\n");
                                   printf("Ticket number:\n");
                                   printf("%s\n\n",pgr[j].tct);
                                   printf("First name of passenger:");
                                   printf("\t\tLast name of passenger:\n");
                                   printf("%s",pgr[j].pfname);
                                   printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
                                   printf("Aadhar number:\n");
                                   printf("%s\n",pgr[j].aadhar);
                                   printf("\nDeparture location:");
                                    printf("\t\tDestination location:\n");
                                   printf("%s",pgr[j].dep);
                                   printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
                                   printf("Choice of meal:");
                                   printf("\t\t\tCovid-19   status:\n");
                                   printf("%s",pgr[j].meal);
                                  
                                   printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
                                   printf("Contact details:\n");
                                   printf("%lld\n\n",pgr[j].cont);
                                   flag+=1;
                            if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                            {
                                printf("\nWarning:You need to generate a mandatory covid report on arrival\n\n");
                            }
                            if(pgr[j].covchoice==1)
                                {
                                    printf("\nWarning:You won't be allowed to travel\n\n");
                                }
                               
                            }
                            
                    }
                            if(flag==1)
                            printf("There  is %d Person with entered name",flag);
                            else if(flag!=1)
                            printf("There  are %d People with entered name",flag);
    
        
        if(flag==0)
                    {
                        printf("\nPassenger details not found");
                    }
        
}



        
void surname()
{
    char surname[20],flag=0;
    
    printf("Enter the last name to get passenger details:");
    scanf("%s",surname);
    
    for(int j=0;j<i;j++)
                {
                     if(!strcmp(surname,pgr[j].plname))
                                {
                                    printf("\nThe passenger details are as follows\n\n");
                                       printf("Ticket number:\n");
                                       printf("%s\n\n",pgr[j].tct);
                                       printf("First name of passenger:");
                                       printf("\t\tLast name of passenger:\n");
                                       printf("%s",pgr[j].pfname);
                                       printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
                                       printf("Aadhar number:\n");
                                       printf("%s\n",pgr[j].aadhar);
                                       printf("\nDeparture location:");
                                        printf("\t\tDestination location:\n");
                                       printf("%s",pgr[j].dep);
                                       printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
                                       printf("Choice of meal:");
                                       printf("\t\t\tCovid-19   status:\n");
                                       printf("%s",pgr[j].meal);
                                      
                                       printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
                                       printf("Contact details:\n");
                                       printf("%lld\n\n",pgr[j].cont);
                                       flag+=1;
                                if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                                {
                                    printf("\nWarning:You need to generate a mandatory covid report on arrival\n\n");
                                }
                                   
                                if(pgr[j].covchoice==1)
                                    {
                                        printf("\nWarning:You won't be allowed to travel\n\n");
                                    }
                                    
                                      
                                }
                }
    
        if(flag==1)
            printf("There  is %d Person with entered surname",flag);
        else if(flag!=1)
            printf("There  are %d People with entered surname",flag);

        
        if(flag==0)
                    {
                        printf("\nPassenger details not found");
                    }
        
}
        
 



void meal()
{
    int x,flag=0,flag1=0;
    
    printf("Sort the passenger details by meal\n");
do{
    printf("1)Vegetarian\n2)Non vegetarian\n3)Jain\n");
    scanf("%d",&x);
    
    switch(x)
    {
     
        case 1:flag1=0;
        case 2:flag1=0;
        case 3:flag1=0;
    
    for(int j=0;j<i;j++)
            {
                    if(pgr[j].mchoice==x)
                        {
                            printf("\nThe passenger details are as follows\n\n");
                               printf("Ticket number:\n");
                               printf("%s\n\n",pgr[j].tct);
                               printf("First name of passenger:");
                               printf("\t\tLast name of passenger:\n");
                               printf("%s",pgr[j].pfname);
                               printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
                               printf("Aadhar number:\n");
                               printf("%s\n",pgr[j].aadhar);
                               printf("\nDeparture location:");
                                printf("\t\tDestination location:\n");
                               printf("%s",pgr[j].dep);
                               printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
                               printf("Choice of meal:");
                               printf("\t\t\tCovid-19   status:\n");
                               printf("%s",pgr[j].meal);
                              
                               printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
                               printf("Contact details:\n");
                               printf("%lld\n\n",pgr[j].cont);
                               flag+=1;
                        if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                        {
                            printf("\nWarning:You need to generate a mandatory covid report on arrival\n\n");
                        }
                        if(pgr[j].covchoice==1)
                        {
                                printf("\nWarning:You won't be allowed to travel\n\n");
                        }
                              
                        }
            } break;
    
        default:printf("Enter a valid choice:\n");
                flag1=1;
                break;
    
        
    }
}while(flag1!=0);
    
        if(flag==1)
            printf("There  is %d Person with entered meal choice",flag);
        else if(flag!=1)
            printf("There  are %d People with entered meal choice",flag);

        
        if(flag==0)
        {
            printf("\nNo passenger has opted for entered meal option");
        }
        
            
}




void covid()
{
    int x,flag=0,flag1=0;
    
    
    printf("Sort passengers according to their covid reports\n");
    
    do{
        
    printf("1)Covid positive\n2)Covid negative\n3)At moderate risk\n4)At low risk\n");
    scanf("%d",&x);
     switch(x)
     {
         
         case 1:flag1=0;
         case 2:flag1=0;
         case 3:flag1=0;
    
    for(int j=0;j<i;j++)
                {
                        if(pgr[j].covchoice==x)
                                {
                                    
                                    printf("\nThe passenger details are as follows\n\n");
                                       printf("Ticket number:\n");
                                       printf("%s\n\n",pgr[j].tct);
                                       printf("First name of passenger:");
                                       printf("\t\tLast name of passenger:\n");
                                       printf("%s",pgr[j].pfname);
                                       printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
                                       printf("Aadhar number:\n");
                                       printf("%s\n",pgr[j].aadhar);
                                       printf("\nDeparture location:");
                                       printf("\t\tDestination location:\n");
                                       printf("%s",pgr[j].dep);
                                       printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
                                       printf("Choice of meal:");
                                       printf("\t\t\tCovid-19   status:\n");
                                       printf("%s",pgr[j].meal);
                                      
                                       printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
                                       printf("Contact details:\n");
                                       printf("%lld\n\n",pgr[j].cont);
                                       flag+=1;
                                if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                                {
                                    printf("\nWarning:You need to generate a mandatory covid report on arrival\n\n");
                                }
                                if(pgr[j].covchoice==1)
                                {
                                        printf("\nWarning:You won't be allowed to travel\n\n");
                                }
                                      
        
                                }
                }break;
         default:printf("Please enter a valid choice:\n");
                flag1=1;
     }
    }while(flag1!=0);

    if(flag==1)
        printf("There  is %d Person with entered covid status",flag);
    else if(flag!=1)
        printf("There  are %d People with entered covid status",flag);

    if(flag==0)
    {
        printf("\nNo Passenger details with entered covid status found");
    }
    
}


void modify()
    {
        char choice[100];
        int n,flag=0,flag1=0;
        long long int x;
        char veg[20]="Vegetarian",nonveg[20]="Non-Vegetarian",jain[20]="Jain",
            pos[20]="Covid-positive",neg[20]="Covid-negative",risk[20]="At mild risk",report[20]="At high risk";
        
        printf("Enter the ticket number of passenger to modify the details\n");
        scanf("%s",choice);
        for(int j=0;j<i;j++)
        {
            if(!strcmp(pgr[j].tct,choice))
               {
                printf("Enter the details you would like to modify\n");
                   printf("1)First name\n2)Last name\n3)Meal choice\n4)Aadhar number\n5)Departure location\n6)Destination location\n7)Covid status\n8)Contact number\n");
                   scanf("%d",&n);
                   switch(n)
                   {
                       case 1:printf("Enter the updated first name\n");
                           scanf("%s",choice);
                           flag1++;
                           strcpy(pgr[j].pfname,choice);
                           break;
                           
                       case 2:printf("Enter the updated last name\n");
                           scanf("%s",choice);
                           flag1++;
                           strcpy(pgr[j].plname,choice);
                           break;
                           
                       case 3:
                          
                           printf("Enter the UPDATED choice of meal:\n");
                           printf("1.Vegetarian\n2)Non vegetarian\n3)Jain\n");
                            scanf("%d",&pgr[j].mchoice);
                                  switch(pgr[j].mchoice)
                                          {
                                              case 1: strcpy(pgr[j].meal,veg);
                                                          break;
                                              case 2:strcpy(pgr[j].meal,nonveg);
                                                          break;
                                              case 3:strcpy(pgr[j].meal,jain);
                                                          break;
                                          }
                           flag1++;
                           break;
                           
                       case 4:printf("Enter the updated aadhar number\n");
                           scanf("%s",choice);
                           strcpy(pgr[j].aadhar,choice);
                           flag++;
                           break;
                         
                       case 5:printf("Enter the updated departure location\n");
                           scanf("%s",choice);
                           flag++;
                           strcpy(pgr[j].dep,choice);
                           
                           break;
                           
                    case 6:printf("Enter the updated destination location\n");
                           scanf("%s",choice);
                           flag++;
                           strcpy(pgr[j].des,choice);
                           break;
                           
                    case 7:printf("Enter the updated covid status\n");
                             
    
                         do{
                            printf("1)Covid positive\n2)Covid negative\n3)In contact with a covid positive person for past 15 days\n4)Any symptoms of covid-19 in past week\n5)Choose this option for more covid related guidelines\n");
                           scanf("%d",&pgr[j].covchoice);

                                           switch(pgr[j].covchoice)
                                                   {
                                                       case 1: strcpy(pgr[j].cov,pos);
                                                               break;
                                                       case 2:strcpy(pgr[j].cov,neg);
                                                               break;
                                                       case 3:strcpy(pgr[j].cov,risk);
                                                               break;
                                                       case 4:strcpy(pgr[j].cov,report);
                                                               break;
                                                       
                                                       case 5:
                                                           if (flag==0)
                                                           cov();
                                                       
                                                           else
                                                             printf("Enter a valid choice among 1/2/3/4.");
                                                           
                                                              flag++;
                                                            break;
                                                   }
                                     }while(pgr[j].covchoice==5);
                                      
                              flag1++;
                              break;
                       
                    case 8:printf("Enter the updated contact details\n");
                                 scanf("%lld",&x);
                                 flag1++;
                                 pgr[j].cont=x;
                                 break;
                           
                   default:printf("Invalid choice entered");
                           break;
                          
                      }
                   if(flag!=0)
                   {
                       printf("The updated ticket number is %s%s%s\n",pgr[j].dep,pgr[j].des,pgr[j].aadhar);
                                
                                strcpy(pgr[j].tct,pgr[j].dep);
                            // strcat(pgr[j].tct,pgr[j].dep);
                                 strcat(pgr[j].tct,pgr[j].des);
                                 strcat(pgr[j].tct,pgr[j].aadhar);
                }
                   
            }
        }
        if (flag1!=0||flag!=0)
        {
            printf("\nThe details have been successfully modified");
        }
        else
        {
            printf("\nTicket number not found");
        }
  }
    
void delete()
    {
        int flag=0;
        char choice[50];
        printf("Enter the ticket number of passenger to delete the details\n");
        scanf("%s",choice);
        
      for(int j=0;j<i;j++)
         {
                 if(!strcmp(pgr[j].tct,choice))
                 {
                     
                             pgr[j]=pgr[j+1];
                             flag++;
                 }
         }
        if(flag!=0)
        printf("The details have been successfully deleted");
        else
        printf("No Passenger with entered ticket number found");

    }
    



void covdel()
   {
       int flag=0;
       
       
     for(int j=0;j<i;j++)
        {
                if(pgr[j].covchoice==1)
                {
                    
                            pgr[j]=pgr[j+1];
                            flag++;
                }
        }
       if(flag!=0)
       printf("The details have been successfully deleted");
       else
           printf("No Covid +ve passenger found");

}


void waitconf()
      {
          int j;
        for(int k=0;k<=i;k++)
          {
          if(i<=170)
          {
              printf("\nThe passengers with confirmed booking are:\n\n");
              for(j=0;j<i;j++)
                          {
                                                 printf("Ticket number:   ");
                                                 printf("\t\t\tFirst name of passenger:\n");
                                                 printf("%s",pgr[j].tct);
                                                 
                                                 printf("\t\t\t%s\n\n",pgr[j].pfname);
                        }
              printf("There are %d confirmed tickets so far\n",j);
          }
          else if(i>170&&i<=200)
          {
              printf("The passengers in waiting:\n");
              for(j=170;j<i;j++)
                          {
                                                 printf("Ticket number:   ");
                                                 printf("\t\t\tFirst name of passenger:\n");
                                                 printf("%s",pgr[j].tct);
                                                 
                                                 printf("\t\t\t%s\n\n",pgr[j].pfname);
                                           
                  
                                          }
              printf("There are %d waiting tickets so far:",j-170);
                          }
          }
             
              
}

void locations()
{
    char departure[50],destination[50],flag=0;
    

    printf("Enter the departure location and the destination of the passenger to get the passenger details :  ");
    scanf("%s %s",departure,destination);
    

    for(int j=0;j<i;j++)
                {
                     if(!strcmp(departure,pgr[j].dep) && !strcmp(destination,pgr[j].des))
                                {
                                    

                                    printf("\nThe passenger details are as follows\n\n");
                                       printf("Ticket number:\n");
                                       printf("%s\n\n",pgr[j].tct);
                                       printf("First name of passenger:");
                                       printf("\t\tLast name of passenger:\n");
                                       printf("%s",pgr[j].pfname);
                                       printf("\t\t\t\t\t\t\t%s\n\n",pgr[j].plname);
                                       printf("Aadhar number:\n");
                                       printf("%s\n",pgr[j].aadhar);
                                       printf("\nDeparture location:");
                                       printf("\t\tDestination location:\n");
                                       printf("%s",pgr[j].dep);
                                       printf("\t\t\t\t\t\t%s\n\n",pgr[j].des);
                                       printf("Choice of meal:");
                                       printf("\t\t\tCovid-19   status:\n");
                                       printf("%s",pgr[j].meal);
                                      
                                       printf("\t\t\t\t\t%s\n\n",pgr[j].cov);
                                       printf("Contact details:\n");
                                       printf("%lld\n\n",pgr[j].cont);
                                       flag+=1;
                                if(pgr[j].covchoice==3||pgr[j].covchoice==4)
                                {
                                    printf("\nWarning:You need to generate a mandatory covid report on arrival\n\n");
                                }
                                if(pgr[j].covchoice==1)
                                {
                                        printf("\nWarning:You won't be allowed to travel\n\n");
                                }
                                      
        

                                }
                }
        

        if(flag==0)
                    {
                        printf("No Passengers found travelling from the location entered");
                    }
        

}
    
    
      


int main()
{
    int choice,flag=1;
   
    do
    {
        printf("\n\nPlease select an option from menu below----\n\n");
        printf("1. Add the Passenger details\n");
        printf("2. Find the passenger details by Ticket number\n");
        printf("3. Find the passenger details by First Name\n");
        printf("4. Find the passenger details by Last Name\n");
        printf("5. Sort the passengers details by meal\n");
        printf("6. Find the passenger details by departure and destination location\n");
        printf("7. How many more tickets can be booked??\n");
        printf("8. Modify or delete the details of passengers\n");
        printf("9. Sort the passengers according to covid-19 results\n");
        printf("10. Sort the passengers based on whether their ticket has confirmed or is in waiting\n");
        printf("11. To Exit\n");
        
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addetails();
            break;
        case 2:
            ticket_no();
            break;
        case 3:
            name();
            break;
        case 4:
            surname();
            break;
        case 5:
            meal();
            break;
        case 6:
                locations();
            break;
        case 7:
                moretct();
            break;
        case 8:
                printf("\n\nEnter the choice:");
                printf("1)Modify the details of a passenger\n");
                printf("2)Delete the details of a passenger\n");
                printf("3)Delete the details of covid positive or high risk patients\n");
                scanf("%d",&choice);
                    switch(choice)
                    {
                        case 1:modify();
                            break;
                        case 2:delete();
                            break;
                        case 3:covdel();
                            break;
                        default:printf("Invalid choice entered");
                            break;
                    }
            break;
        case 9:
            covid();
            break;
        case 10:
            waitconf();
            break;
        case 11:
            flag=0;
            break;
        }
  }while(flag==1);

    return 0;
}

