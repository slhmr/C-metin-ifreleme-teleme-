/*******************************/
/*     SALÝH EMRE KUL          */
/*       0403030024            */
/*******************************/
	#include <windows.h>
	#include <string.h>
	#include<stdio.h>
	#include<conio.h>
	#include <ctype.h>
	#include <math.h>
	#include <iostream>
	#include <fstream>
	#define max 10000000

	using namespace std;
	

char DA[80];char SDO[80];char SA[80];char CDA[80];char YDA[80];char line[max];
int boy, x, om, c_om;char *sifre;
char *kodla(char h_gir[], int boy, int k_mik){
  	 				 char alfabe[91]={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789_{}[]#()<>%:;.?*-+/^&|~!=,$@"};
					 static int kon_ = 90;
  					 char *sifre = new char[max];
			   		 for(int x=0; x<boy; x++){
 					 		  		 for(int y=0; y<kon_; y++){
   									 		  if(!isalnum(h_gir[x]) && !ispunct(h_gir[x]) )
    								 		  sifre[x] = h_gir[x];
            						 		  else if(h_gir[x]==alfabe[y]){
                 					 		  	   						   if(k_mik>=0)
     								 									   sifre[x] = alfabe[(y+k_mik)%kon_];                
                 					 									   if(k_mik<0)
    								  									   sifre[x] = alfabe[(y+(k_mik%kon_)+kon_)%kon_];
                 
   				 					  									   } 
														   }
						   }  
  return sifre;
}
void gor(){
	 int sira[250]={0}; char satir[1000000];int boyut;
	 ifstream oku(SDO);
				 if (oku.is_open()){
						oku.getline(satir,1000000);
					 	boyut = strlen(satir);
				 		for(int i=0;i<251;i++)
								for(int j=0;j<boyut;j++)
									if(satir[j]==static_cast<char>(i))
			   									++sira[i];
									 	 		system("cls");cout<<"\t Acilan Dosya--->\t:"<<" "<<SDO<<endl;
								 				cout << "\n\t\t\t KARAKTER TABLOSU "<<endl;
									 	 	 	cout << "\t\t\t================="<<endl;
										 	 	cout<<"\n\t a b c d e f g h i j k l m n o p q r s t u v w x y z \n\t A B C D E F G H I J K L M N O P Q R S T U V W X Y Z \n\t 0 1 2 3 4 5 6 7 8 9 _ { } [ ] # ( ) < > % : ; . ? * \n\t - + / ^ & | ~ ! = , $ @"<<endl<<endl;
									 	 		for ( int i = 0 ; i <= 77 ; putchar( 196 ) , i++ );
												  				 cout << "\n\t\t\t DOSYADAKI KARAKTERLER "<<endl;
									 	 		  				 cout << "  \t\t\t======================="<<endl;
									 	 		  				 cout<< "\n Toplam Karakter Sayisi : "<<oku.gcount()<<"\n\n";
			 			  				 		  				 for(int y=0;y<250;y++)
					   					  	 	  					 	 if(sira[y]!=0)
					   					  	 	  					 	 cout<<static_cast<char>(y)<<" :"<<sira[y]<<"\t";
																	 }
											    
												
								else cout << "Dosya Acilamadi.....!!!!"; 
								cout<<"\n";
								for ( int i = 0 ; i <= 77 ; putchar( 196 ) , i++ );cout<<"\t\n";
								oku.close();
	 }
int main(){
		 system("color 02");char sec;
		 cout<<"       ---------------------------------------------------------"<<endl;
   		 cout<<"       !!!!Bu Program Salih Emre KUL Tarafindan Gelistirildi!!!!"<<endl;
   		 cout<<"       ---------------------------------------------------------"<<endl;
	     cout<<"\n\n";
	     cout<<"    ***********************************************"<<endl;
	   	 cout<<"    *______________ SEK-KOD URETICI ______________*"<<endl;
	   	 cout<<"    *     *                                       *"<<endl;
	   	 cout<<"    *  1  *  DOSYAYI SIFRELE                      *"<<endl;
	   	 cout<<"    *     *                                       *"<<endl;
	   	 cout<<"    *  2  *  SIFRELI DOSYAYI COZ                  *"<<endl;
	   	 cout<<"    *     *                                       *"<<endl;
	   	 cout<<"    *  3  *  SIFRELI DOSYAYI OKU                  *"<<endl;
	   	 cout<<"    *     *                                       *"<<endl;
	   	 cout<<"    *  4  *  CIKIS                                *"<<endl;
	   	 cout<<"    ***********************************************"<<endl;
	   	 cout<<" "<<endl;
	   	 cout<<" "<<endl;
	   	 cout<<" "<<endl;
	   	 cout<<" Bir Islem Seciniz..=> ";cin>>sec;      
	    switch(sec){	
	             case '1':{ 
				 	  system("cls");
	                  cout << " \n Sifrelenecek Dosyanin Adini Giriniz 		=> ";cin>>DA; 
	                  cout << " Oteleme Miktarini Tam Sayi Olarak Giriniz 	=> ";cin>>om;
  			   		   cout<<  " Yeni Dosya Icin Bir Isim Giriniz		=> ";cin>>SA;
		   			   cout<<"===================================================" << endl; 
	                   ifstream oku_yaz (DA,ios::in);
                   	   ofstream yaz (SA ,ios::app);
	                   if (oku_yaz.is_open()){
					  	 					  if (yaz.is_open()){                              
  											                   while (! oku_yaz.eof()){
	                                                    	   		 				   oku_yaz.getline(line,max);
	                                                    							   boy = strlen(line);
 																					   sifre = kodla(line, boy, om);
 																					   for(x=0; x<boy; x++) yaz<<sifre[x];  												   	  				   
	  												   					  		  		} 
									   					  		  		        yaz.close();
	  												   							}	
															 			   												    	  	
														   else cout << "Dosya Acilamadi.....!!!!";getch();system("cls");return main();											    	  
								    	   				oku_yaz.close();
														   }
														   
	                             else cout << "Dosya Acilamadi.....!!!!";getch();system("cls"); return main();
	                       		 getch();system("cls"); return main();  
							 }	
					case '2':{ 
						 	   system("cls");
				   		 	   cout<< " Cozulecek Dosyanin Adini Giriniz    	=> ";cin>>CDA; 
	                  		   cout<< " Sifreyi Cozmek Icin Oteleme Miktarini \n Onune (-) Isareti Koyarak Giriniz. 	=> ";cin>>c_om;
                  		       cout<< " Yeni Dosya Icin Bir Isim Giriniz	=> ";cin>>YDA;
					  		   cout<<"===================================================" << endl; 
	                  		   ifstream sifrecoz (CDA,ios::in);
	                  		    ofstream yaz (YDA ,ios::app);
								if (sifrecoz.is_open()){
								   						if (yaz.is_open()){ 						                              
															  while (! sifrecoz.eof()){
								  		   					  		   				   sifrecoz.getline(line,max);
          																			   boy = strlen(line);
 										   											   sifre = kodla(line, boy, c_om);						 				   
 										   											   for(x=0; x<boy; x++) yaz<<sifre[x];  												   	  				   
	  												   								   }
                                                                          
																		 yaz.close();
  											            				 }
       											           else cout << "Dosya Acilamadi.....!!!!"; getch();system("cls"); return main();
												    	   
														   }
	                             else cout << "Dosya Acilamadi.....!!!!";getch();system("cls"); return main();
	                       		 sifrecoz.close();
	                       		 getch();system("cls"); return main();
   							 }
			        case '3':{
						 	  system("cls");
						 	  cout<<" Sifreyi Dogru Bir Sekilde Cozebilmemiz Icin Kaydirma Miktarini \n    Bulmamiz Gerekir Bunun Icin Okuttugumuz Dosya Icerisinde En Cok Tekrar\n    Eden Harfden Yola Cikmaliyiz.. \n \n";
					   		  	  cout<<"----------------------------------------------------"<<"\n";
   		 						  cout<<"| Ingilizcede En Cok Tekrar Eden Harf		|e |		"<<"\n";
   		 						  cout<<"----------------------------------------------------"<<"\n";
								  cout<<"| Turkcede En Cok Tekrar Eden Harf		|a |			"<<endl;
   		 						  cout<<"----------------------------------------------------"<<"\n";	  
							  cout << "\n\t Sifreli Dosyanin Adini Giriniz 	=> ";cin>>SDO;gor();
				   			  getch();system("cls"); return main();
				   			  }
	                case '4':{
						 	  
							 return 0;
                       		 default:
							 cout<<"\aSeciminizi Yanlis Yaptiniz Lutfen Tekrar Deneyin..."<<endl;getch();system("cls");
	                       	 return main();
								 
								 }
				} 

	}

