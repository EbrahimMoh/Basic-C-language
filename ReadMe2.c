#include <stdio.h>
#include <stdlib.h>

struct User
{
   char name[30];
   char address[30];
   float total;
   float totalA;
   float totalEA;
   float totalWA;

   struct electric
  {
   float currentE;
   float previousE;
   float totalE;

  }p;

  struct water
  {
   float currentW;
   float previousW;
   float totalW;

  }g;

};
struct User getInfo();
struct User calculateBill(struct User user);
struct User calculateTotalBillsAfterDiscount(struct User user);
void display(struct User user[]);


int main()
{
  int i;
  struct User user[4];
  for(i=0;i<3;i++){
   user[i]=getInfo();
   user[i]=calculateBill(user[i]);
   user[i]=calculateTotalBillsAfterDiscount(user[i]);

  }

  display(user);


}


struct User getInfo()
{
int i;
struct User user;

     printf("\nEnter House Owner Name: ");
     scanf("%s",&user.name);
     printf("Enter House Address: ");
     scanf("%s",&user.address);
     printf("Enter Current Unit for Electric: ");
     scanf("%f",&user.p.currentE);
     printf("Enter Previous Unit for Electric: ");
     scanf("%f",&user.p.previousE);
     printf("Enter Current Unit for Water: ");
     scanf("%f",&user.g.currentW);
     printf("Enter Previous Unit for Water: ");
     scanf("%f",&user.g.previousW);

     return user;

  }

  struct User calculateBill(struct User user)
  {


    float discountE;
     float discountW;
    user.p.totalE= user.p.currentE - user.p.previousE;

    if (user.p.totalE<100)
    {
        discountE = 0.10;
        user.p.totalE = user.p.totalE*discountE;
    }
    else if ((user.p.totalE>=100)&&(user.p.totalE<200))
    {
        discountE = 0.20;
        user.p.totalE = user.p.totalE*discountE;
    }
    else
    {
      discountE = 0.40;
        user.p.totalE = user.p.totalE*discountE;
    }

    user.g.totalW= user.g.currentW - user.g.previousW;

    if(user.g.totalW < 20)
    {
       discountW=0.50;
       user.g.totalW= user.g.currentW * discountW;
    }
    else
    {
      discountW=1.0;
       user.g.totalW = user.g.totalW ;

    }

return user;
  }

  struct User calculateTotalBillsAfterDiscount(struct User user)
  {

    float discountE;
     float discountW;
    user.total= user.p.totalE+user.g.totalW;

    if (user.p.totalE < 100)
    {
        discountE = 0.20;
      user.totalEA = user.p.totalE - (user.p.totalE * discountE);
    }
    else
    {
         discountE = 0.10;
      user.totalEA = user.p.totalE - (user.p.totalE * discountE);

    }

    if (user.g.totalW < 10)
    {
      discountW = 0.20;
      user.totalWA = user.g.totalW - (user.g.totalW * discountW);

    }
    else
    {
        discountW = 0.10;
      user.totalWA = user.g.totalW - (user.g.totalW * discountW);

    }

    user.totalA = user.totalEA + user.totalWA;

    return user;
  }

  void display(struct User user[])
  {

    printf("HOUSE BILL REPORT\n\n");
int i;
     for(i=0;i<3;i++)
    {
      printf("House Owner Name : %s\n",user[i].name);
      printf("House Address : %s\n",user[i].address);
      printf("Electric bill : %.2f\n",user[i].p.totalE);
      printf("Water bill : %.2f\n",user[i].g.totalW);
      printf("Total bills : %.2f\n",user[i].total);
      printf("Total bills after discount: %.2f\n",user[i].totalA);


     }

  }



