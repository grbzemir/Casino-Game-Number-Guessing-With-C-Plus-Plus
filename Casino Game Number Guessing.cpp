#include<iostream>
#include<cstdlib>
#include<cstring>
#include<ctime>

using namespace std;


void Cizgi ( int n , char sembol );

void Kurallar ();

int main()
  
{ 

    string OyuncuAdi;
    int Bakiye;
    int BahisMiktari;
    int misafir;
    int zar;
    char secim;

    srand(time(0));

    Cizgi(60,'-');

    cout << "\t\tCASINO OYUNU" << endl << endl;

    Cizgi(60,'-');

    cout << "\n\nOyuncu Adinizi Giriniz: ";
    getline (cin , OyuncuAdi );

    cout<<"\n\n"<<OyuncuAdi<<", Bakiyenizi Giriniz: $";
    cin>>Bakiye;



    do  

    {

        system("cls");
        system("color B");
        Kurallar();
        cout<<"\n\n Sizin Mevcut Bakiyeniz  $ : " << Bakiye << endl; 

         // oyuncunun bahis miktarini alalım

         do 

         {
           
           cout<< OyuncuAdi << " Bahis Miktarinizi Giriniz: $";

           cin >> BahisMiktari;

              if (BahisMiktari > Bakiye)

                cout << "Bahis Miktariniz Bakiyenizden Daha Buyuk Olamaz" << endl << "Bahis Miktarinizi Tekrar Giriniz" << endl << endl;

         }

                while (BahisMiktari > Bakiye);

                

                    // oyuncudan numara alalım

                    

                

                do
                  
                 {

                  cout<<"Misafir 1 ile 10 arasinda bir sayi giriniz: ";
                    cin>>misafir;
    
                        if (misafir <= 0 || misafir > 10)

                        {

                            cout << "Lutfen 1 ile 10 arasinda bir sayi giriniz" << endl << endl;

                        }


                 } 

                while (misafir <= 0 || misafir > 10);

                // zar atalım

                    zar=1+rand()%10;

                    if (misafir == zar)

                    {

                        cout<< "\n\nTebrikler! " << zar << " sayisini bildiniz." << endl;
                        cout<< "Bahis Miktariniz $ " << BahisMiktari * 10 << " olarak arttirildi" << endl;
                        Bakiye = Bakiye + BahisMiktari * 10;


                        
                    }

                    else

                    {

                        cout<< "\n\nUzgunum Bugun Sansli Gununuzde Degilsiniz ! " << zar << " sayisini bilemediniz." << endl;
                        cout<< "Bahis Miktariniz $ " << BahisMiktari  << "\n" << endl;
                        Bakiye = Bakiye - BahisMiktari ;

                        
                    }

                     cout << "\nKazanan Numara  : " << zar <<"\n";
                     cout << "\n"<<OyuncuAdi<<", Bakiyeniz $ " << Bakiye << "\n";   

                     if(Bakiye == 0)

                     {

                         cout << "Bakiyeniz Bitti ! " << endl << "Oyunu Kaybettiniz ! " << endl << endl;
                         break;

                     }

                     cout<<"\nOyuna Devam Etmek Ister Misiniz ? (E/H) : ";
                     cin>>secim;

                }

                        while (secim == 'e' || secim == 'E');
    
                        

                            cout<<"\n\n\n";
                            Cizgi(70,'-');
                            cout<<"\n\n Oyunu Oynadiginiz Icin Tesekkurler ! " << Bakiye << endl;
                            Cizgi(70,'-');

                            return 0;

                      }

                      

                void Cizgi ( int n , char sembol )

                {
                   
                   int i;

                    for ( i = 0; i < n; i++)

                    cout << sembol;

                    cout << endl;


         }

         void Kurallar()

         {

            system("cls");
            cout<<"\n\n";
            Cizgi(80,'-');
            cout<<"\t\tOYUN KURALLARI" << endl;
            Cizgi(80,'-');

            cout<<"\n1. Oyuncu 1 ile 10 arasinda bir sayi girer." << endl;
            cout<<"\n2. Oyuncu Bahis Miktarini Girer." << endl;
            cout<<"\n3. Oyuncu Yanlis Numaraya Bahis Yaparsa Kaybeder." << endl;
            Cizgi(80,'-');


         }


    

         


    


 




    


