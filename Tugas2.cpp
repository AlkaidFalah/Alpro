    #include <iostream>
using namespace std;

  /* Mebuat fungsi Max,Min,Max Array,Min Array,Even,Odd,Factor,Sum Even,Sum Odd */

//-Fungsi Max

  int Maxnum (int a,int b)
  {
   int max;
   cout << "Angka " << a <<" Dan " << b << " yang Lebih Besar Adalah: ";
   if (a > b)
   {
       max = a;
   }
   else
   {
       max = b;
   }
   return max;
  }

//-Fungsi Min

   int Minnum (int x,int y)
   {
       int min;
          cout << "Angka " << x <<" Dan " << y << " yang Lebih Kecil Adalah: ";
       if (x < y)
       {
          min = x;
       }
       else
       {
           min = y;
       }
       return min;
   }

//-Fungsi Max Array
  int arr[] = {5,8,3,2,1,9,4};
  int c= sizeof(arr)/ sizeof(arr[0]);
  int maxArray(int arr[],int c)
        {
            int max_num = arr [0];
            for (int k =1;k<c;k++)
            {
                if(arr[k]>max_num){
                  max_num=arr[k];
                }
            }
            return max_num;
        }

//-Fungsi Min Array
  int Arr[] = {5,8,3,2,1,9,4};
  int p= sizeof(Arr)/ sizeof(Arr[0]);
  int minArray(int Arr[],int p)
        {
            int Min_num = Arr [0];
            for (int j =1;j<p;j++)
            {
                if(Arr[j]<Min_num){
                  Min_num=Arr[j];
                }
            }
            return Min_num;
        }

//-Fungsi Odd =Ganjil

 bool isganjil(int p)
 {
     cout << "Angka " << p << " Adalah " ;
     {
          if (p % 2 == 1)
            cout << "Ganjil"<< endl;
             else
                cout << "Genap"<< endl;
     }

     return isganjil;
 }

//-Fungsi Even=Genap

  bool isgenap (int o)
  {
      cout << "Angka " << o <<" Adalah ";
      {
          if (o % 2 == 0)
            cout << "Genap" << endl;
            else
                cout << "Ganjil" << endl;
      }
      return isgenap;
  }

//Fungsi Factor

  bool factor (int num)
  {
      cout << "Faktor Dari " << num << " Adalah ";
      for(int i=1;i<=num; i=i+1)
      {
         if(num % i == 0)
            cout << i << " ";
      }
      return factor;
  }
// Fungsi Sum Even
   int Sumven( int w ) {
      int s;
      int sum = 0;
      cout << "even numbernya Adalah: ";
      for( s = 1; s <= w; s++ ) {
          if( s % 2 == 0 ) {
             cout << s << ", ";
             sum = sum + s;
             }
          }
   cout << endl;
   return sum;
}

// Fungsi Sum Odd
   int sumodd( int f ) {
      int g;
      int sumy = 0;
      cout << "Odd numbernya adalah: ";
      for( g = 1; g <= f; g++ ) {
          if( g % 2 == 1 ) {
             cout << g << ", ";
             sumy = sumy + g;
             }
          }
   cout << endl;
   return sumy;
}

int main()
{
  //Nilai Paling Besar//
  int x = Maxnum (17,10);
  cout << x << endl;
  cout << endl;

  //Nilai Paling Kecil//
  int i = Minnum (15,7);
  cout << i << endl;
  cout << endl;

  // nilai maksimum dari array
  cout << "Angka Maksimum Dari array adalah: "<< maxArray(arr,c) << endl << endl;

  // nilai minimum dari array
  cout << "Angka Minimum Dari Array Adalah: " <<minArray(Arr,p)<< endl << endl;

  // mencari ganjil/odd
  isganjil (23);
  cout << endl;

  //mencari genap/even
  isgenap (22);
  cout << endl;

  //mencari factor
  factor (100);
  cout << endl << endl;

  //mencari sum even/genap
  int sum = Sumven( 12 );
   cout << "Sumnya adalah: " << sum;
   cout << endl << endl;

  //mencari sum odd/ganjil
  int sumy = sumodd( 15 );
   cout << "Sumnya adalah: " << sumy;
   cout << endl << endl;
}
