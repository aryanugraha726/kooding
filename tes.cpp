#include <stdio.h>
#include <conio.h>

main()
{ float motor,sewa,perjam,ambil,kembali,waktu,Bsewa,Brider,total,denda; int rider;
  char ulang,t,T,y,Y;

	do
	{
	puts("RENTAL MOTOR HOLIDAY");
	puts("--------------------");
	puts("1.MANUAL");
	puts("2.MATIC");
	puts("3.TRAIL");
	puts("--------------------");
	printf("PILIH 1/2/3    = ");scanf("%f",&motor);

		if(motor==1)
		{
			sewa=100000;
			perjam=75000;
			printf("Motor yang dipilih adalah MANUAL");
		}
		if(motor==2)
		{
			sewa=150000;
			perjam=100000;
			printf("Motor yang dipilih adalah MATIC");
		}
		if(motor==3)
		{
			sewa=200000;
			perjam=150000;
			printf("Motor yang dipilih adalah TRAIL");
		}
	
	printf("\nMotor diambil mulai pukul   = ");scanf("%f",&ambil);
	printf("Dikembalkan pukul           = ");scanf("%f",&kembali);
	printf("Pakai Rider [1=Ya 0=Tdk]    = ");scanf("%d",&rider);
	
	switch(rider)
	{
		case 0 : rider=0;break;
		case 1 : rider=50000;break;
	}
	if(kembali>ambil)
	{
		waktu=kembali-ambil;
		if(waktu<=3)
		{
			Bsewa=sewa;
		}
		else
		{
			denda=waktu-3;
			Bsewa=sewa+denda*perjam;
		}
		Brider=rider*waktu;
		total=Bsewa+Brider;
		printf("BIAYA JASA RIDER    = %.0f",Brider);
		printf("\nBIAYA RENTAL MOTOR YANG HARUS DIBAYAR ADALAH = Rp%.0f",Bsewa);
		printf("\nTOTAL UANG YANG HARUS DIBAYAR Rp%.0f",total);	
		}
	else
	{
		waktu=12-ambil+kembali;
		if(waktu<=3)
		{
			Bsewa=sewa;
		}
		else
		{
			denda=waktu-3;
			Bsewa=sewa+denda*perjam;
		}
		Brider=rider*waktu;
		total=Bsewa+Brider;
		printf("BIAYA JASA RIDER    = %.0f",Brider);
		printf("\nBIAYA RENTAL MOTOR YANG HARUS DIBAYAR ADALAH = Rp%.0f",Bsewa);
		printf("\nTOTAL UANG YANG HARUS DIBAYAR Rp%.0f",total);
		}

		printf("\n");
		printf("ADA YANG MAU RENTAL LAGI [Y/T] ? ");scanf("%s",ulang);
	}while(ulang=='y'||ulang=='Y');
	if(ulang==t||ulang==T)
		{
			printf("Tekan ENTER untuk kembali ke Source Code...!");
		}
	
 getch();
 return 0;
}

