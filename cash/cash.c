#include <stdio.h>
#include <cs50.h>

//list of variables

   //is the card valid
   bool isValid = true;
   // the creditcard number
   long input;
   //mod stands for modules, and is used to single out each number as seen later
   int mod = 10;
   //the location at which number I am checking
   int place = 1;
   //num is the number I am checking that has been singled out
   int num = 0;
   //total of numbers * 2 located at locations numbered with even numbers
   int totalEven = 0;
   //total of numbers located at locations numbered with odd numbers
   int totalOdd = 0;
     //gets input and stores it in well.. input
     input = get_long("Number: ");

      // a formula to single out a number, starting with the ones and then as you can see, mod is muliplied by 10 to go over the second number.

      num = ((input % mod) - (input % (mod /10))) / (mod/10);

      //loops 16 times
      for(int i = 0; i < 16; i++)
      {
          // if the place is even execute below
          if(place % 2 == 0)
          {
              totalEven = totalEven + num * 2;
          }
          //else do this
          else if (place % 2 != 0)
          {
             totalOdd = totalOdd + num;
          }
          //moves to the next number
          mod = mod * 10;
          place++;
      }

      //fufils the last step of the algorithm

      if((totalEven + totalOdd) % 10 == 0 )
      {
          isValid = true;
      }
      else
      {
          isValid = false;
      }
