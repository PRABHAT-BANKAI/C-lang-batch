// #include <stdio.h>

// int main()
// {
//   // int record[5];

//   // for (int i = 0; i < 5; i++)
//   // {

//   //   printf("Enter Your number");
//   //   scanf("%d", &record[i]);
//   // }

//   // for (int j = 0; j < 5; j++)
//   // {
//   //   printf("%d", record[j]);
//   // }

//   // int record[5] = {15,55,35,20,40};
//   //  int record2[5] = {15,55,35,20,40};

//   // int sum =0 ;

//   // for(int i =0;i<5;i++){
//   //   //  sum = sum+ record[i]
//   //   sum+= record[i]+record2[i];
//   // }

//   // printf("%d",sum);

//   int record[5] = {15, 55, 35, 20, 40};

//   for (int i = 0; i < 5; i++)
//   {

//     printf("Enter Your number");
//     scanf("%d", &record[i]);
//   }
//   for (int j = 0; j < 5; j++)
//   {
//     printf("%d", record[j]);
//   }

//   // int array[5]={22,33,44,55,66}

//   // 22
//   // 44
//   // 55
//   // 66

//   return 0;
// }

#include <stdio.h>
int main()
{

  int record[5] = {22, 33, 44, 55, 66};
  // int sum=0;

  for (int i = 0; i < 5; i++)
  {

    if (i % 2 == 0)
    {
      printf("%d\n", record[i]);
    }
  }
  //  printf("%d",sum);

  return 0;
}

//ouput 
//66
//55
//44
//33
//22