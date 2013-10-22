/*Bu program banka hesabını çalışmasını sağlamaktadır.*/
#include<stdio.h>
#include <conio.h>
#include<iostream>
#include <string>

using namespace std;

void main()
{
	string kullaniciAdi;
	int anapara = 0;
	int paraEkleme = 0;
	int paraCekme = 0;
	int havale = 0;
	int tercih = 0;
	int sifre = 0;
	int toplamPara = 0; 
	int kalanPara = 0;//Değişkenleri tanımlamak için kullanılmıştır.

	printf ("kullanici adinizi giriniz :" ) ;
	cin>>kullaniciAdi ;
	printf ("sifreyi giriniz : ") ;
	cin>>sifre;
	
	if (kullaniciAdi=="filiz" &&  sifre==123 )
	{
		printf("Hoşgeldiniz ");
		
		printf ("Menü \n");
		printf ("======== \n");
		printf ("1-Ana Para\n");
		printf ("2-Para Ekleme\n");
		printf ("3-Para Cekme\n");
		printf ("4-Havale\n");
		printf ("5-Cikis\n");
		printf ("Tercihinizi giriniz (1/2/3/4/5) : \n" ) ;
		scanf ("%d" , &tercih) ;
		//Menüden tercih yapmak için printf ile okutulmuştur.
		if (tercih == 1 )
		{
			anapara=500;
			printf("Anapara :%d\n",anapara);
		}
		else if(tercih==2)
		{
			printf("para  miktarini giriniz:");
		    scanf("%d", &paraEkleme);
			anapara=500;

				toplamPara=anapara+paraEkleme;
				printf("Toplam para miktari:%d", toplamPara );
		}
		else if(tercih==3)
		{
		printf("para miktarini giriniz:");
		scanf("%d", &paraCekme);
		
		if (paraCekme<=500)
		{
			anapara=500;
		kalanPara=anapara-paraCekme ;
		printf("kalan para miktari:%d" ,kalanPara);
		}
		else 
		{  
			printf("bakiyeniz yeterli degil");
		}
		}
		else if(tercih==4)
		{

            printf("havale miktarini giriniz:");
			scanf("%d", &havale);
			if ( havale<=500 )
				
			{
				printf("gonderme başarili ");
				anapara=500;
		        kalanPara=anapara-havale;
				printf("kalan para miktari:%d" ,kalanPara);
			  
			}
			
			else 
			{  
				printf("bakiyeniz yeterli degil");
			}


		}
		else if(tercih==5)
		{
			printf("çikiş yaptiniz.tesekkürler:");
		}
	
	
	}
	else
	{
		printf("Hatali Giris. Tekrar deneyiniz. ");//Menüden seçilen tercihin yapılmasını sağlamıştır.
	
	
	}
	getch(); 

       
	}
